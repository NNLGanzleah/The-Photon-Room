// Photon Room - IR Emitter Safety Interlock (reference firmware)
// CC0 1.0 - Nick (BlueBamboo), Muscatine, Iowa - July 2026
// Concept-stage logic: the beam runs ONLY while every gate is green.
// Pins and thresholds are illustrative; detailed design finalizes
// hardware. Any implementation must meet IEC 60825-1 Class 1 at every
// accessible point. The rails ship welded to the rocket.

const int BEAM_PWM       = 5;    // beam driver output
const int LOS_PHOTODIODE = A0;   // reflectometry return from receiver
const int TEMP_SENSOR    = A1;   // emitter thermal sense

const int LOS_MIN  = 512;        // floor: receiver echo present
const int TEMP_MAX = 700;        // thermal ceiling (ADC units)
const unsigned long BEACON_MAX_MS = 50;  // heartbeat freshness

unsigned long lastBeacon = 0;

bool receiverBeaconFresh() {
  return (millis() - lastBeacon) < BEACON_MAX_MS;
}

void onBeaconPacket() {          // radio ISR calls this on heartbeat
  lastBeacon = millis();
}

void setup() {
  pinMode(BEAM_PWM, OUTPUT);
  analogWrite(BEAM_PWM, 0);      // born dark
}

void loop() {                    // loop budget << 10 ms: fault-to-dark
  bool losClear  = analogRead(LOS_PHOTODIODE) > LOS_MIN;
  bool tempOK    = analogRead(TEMP_SENSOR)    < TEMP_MAX;
  bool handshake = receiverBeaconFresh();

  if (losClear && tempOK && handshake) {
    analogWrite(BEAM_PWM, 255);  // all gates green: beam on
  } else {
    analogWrite(BEAM_PWM, 0);    // any doubt: hard dark
  }
}

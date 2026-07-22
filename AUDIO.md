# The Audio Tier — WAV Over Air

*The annex that answers the question that started everything: how does
lossless music reach your headphones with no wire and no charger, ever?*

## The Problem, Honestly

A CD-quality WAV stream needs **1.41 Mbps**. Bluetooth's practical audio
pipe carries less — which is why every Bluetooth codec ever made is lossy.
Wi-Fi carries lossless easily (AirPlay has done it to speakers for a
decade) but a Wi-Fi radio drinks roughly ten times a Bluetooth radio's
power — which is why no mainstream Wi-Fi headphone exists. Bandwidth or
battery: pick one.

**The Photon Room picks both.** The beam pays the battery bill; Wi-Fi
carries the WAV.

## The Flywheel Math (the key insight)

The beam never needs to match the radio's *live* draw. It only needs to
win the *daily energy ledger*:

    Wi-Fi audio receiver, playing:   ~1 W
    Listening per day:                4 h   ->  ~4 Wh consumed
    IR beam delivery:                 0.5 W x 24 h  ->  12 Wh delivered

    Beam income ~= 3x listening expense.

A small buffer cell (a few Wh) is the **flywheel**: the beam trickles in
around the clock; the radio draws in bursts; the battery smooths the two.
Result: **a lossless wireless headphone that never sees a charger** — 
energy-solvent by design, for any listening habit under ~10 h/day per
half-watt of beam.

## Prior Art & Parallel Roads (the industry agrees)

- **Qualcomm XPAN** — Wi-Fi audio for earbuds: 24-bit/96kHz lossless at
  4.2 Mbps on the S7 Pro platform with *micro-power Wi-Fi*. Shipped in
  the Xiaomi Buds 5 Pro Wi-Fi (2025); currently locked to specific
  Xiaomi phones. Proof the micro-power radio exists.
- **Gaming 2.4 GHz dongles** — uncompressed 16-bit/48kHz PCM over
  proprietary RF: genuine WAV-grade wireless audio, on shelves today,
  USB-C source dongle included. Tuning aside, the transport is solved.
- **Bluetooth HDT** — the standard's own 8 Mbps rebuild, spec landing
  2026–27, lossless codecs built in. The public road arrives late-decade.
- **AirPlay / RTP over Wi-Fi** — bit-perfect lossless to receivers,
  open implementations available (Shairport-Sync).

The Photon Room's contribution is not a new radio. It is **the room that
feeds the radio** — the missing power half of a solved bandwidth problem.

## Build Paths

**v0.1 — The Maker Build (this month):**
Raspberry Pi Zero 2 W running Shairport-Sync (open AirPlay 2 receiver)
+ USB/I2S DAC + wired output into any headphones. Power: ~0.5–1.2 W.
Feed it from a buffer cell inside the beam cone. Result: an AirPlay
headphone rig, lossless from any Apple device, charger-free in the room.

**v0.5 — The Dongle Build (this afternoon):**
Any uncompressed-PCM gaming headset + its USB-C dongle in the laptop.
WAV over air today; add the receiver strip when the beam tier exists.

**v1.0 — The Integration (the ask to industry):**
A micro-power Wi-Fi audio SoC (XPAN-class, but open) + PV receiver strip
+ small buffer cell, inside an audiophile-tuned headphone. Every part
exists. Nobody has bolted them together. **Fork this and be first.**

## Open Questions (fork and answer)

Micro-power Wi-Fi licensing vs. ESP32-class DIY · buffer cell sizing vs.
listening profiles · receiver-strip placement on headbands · latency
targets for video sync · multi-listener rooms (one beam, many flywheels).

## License

CC0 1.0 Universal, same as the house. No patent sought; none ever will
be. First published July 2026 — prior art, given to everyone, takeable
from no one. Courtesy credit: *Photon Room, by Nick (BlueBamboo),
Muscatine, Iowa.*

*The room powers the radio. The radio carries the song. The sun pays
for both.*

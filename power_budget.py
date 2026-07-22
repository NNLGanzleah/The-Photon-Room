# Photon Room - Power Budget Calculator
# CC0 1.0 - Nick (BlueBamboo), Muscatine, Iowa - July 2026
# Encodes Sheet 3 of the design package: harvest vs. load,
# break-even, and autonomy. Edit the constants to fit your room.

PANEL_W      = 100    # rated panel watts
FIELD_FACTOR = 0.70   # real-world derate (60-80W typical from 100W)
SUN_HOURS    = 5.0    # peak-sun hours/day (Iowa summer ~5)
BANK_WH      = 99.5   # watt-hours per power bank (Anker Prime class)
BANKS        = 3

LOADS_WH_DAY = {       # daily energy per device, watt-hours
    "Laptop (workday)":    325,
    "Phone":                20,
    "Fan":                  60,
    "Speaker":              30,
    "Headphones (beam)":   1.2,
    "Wearables (beam)":    2.0,
}

harvest = PANEL_W * FIELD_FACTOR * SUN_HOURS
copper  = sum(v for k, v in LOADS_WH_DAY.items() if "beam" not in k)
beam    = sum(v for k, v in LOADS_WH_DAY.items() if "beam" in k)
total   = copper + beam
reserve = BANK_WH * BANKS

print(f"Daily harvest (1 panel):  {harvest:.0f} Wh")
print(f"Daily load:               {total:.0f} Wh  "
      f"(copper {copper:.0f} / beam {beam:.1f})")
print(f"Beam share of harvest:    {100*beam/harvest:.2f}%  "
      f"<- the wearables ride free")
print(f"Panels to break even:     {total/harvest:.2f}")
print(f"Autonomy on banks alone:  {reserve/total:.2f} days")

# The sun doesn't send a bill. Now your room doesn't either.

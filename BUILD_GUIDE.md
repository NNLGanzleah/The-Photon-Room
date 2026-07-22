# Build Guide — The v0 Photon Room (This Afternoon)

*Two-thirds of the Photon Room is on store shelves right now. This guide
takes you from reading to running in one afternoon: harvest, storage,
copper. No soldering. No skills. No permission.*

## Shopping List (~$300–450 all-in)

| Part | Spec | Price class |
|------|------|-------------|
| Folding solar panel | 100 W rated, USB-C PD output | ~$100–150 |
| USB-C power bank(s) | 99.5 Wh class (27,650 mAh), 140 W ports | ~$100–180 ea. (sales hit $100) |
| USB-C PD cables | 100 W+ rated | ~$10–20 |
| (Optional) 2nd panel | doubles harvest to permanent surplus | ~$100–150 |

Already own a big power bank? Start with just the panel. One bank works;
three make the full flywheel.

## The Build (four steps, ~15 minutes of actual work)

1. **Place the panel.** South-facing window, balcony rail, or yard —
   full sun, no shade stripes (partial shade collapses output). Angle
   roughly toward the sun; flat against a window works, tilted outside
   works better.
2. **Panel -> bank.** One USB-C cable. The bank is now drinking
   sunlight — most show input wattage on their display. 60–80 W in good
   sun from a 100 W panel is normal and healthy.
3. **Bank -> devices.** Laptop, phone, fan, speaker: ordinary USB-C
   from the bank's output ports. That's the copper tier, live.
4. **Rotate.** One bank charging in the sun while another runs the
   desk. Swap at lunch. Congratulations: you are grid-optional.

## Verify Your Ledger

Run `power_budget.py` from this repo with your own numbers (your
region's sun hours, your devices). One panel ~ break-even for a
workstation day; two panels = surplus. Watch the bank displays for a
day and reality-check the math — that's the whole instrument panel.

## Honest Boundaries

- **This is v0**: harvest + storage + copper. The beam tier (emitter +
  receiver strips) is the frontier — specs in the PDF, Sections 4–5.
  Nothing off-shelf ships it yet. Fork and be first.
-

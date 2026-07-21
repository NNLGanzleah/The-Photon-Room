# The Photon Room

> A solar-fed room that charges everything: panel to battery to safe infrared
> beam. Wearables trickle-charge from across the room forever; laptops take
> USB-C from the same banks. Open design. CC0. No patent. A gift to all of
> humanity.

## The Story

A sixth grader in Iowa once drew a room that fed itself on sunlight — sun in
the window, power in the air, no forest of cords. Nobody had told him yet what
was impossible. The world then spent thirty years building his parts list:
panels fell to $100, batteries shrank into pocket slabs, and light itself was
taught to carry power safely across a room. In July 2026 the grown-up finished
the math on a hotel desk and gave the whole thing away.

## How It Works

    SUN ──> SOLAR PANEL ──> USB-C POWER BANKS ──┬──> IR BEAM ──> wearables
           (100W folding)   (3 × 99.5 Wh)       └──> USB-C PD ──> laptop, phone

Two tiers, one source. **Copper** feeds the hungry devices. **Light** feeds the
sippers — an eye-safe infrared beam trickling milliwatts to headphones,
watches, and sensors, forever. The architecture is photosynthesis: light in,
energy stored, life fed.

## The Watt Ledger

| Item                        | Power        | Daily (Wh) | Tier   |
|-----------------------------|--------------|------------|--------|
| Solar harvest (1 panel)     | 60–80 W      | 300–400    | IN     |
| Laptop (workday)            | 30–100 W     | 250–400    | copper |
| Phone / fan / speaker       | 5–20 W each  | ~75–145    | copper |
| Headphones + wearables      | <0.1 W       | ~3         | BEAM   |

**One panel ≈ break-even. Two panels = permanent surplus.** The beam tier uses
under 1% of harvest — the wearables ride free forever.

## Build the Harvest Today

Panel → bank → cable is 100% off-the-shelf: any 100 W folding USB-C solar
panel, any large USB-C PD power bank, done. Two-thirds of the Photon Room runs
this afternoon. The beam tier (emitter hub + receiver strip) is the part to
build — full specs in the PDF, Sections 4–5.

## Safety Is Not Optional

Class 1 eye safety at every accessible point. Hard interlock: beam dark in
<10 ms on any line-of-sight break. All human-exposure limits honored.
**The rails ship welded to the rocket.** See `safety_interlock.ino` and the
PDF, Sections 4 & 6.

## Repository Contents

- `Photon_Room_Design_Package.pdf` — the five-sheet design brief
- `power_budget.py` — size your own room
- `safety_interlock.ino` — reference interlock logic
- `LICENSE` — CC0 1.0 Universal

## Open Questions (fork and answer!)

License IR-power tech vs. clean-sheet · MEMS vs. fixed-aperture steering ·
GaAs vs. Si receivers · integration form-factors · certification path.
Build it, improve it, sell it — no permission needed.

## License & Dedication

Released to all of humanity under **CC0 1.0 Universal**. No patent sought;
none ever will be. First published **July 21, 2026** — this publication is
prior art: given to everyone, takeable from no one. Courtesy credit —
*Photon Room, by Nick (BlueBamboo), Muscatine, Iowa* — appreciated, never
required.

*The sun doesn't send a bill. Now your room doesn't either.*

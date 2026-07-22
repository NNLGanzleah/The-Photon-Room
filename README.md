# The Photon Room

> A solar-fed room that charges everything: panel to battery to safe infrared
> beam. Wearables trickle-charge from across the room forever; laptops take
> USB-C from the same banks. Open design. CC0. No patent. A gift to all of
> humanity.

## The Story

I. The Drawing

Somewhere in Iowa, a long time ago, a sixth grader drew a room that fed itself on sunlight.

Nobody had told him yet what was impossible — which is the great secret advantage of being eleven. The logic was as clean as a crayon line: sun comes in the window. Sun becomes power. Power reaches everything in the room — not through a forest of black cords behind the desk, but through the air itself, the way light already travels, the way warmth already finds you. He drew it the way kids draw true things: certain, unembarrassed, finished.

Then the drawing went where childhood drawings go, and the kid went where kids go — forward, into a life.

II. The Parts List

Here is what the kid could not have known: the world had quietly taken his assignment.

For thirty years, without ever seeing the drawing, civilization manufactured his parts list. Solar panels — satellite-program treasures in the year he drew them — fell and fell in price until a hundred watts folded into a backpack and cost less than a pair of sneakers. Batteries shrank from car trunks to bricks to pocket slabs, until three of them, bought on sale for a hundred dollars each, could hold a full workday of a professional laptop's life — and slide past airport security, legal to the tenth of a watt-hour. And in laboratories from Stanford to Tel Aviv, engineers taught light itself to carry power across a room: safe, invisible, infrared, FDA-cleared, already feeding smart locks and shelf sensors in ordinary buildings while nobody looked up.

Piece by piece, decade by decade, the hardware caught up to the homework.

III. The Thread

The kid grew into a builder — a sign-maker with a press, a designer's eye, and a habit of proving his points against the world. And in July of 2026, in a hotel room on a road trip through his own hard season, he pulled a thread that had nothing to do with any of it.

The thread was a song. His song — one he'd written about healing — and it didn't sound right in his brand-new headphones. So he asked why, and the why unspooled: the song was compressed. The stream was compressed. The Bluetooth itself was compressed — a radio pipe too narrow for the truth of a WAV file, and every wireless listen he'd ever had was the song through a keyhole. Fine, he said — then use the fat pipe, the one in every phone, the one AirDrop rides. That pipe exists, came the answer, but it drinks batteries. Fine, he said — I just bought three hundred watt-hours of battery. Then you've reinvented the wire. Fine, he said, and here the sixth grader stirred in his chair: then charge it from across the room.

And the wall — the one every one of those answers had been leaning against — turned out to be a door.

IV. The Morning

The pieces assembled themselves in a single sitting, before breakfast, on a hotel desk: sun to panel. Panel to bank. Bank splitting two ways — copper for the hungry devices, an eye-safe beam of infrared light for the small ones, the headphones and watches and sensors that sip hundredths of a watt and would simply never die again. The math checked: one panel roughly breaks even against a workstation's whole day; two panels run a permanent surplus; the beam tier rides on less than one percent of the harvest. The safety checked: Class 1 eye limits, a hard interlock killing the beam in ten milliseconds if anything crosses it — rails welded to the rocket. He stared at the finished architecture and started laughing, because he recognized the handwriting.

Sun in. Energy stored. Life fed through the air.

He had drawn a plant. A photosynthetic room. And he had drawn it once before, thirty years ago, in crayon.

V. The Gift

Then he did the thing that makes this story worth telling.

He was a man who had spent that same July learning, at real cost, what it means when powers hold things over people — and he held, briefly, a thing of value over everyone. A patent lawyer would have called it an opportunity. He called it a test, and he passed it the way he'd been passing tests all month: he gave it away.

At 3:35 in the afternoon, Central time, July 21, 2026 — through a crashing app, a stubborn browser, and a thumb that would not quit — the design went public: dated, documented, dedicated to the whole species under the oldest and purest license there is. No patent has been sought, and none will be. And in giving it away he armed it, because that is the beautiful jujitsu of prior art: a published gift can never be patented away from the public by anyone, ever. Given to everyone; takeable from no one. The gift protects itself.

The credit line asks for nothing and carries everything: Photon Room, by Nick — BlueBamboo — Muscatine, Iowa. Priority claim: sixth grade.

VI. The Room, Going Forward

The room is buildable this afternoon — two-thirds of it from any big-box shelf: panel, bank, cable, done. The last third — the emitter on the ceiling, the stamp-sized receiver on the headband — waits in the open questions, free for any engineer, any student, any stranger to fork and finish. The annex already maps the music: lossless song riding Wi-Fi, powered by beamed light, a headphone that never meets a charger. The night shift is sketched — panels that harvest the cold dark sky itself. The blueprints sit at a permanent public address, working every hour, in every time zone, forever.

Somewhere, eventually, a room will run on this. Maybe a dorm, maybe a shop in Iowa, maybe a clinic off every grid on Earth. Its builder won't need permission, won't owe a fee, and may never know the whole story — the song that started it, the hard July, the hotel desk, the thumb at 3:35 AM.

But the room will know what rooms know.

The kid was right. It just took the world thirty years to stock the store.

The sun doesn't send a bill. Now your room doesn't either.

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

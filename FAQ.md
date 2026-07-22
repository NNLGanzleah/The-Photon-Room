# FAQ — The Photon Room

**Is the beam safe?**
The design requires IEC 60825-1 Class 1 eye safety at every accessible
point — the same class as a CD player — plus a hard interlock that cuts
the beam dark in under 10 ms if anything crosses the line of sight.
Infrared power-beaming at these levels is already FDA-cleared and
commercially deployed (smart locks, retail sensors). No implementation
without the rails: see `safety_interlock.ino` and PDF Sections 4 & 6.

**Why no patent?**
A patent would have made this one company's product. Publication makes
it everyone's infrastructure — and arms it: a published, dated design is
*prior art*, which no party can ever patent away from the public.
Given to everyone, takeable from no one.

**Can I really build and SELL this?**
Yes. CC0 1.0 means anyone, anywhere, may use, build, modify,
manufacture, and sell — any purpose, no permission, no fee. A courtesy
credit (*Photon Room, by Nick — BlueBamboo — Muscatine, Iowa*) is
appreciated and never required.

**Can I build the beam tier today?**
Honestly: not off-the-shelf. The emitter hub and receiver strip are the
frontier — specs live in PDF Sections 4–5, and licensable IR-power art
exists (Wi-Charge-class). Fork it and be first.

**What CAN I build today?**
Two-thirds of the room: panel → banks → copper. See `BUILD_GUIDE.md` —
one afternoon, ~$300–450, no skills required.

**What about night, clouds, winter?**
The banks are the flywheel; the wall outlet is the honest backup —
grid-*optional*, not grid-forbidden. And the dark has its own physics:
see `NIGHT_SHIFT.md`.

**Why not just use Qi charging pads?**
Pads are drop zones — you still think about charging. The beam feeds
devices *where they live*: on your head, on your wrist, across the room.
The goal isn't easier charging; it's never thinking about it again.

**Why not beam power to EVERYTHING?**
The watt ledger. Human-exposure rules cap room beaming around the
one-watt class with people present. Wearables sip hundredths of a watt —
beam-servable forever. Laptops drink 30–140 W — copper's job. Two tiers,
one source, honest physics.

**Is this free energy / perpetual motion?**
No. It's harvest, storage, and

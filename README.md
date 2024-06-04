# BackRowPad, by The Devil's Workshop (a.k.a hightide-error)

![][backrowPad]

[backrowPad]: imgs/backRowPad.png "Photo of a fully-assembled BackRowPad with RGB underglow."

A 12-key linear macropad, designed to replace the back row of function keys or just be a stick of keys you can map to stuff. Open-source and powered by QMK.

There are no maintainers! I designed this macropad and I am not selling it as a product! I am not providing any support! But the design works and you can make your own if you want, so here it is.

**Read through this before getting the boards and assembling!**

## Features

- Keys (wow)
- A cool pattern on the switch plate and backplate
- Optional MX hotswap sockets (no choc support)
- Optional header for an RGB LED strip

## Parts List
The BackRowPad uses pretty standard DIY mechanical keyboard parts.

- **Pro Micro-footprint microcontroller x1:** I'm using Adafruit's KB2040, which is what the firmware is written for. However, any other RP2040 or ATmega32U4 board with a Pro Micro footprint should work: just make appropriate changes to the firmware. You can see pin assignments in the schematic.
- **1N4148 diode x12.**
- **MX mechanical switches x12.**
- **MX keycaps x12** (uniform profile recommended).
- **PTS636 through-hole button switch x1:** this is the standard 'reset switch' used in a variety of DIY mech keyboards. This is optional if your microcontroller has an onboard reset button on top, but it can be nice to have anyway.
- **M2 bolts and standoffs x4 'sets':** The main PCB, switchplate, and baseplate are held together with M2 hardware in each corner. With a 1.6mm thick switchplate, a 3mm standoff between the main PCB and switchplate is nearly perfect: I ended up putting in some 0.4mm 3D-printed spacers just to fully fill the space, but it should be fine without as long as you don't overtighten them. Between the main PCB and baseplate it's really your choice: any standoffs longer than ~7-8mm should work with the reset button in place, but you can probably go shorter if you're omitting it for an onboard-microcontroller button. I'm using 16mm-long M2 standoffs there, both to make the height similar to my main keeb and because I'm routing cables through that space and want it to be reasonably wide.
- **_(Optional)_ Kailh MX hotswap sockets x12:** if you want hotswap, of course.
- **_(Optional)_ RGB LED strip x1:** WS2811, SK6812, etc. (see QMK documentation). I'm using Adafruit's 4mm-wide 'Ultra Skinny NeoPixel 1515' strip, but you should be able to cram in something a bit wider (see pictures). You might also want a right-angled header and corresponding socket for connecting the strip, but that's up to you.

![][rgb]

[rgb]: imgs/backRowPad_RGBstrip.png "Photo of the bottom of the BackRowPad main PCB, with an RGB LED strip connected."

And of course, the board(s). All of these were ordered with 1.6mm thick FR-4 bases, but other thicknesses and types should work.

**It's probably a good idea to order them with a lead-free solder process, especially the switchplate and baseplate since they have a lot of exposed, soldermasked area for the designs**, although I still wouldn't recommend licking them or anything. On JLCPCB, the lead-free HASL option is just a tiny bit more expensive and will increase your lead time by like a day.

The boards also have the "JLCJLCJLCJLC" text on them to specify a location for a JLCPCB order number: if you're using a different fab or are removing the order number, you can just delete that and re-export the fab files.

Finally, your fab may (reasonably) check that the soldermask on the switchplate and baseplate are meant to go off the edge of the board: this is fine, since the pattern is meant to cover the entire area and is cosmetic.

- **BackRowPad main PCB x1** (called backRow_Pad in the KiCAD files).
- **BackRowPad switchplate x1** (called backRow_SwitchPlate in the KiCAD files): technically this is optional if you're soldering 5-pin switches in, but you'll probably want the stability and it has a cool design on it. You can flip it over depending on if you want the black/white design with the board name, or the tiled MX switch design in the soldermask.
- **BackRowPad base plate x1** (called backRow_BasePlate in the KiCAD files): if you have access to a sufficiently-sized lasercutter or 3D printer, you might be better off just taking the hole locations and whipping up a cheaper baseplate instead of one made with a full PCB fab process. But again, it has a cool design on it so yeah.

![][boards]

[boards]: imgs/backRowPad_boards.png "Photo of the three BackRowPad boards. Top to bottom: the switchplate, the main PCB, and the baseplate."

## Assembly

(**Please read through this and look at the images before starting assembly!** It's a pretty simple design, but still).

Assembly is pretty straightforward: the diodes, reset switch, and optional hotswap sockets all have outlines on the silkscreen where they're meant to go (and with what polarity for the diodes). However, for clarity, here's which components go on which side, where the top side is the side with the board info on it ("BackRowPad rev. 0", etc.):

- **TOP:** microcontroller, keyswitches.
- **BOTTOM:** diodes, reset button, optional hotswap sockets, optional RGB header. Also the RGB strip but if you're putting an RGB strip on I'm going to kinda assume you know what you're doing.

![][pcb]

[pcb]: imgs/backRowPad_assembledUnderside.png "Photo of the bottom of the main BackRowPad PCB, assembled with hotswap sockets."

Also, note some things about assembly order:

- **If you're soldering in the switches**, you need to solder the diodes, reset button, and optional RGB header before you solder the switches, since the switchplate will be covering the area you need to solder (I guess it's possible to do, but it'd be a massive pain). As implied, you'll also need to put the switches in the switchplate first, since the switchplate will end up between the lip of the switches and the top of the main PCB. If you're using M-F standoffs to go between the switchplate and PCB, these also need to be in before you solder the switches because you won't be able to manoeuvre them in later. _Also_ note that since the switchplate is being sealed in between, you won't be able to flip it to the other design once everything's soldered, so consider your choice.
  - To be honest I've only assembled this board hotswap so if you're soldering the switches, be careful since you're in uncharted waters!
- Regardless of if you're using hotswap or not, if you're soldering a right-angled RGB header on then you'll want to do that after soldering the microcontroller since it'll block access to that part of the PCB on the bottom.

![][choices]

[choices]: imgs/backRowPad_choices.png "Photo of two BackRowPads fully assembled apart from keycaps. One is taller than the other due to longer standoffs, and they each have the switchplate flipped a different way."

## Bootloader

Use the 'RESET' button mounted on the bottom of the main PCB to reset your microcontroller (or the one onboard your microcontroller, if it has one) and enter the bootloader as per its instructions. For RP2040 devices, this means having BOOTSELECT held down when the board resets.

## License

This design is licensed under [Creative Commons BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/ "CC BY-NC-SA 4.0 Deed").

## That's it!

no questions


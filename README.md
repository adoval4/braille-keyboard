Braille-keyboard
================

The challenge is to create key a great, low cost, highly replicable computer text input design for visually dispaired people.

[![IMAGE ALT TEXT HERE](http://img.youtube.com/vi/zsroSVRSVeo/0.jpg)](http://www.youtube.com/watch?v=zsroSVRSVeo)

Description
-----------

This is an arduino based project for building a keyboard design for visually dispaired people. Based on Perkin's machine, a typewriter for braille code, we try to make a digitial text input for computers with USB connection.

![alt tag](http://americanthermoform.com/wp-content/uploads/2012/07/StandardPerkinsBrailler2.jpg)

It uses [Arduino](http://www.arduino.cc/es/) and its library for capacitive sensing [CapacitiveSensor](http://playground.arduino.cc/Main/CapacitiveSensor?from=Main.CapSense).

Material list
-------------

..* 1 board of wood or cardboard (25x18cm)
..* 2 plastic layers of the same same dimensions
..* 6 circles of copper foil (3.5cm diameter)  
..* 1 rectangle of copper foil (3.5x6cm)  
..* 1 rectangle of copper foil (3.5x4cm)  
..* 1mt cable (preferably coaxial)
..* 8 resistances 1.5MOhms
..* 8 resistances 1kOhms
..* 1 Arduino Leonardo (preferably micro, [here](http://www.ebay.com/itm/Leonardo-Pro-Micro-ATmega32U4-Arduino-IDE-1-0-3-Bootloader-replace-Pro-Mini-/310634777706))
..* 1 USB-microUSB cable (the one is used for smartphones)

Procedure
---------

..1. **Glue copper foil over the board**
....Decide where to place them. And glue them. The big rectangle is used for spacekey and little one is for backspace.

..2. **Weld the cable and the copper foils**
....Cut the cable in 8 pieces. 
....For each piece, at one end, take the two cables that come inside the coaxial cable and join them. Then, weld this to one copper foil. 

![alt tag](http://adolfovaldivieso.com/teclado_1.jpg)

..3. **Cut the plastic layers**
....One should have only holes for the copper foils and the other also channels for the cables.

![alt tag](http://adolfovaldivieso.com/teclado_2.jpg)

...Then, put it all together. First board, then layers with channels and on top, the layer with only holes.
	
..4. **Weld the resitances**
....Weld to all the centre core of the cables a resistence of 1kOhm. And to the metalic shield, a resitence of 1.5MOhms.

![alt tag](http://upload.wikimedia.org/wikipedia/commons/thumb/f/f4/Coaxial_cable_cutaway.svg/500px-Coaxial_cable_cutaway.svg.png)

..5. **Write the code into the arduino**
....If you haven't installed the Arduino Playground, click [here](http://www.arduino.cc/es/) to installed. And to install the CapacitiveSensor Library, click [here](http://playground.arduino.cc/Main/CapacitiveSensor?from=Main.CapSense). 
....Donwload the code of this repoitory and load it into your arduino. Then connect the cables in the correspondent positions, and start writing!!



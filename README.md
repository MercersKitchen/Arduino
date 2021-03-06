# Arduino
Uno, Teensy, and Breadboarding &amp; Other Tips and Hints

General References
- https://www.arduino.cc/reference/en/

Using Teensy 3.6
- <a href=""></a>
---

# Teensy 3.6

Videos that help

Basic Turning of AX12A
- See Video: https://www.youtube.com/watch?v=JQSY8jlgW90
- See Sketch: http://www.arduinotutorialonline.com/2018/01/using-dynamixel-ax-12a-servo-with.html


-
## Hello World for Teensy 3.6

Hardware Setup for Teensy 3
- Follow instructions on https://www.pjrc.com/teensy/td_download.html
  - Install Arduino, then Teensyduino afterwards
- Anti-virus
  - CAUTION: turn off anti-virus when installing
  - CAUTION: turn off real time scanning
  - Turn off `Automatic Scanning` & `Real-time Protection`
  - Reminder: Turn these ON when finished "for the day"
- Remember where Arduino Software is extracted (Program(x86)/Arduino)
- Additional Installations: manually asks to install multiple drivers and device software

When finished Installation, must fully shutdown machine and restart before running Arduino Sketches

Test Hardware of Teensy 3.6: Plug into USB, has Blink Program preinstalled, will blink for 1 second on-off

Test Arduino IDE & Coding
- Verify Board / Teensy 3.6 is chosen
- Choose Blink Program in File / Example / Basic / Blink
- Change delay (i.e. 3000 , 3 seconds)
- Compile and Run (note: any errors with compiling after installation indicates a complete restart necessary)
- Should work with COM1

Running Arduino, select Teensy 3.6 from Tools / Board
- Modify preinstalled Blink Program (Choose new program from File / Examples / Basics / Blink.ino)

See <a href="https://drive.google.com/drive/folders/193Be1EvXhHWg-i1rmQdFSfw4CR-nRi6t">Private Google Files for Installation .exe backup</a>

### Additional Information

Motor Library: https://github.com/ThingType/AX-12A-servo-library

Setting up Arduino
- Install Library
  - Create new .ZIP with
    - name `AX-12A-servo-library.zip`
    - `AX12A.h` & `AX12A.cpp` in parent folder, not in scr
    - delete folder scr folder
    - create .zip
  - Sketch / Add File / [Choose new .ZIP from Libraries folder]
  - Verify it is added to the data folder in the Sketch
- Restart Computer (if program does not work, usually OK without restart)

Wheel Code Example
```
/*
 Example showing how to use endless mode (wheel mode) on AX-12A
 Be sure you removed all mechanical assemblies (hinges) before using this code !
 */

#include "AX12A.h"

#define DirectionPin  (10u)
#define BaudRate      (1000000ul)
#define ID            (1u)

void setup()
{
 ax12a.begin(BaudRate, DirectionPin, &Serial1);
 ax12a.setEndless(ID, ON);

}

void loop()
{
    ax12a.ledStatus(ID, ON);
    ax12a.turn(ID, LEFT, 100);
    delay(5000);

    ax12a.ledStatus(ID, OFF);
    ax12a.turn(ID, RIGHT, 500);
    delay(5000);
}
```

## Setup or Physically Connecting

Breadboarding Setup
- Setup 12V Rails, test on DDM
- Teensy Human Numbering (Pin#, name)
  - Ports are right to left 1-2-3, 1-2-3 (or left to right 3-2-1, 3-2-1)
  - 1: GRD (#1) to RailGRD
  - 2: Power(#2) to battery
  - 3: Data AX Port #3, see pinout on video (https://www.youtube.com/watch?v=JQSY8jlgW90)

- AX Pin #2 to RailPositive
- AX Pint #1 to RailGRD (note Teensy GRD and AX12 GRD connected)

---

# Using Teensy 3.6

See Teensy 3.6 Pinout: <a href="https://www.google.com/search?q=teensy+3.6+pinout&tbm=isch&source=univ&sa=X&ved=2ahUKEwj7yO6HxNTgAhUXsp4KHTMeDh0QsAR6BAgFEAE&biw=1920&bih=977#imgrc=kniwTQNLNOoUlM:">Google Search Example</a>

---

# To Include

Videos to Review, ordered
- Dynamixel Controllers: https://www.youtube.com/watch?v=qIQaDdoqR20

- Another Class to Play with
  - https://www.youtube.com/watch?v=b-duKmB7qNY&feature=youtu.be
  - https://www.youtube.com/watch?v=b-duKmB7qNY
  - https://www.youtube.com/watch?v=rPHAlalq3QM&feature=youtu.be

- Tutorial for Using Dynamixel
  - Video #1: https://www.youtube.com/watch?v=R2yca-9yHy0
  - Video #2: https://www.youtube.com/watch?v=ngfyaX1rLJ0
  - Video #3: https://www.youtube.com/watch?v=-6XPTMpdsts
  - Video #4: https://www.youtube.com/watch?v=HfdpQDyZ6i4
  - Video #5: https://www.youtube.com/watch?v=vJGNIhoEMUY
  - Video #6: https://www.youtube.com/watch?v=t_99P7Ug7OQ
  - Video #7: https://www.youtube.com/watch?v=8fJ6o1qbqig
  - Video #8: https://www.youtube.com/watch?v=LnYKcDerX9w
  - Video #9: https://www.youtube.com/watch?v=9ZzINgb4ATM
  - Video #10: https://www.youtube.com/watch?v=jLoBG4uKpzE&feature=youtu.be
  - Video #11: https://www.youtube.com/watch?v=MkuXVBMKZI0
  - Video #12: https://www.youtube.com/watch?v=MkO0e6rPuyg
  - Additional Videos

Non English Video for Ideas: https://www.youtube.com/watch?v=xC-2jlYX7js&feature=youtu.be

Additional Tutorials: http://wiki.ros.org/dynamixel_controllers/Tutorials

Changing Gears for the Motors: https://www.youtube.com/watch?v=W1sOavdmIus
- Check out this Channel

Motors we use
- https://www.youtube.com/watch?v=Wu_PXUbTmxU&feature=youtu.be

---

## Searches to Explore

Example 1:
- See Video: https://www.youtube.com/watch?v=svD-m-NUD3I
- See Website Instructions: https://robottini.altervista.org/dynamixel-ax-12a-and-arduino-how-to-use-the-serial-port

Example 2:
- See Video and Additional Links: https://www.youtube.com/watch?v=N1a3W_fUJ4U

---

Searching for Code Examples: "AX12A motor robotics filetype:ino"

---

Ideas for Accessing Serial Monitor
Serial.begin(1000000ul);
Serial.println(pos);

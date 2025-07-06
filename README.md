# arduino-led-blink
Arduino code to toggle two LEDs alternately on pins 7 and 3.
This is a simple Arduino project that toggles two LEDs alternately using pins 7 and 3. Works great on a real Arduino UNO or in a Tinkercad simulation.

##  Components
- Arduino UNO
- 2x LEDs
- 2x 220 ohm resistors (or similar)
- Breadboard
- Jumper wires

##  Circuit Description
- LED1 anode → pin 7 (through resistor)
- LED1 cathode → GND
- LED2 anode → pin 3 (through resistor)
- LED2 cathode → GND

##  How It Works
- LED1 (pin 7) turns on → LED2 (pin 3) stays off for 500ms.
- Then LED1 turns off → LED2 turns on for 500ms.
- Repeats forever!

## 💻 Code

```cpp
void setup() {
  pinMode(7, OUTPUT);  // First LED
  pinMode(3, OUTPUT);  // Second LED
}

void loop() {
  digitalWrite(7, HIGH);  // Turn on LED1
  digitalWrite(3, LOW);   // Turn off LED2
  delay(500);             // Wait 500 ms

  digitalWrite(7, LOW);   // Turn off LED1
  digitalWrite(3, HIGH);  // Turn on LED2
  delay(500);             // Wait 500 ms
}

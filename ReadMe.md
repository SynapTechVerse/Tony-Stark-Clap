🔊 Sound Sensor with Arduino & Relay Module
This project uses a Sound Sensor to detect sound (like a clap) and trigger a Relay Module to control devices like lights or fans.

🛠 Components Used
Arduino UNO (or compatible)

Sound Sensor Module (with A0 and D0 pins)

Relay Module (1-channel)

Jumper Wires

Optional: Breadboard

🔌 Wiring Diagram

+--------------------+           +------------------+
|  Sound Sensor      |           |  Relay Module    |
|                    |           |                  |
|  VCC  ------------ 5V          VCC  ------------ 5V
|  GND  ------------ GND         GND  ------------ GND
|  D0   ------------ D2          IN   ------------ D8
|  A0   ------------ A0 (optional)                    |
+--------------------+           +------------------+

                        |
                     [Arduino UNO]
📝 Note: A0 is optional if you're only using the digital output (D0) of the sensor.



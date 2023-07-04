# chrisbyrd-lightsptdevice
To design a Light version of the ESP32 IoT product. Modifications to the existing signalling device design in order to provide a smaller, 'light' version in a fixed format with no modular comms.

## Project Requirements
- ESP32-S3R8 SOC with 8MB flash
- PCB trace WiFi antenna
- 8 inputs
- 1 output relay
- SIM7500E
- Angled SMA connector for LTE
- Onboard GNSS antenna (either PCB trace or separate component)
- Use our existing OLED & Button board
- RS232 terminals inc GND
- ATECC608B
- Nano SIM cage (single SIM) (use sim-detect pin)
- 9-30v power terminals
- Small footprint as possible

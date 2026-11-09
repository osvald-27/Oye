# Oye Lab 001: Hardware Bring-up

Date: 5 November 2026
Project: Oye (Open eYE)
Milestone: ESP32 Hardware Bring-up
Status: In Progress

## 1. Hardware

Development board: ESP32 DevKit V1
Module marking: [Record actual marking]
USB-to-UART bridge: Silicon Labs CP2102
Linux serial device: /dev/ttyUSB0

## 2. Host Environment

Operating system: Kali GNU/Linux Rolling
ESP-IDF: 6.1
Python: 3.14.8
Target architecture: Xtensa
ESP-IDF target: esp32

## 3. Flash Hardware

Flash manufacturer: 4MB
Flash identifier: 
Detected flash capacity: [Measured value]
Configured flash capacity: 303328 bytes
Partition table:
I (49) boot: ## Label            Usage          Type ST Offset   Length
I (56) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (62) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (69) boot:  2 factory          factory app      00 00 00010000 00100000
I (75) boot: End of partition table


## 4. Build

Initial project build: SUCCESS
Diagnostic firmware build: SUCCESS
Application binary size: [Measured value]

## 5. Flashing

Serial communication: [Pending]
ROM bootloader connection: [Pending]
Flash write: [Pending]
Flash verification: [Pending]

## 6. Runtime Validation

Application boot: [Pending]
Serial output: [Pending]
CPU information: [Pending]
Heap measurements: [Pending]
Reset reason: [Pending]

## 7. Observations

[Record actual observations.]

## 8. Problems and Resolutions

[Record failures, root causes and corrective actions.]

## 9. Next Milestone

Wi-Fi station connectivity and IP configuration.

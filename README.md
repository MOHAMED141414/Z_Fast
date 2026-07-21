# ⚡ Z_Fast — ARM Embedded Systems

> Embedded systems work developed as part of my involvement with the **Z Fast Racing Team** (Nov 2024 – Oct 2025) — focusing on ARM Cortex-M drivers, motor control, and low-level C firmware.

![C](https://img.shields.io/badge/C-92.2%25-00599C?style=for-the-badge&logo=c&logoColor=white)
![Makefile](https://img.shields.io/badge/Makefile-7.8%25-064F8C?style=for-the-badge)

---

## 📁 Project Structure

```
Z_Fast/
├── ARM/
│   └── COTS/        # ARM Cortex-M peripheral drivers (GPIO, UART, SPI, etc.)
├── MOTOR/           # DC/Servo motor control drivers
└── task1.c          # Initial task / entry point
```

---

## 🛠️ Technologies

| Tool | Purpose |
|---|---|
| **C (Embedded)** | Core firmware language |
| **ARM Cortex-M** | Target microcontroller architecture |
| **Makefile** | Cross-compilation build system |
| **arm-none-eabi-gcc** | ARM GCC toolchain |

---

## ⚙️ Topics Covered

- **COTS Drivers** — Clean, reusable ARM peripheral abstraction layer
- **Motor Control** — DC motor speed & direction control via PWM
- **GPIO Driver** — Pin configuration, read/write
- **Startup & Linker** — ARM startup code and linker scripts

---

## 🚀 Build

### Prerequisites
```bash
sudo apt install gcc-arm-none-eabi make
```

### Compile
```bash
git clone https://github.com/MOHAMED141414/Z_Fast.git
cd Z_Fast
make
```

---

## 🏎️ Context — Z Fast Racing Team

This work was done as the **Embedded Systems Member** of the **Z Fast Racing Team**, responsible for developing the low-level firmware layer for the car's electronic systems.

```
Team Role   : Embedded Systems Member
Duration    : Nov 2024 – Oct 2025
Focus       : ARM drivers, motor control, embedded firmware
```

---

## 👤 Author

**Mohamed Esam Saied**  
📧 [mohamed.esam.saied14@gmail.com](mailto:mohamed.esam.saied14@gmail.com)  
🔗 [LinkedIn](https://linkedin.com/in/mohamed-esam1) | [GitHub](https://github.com/MOHAMED141414)

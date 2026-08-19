# Marlin Firmware Build for GD32F105 Ender 3

This directory contains the Marlin firmware configuration for an Ender 3 with a GD32F105-based motherboard (4.2.2 variant).

## Board Information
- **Board Type**: GD32F105RC (Creality 4.2.2)
- **Printer**: Ender 3
- **Marlin Version**: 4.2.2

## Configuration Files

### Configuration.h
Main printer settings including:
- Motherboard definition (GD32F105RC)
- Temperature sensors and PID tuning
- Axis steps and max feedrates
- Endstop configuration
- Build area dimensions (235x235x250mm)

### Configuration_adv.h
Advanced settings including:
- Thermal watchdog parameters
- Serial communication settings
- G-code features (nozzle park, etc.)
- Safety features (cold extrusion prevention)
- EEPROM support

## How Auto-Build Works

The GitHub Actions workflow (`marlin_auto_build.yml`) automatically:
1. Builds firmware whenever changes are pushed to this `builds/` directory
2. Runs nightly at 03:30 UTC
3. Uses the `zisismaras/marlin_auto_build` action

## To Use

1. Clone this repository
2. Make changes to `Configuration.h` or `Configuration_adv.h`
3. Push changes to the `builds/` directory
4. GitHub Actions will automatically compile the firmware
5. Download the compiled binary from the workflow artifacts

## Notes

- Adjust PID values based on your specific printer calibration
- Temperature sensors default to 100k thermistor (common for Ender 3)
- Build area is set to standard Ender 3 dimensions (235x235x250mm)
- Endstops are configured for standard Ender 3 setup

## Further Configuration

For more details, see the official [Marlin Documentation](https://marlinfw.org/)

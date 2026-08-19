/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 */

#pragma once

// GD32F105 Ender 3 Configuration
// Creality GD32F105 (4.2.2 Board variant)

//===========================================================================
//============================= MOTHERBOARD ===============================
//===========================================================================
#define MOTHERBOARD BOARD_GD32F105RC_BTECH

//===========================================================================
//============================= Serial Port ================================
//===========================================================================
#define SERIAL_PORT 0
#define SERIAL_PORT_2 -1
#define BAUDRATE 115200

//===========================================================================
//============================= Extruders ==================================
//===========================================================================
#define EXTRUDERS 1
#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75

// Hotend offset
#define HOTEND_OFFSET_X { 0.0 }
#define HOTEND_OFFSET_Y { 0.0 }
#define HOTEND_OFFSET_Z { 0.0 }

//===========================================================================
//============================= Temperature Sensors =========================
//===========================================================================
#define TEMP_SENSOR_0 1       // 100k thermistor
#define TEMP_SENSOR_BED 1     // 100k thermistor
#define TEMP_SENSOR_CHAMBER 0
#define TEMP_SENSOR_COOLER 0

#define TEMP_RESIDENCY_TIME 10  // (seconds)
#define TEMP_WINDOW 1           // (degC)
#define TEMP_HYSTERESIS 3       // (degC)

#define TEMP_BED_RESIDENCY_TIME 10
#define TEMP_BED_WINDOW 1
#define TEMP_BED_HYSTERESIS 3

#define HEATER_0_MINTEMP 5
#define HEATER_0_MAXTEMP 275
#define BED_MINTEMP 5
#define BED_MAXTEMP 150

//===========================================================================
//============================== PID Settings ==============================
//===========================================================================
#define PIDTEMP
#ifdef PIDTEMP
  #define PID_K1 0.95      // Smoothing factor within any PID loop
  #define PID_EDIT_MENU
  #define PID_AUTOTUNE_MENU
  #define PID_P 21.73
  #define PID_I 1.54
  #define PID_D 76.55
#endif

#define PIDTEMPBED
#ifdef PIDTEMPBED
  #define PID_BED_P 67.71
  #define PID_BED_I 10.47
  #define PID_BED_D 109.36
#endif

//===========================================================================
//============================== Bed Leveling ==============================
//===========================================================================
#define ENABLE_LEVELING_FADE_HEIGHT
#define DEFAULT_LEVELING_FADE_HEIGHT 10.0

//===========================================================================
//============================= Axis Settings ==============================
//===========================================================================
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
#define DEFAULT_MAX_FEEDRATE          { 200, 200, 200, 45 }
#define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 100, 1000 }
#define DEFAULT_ACCELERATION          1000
#define DEFAULT_RETRACT_ACCELERATION  1000
#define DEFAULT_TRAVEL_ACCELERATION   1000

#define DEFAULT_JERK 20.0
#define DEFAULT_EJERK 5.0

//===========================================================================
//============================== Endstops ==================================
//===========================================================================
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG

#define ENDSTOPPULLUP

#define X_MIN_ENDSTOP_INVERTING false
#define Y_MIN_ENDSTOP_INVERTING false
#define Z_MIN_ENDSTOP_INVERTING false

//===========================================================================
//============================== Movement ==================================
//===========================================================================
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS 235
#define Y_MAX_POS 235
#define Z_MAX_POS 250

//===========================================================================
//============================== Filament Runout ===========================
//===========================================================================
//#define FILAMENT_RUNOUT_SENSOR

//===========================================================================
//============================== Bed Leveling ==============================
//===========================================================================
//#define AUTO_BED_LEVELING_BILINEAR

//===========================================================================
//============================== LCD / Controller ===========================
//===========================================================================
#define REPRAP_DISCOUNT_SMART_CONTROLLER

//===========================================================================
//============================== Other Options =============================
//===========================================================================
#define USE_WATCHDOG
#define THERMAL_PROTECTION_HOTENDS
#define THERMAL_PROTECTION_BED

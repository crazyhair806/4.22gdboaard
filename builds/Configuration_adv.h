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

// Advanced Configuration for GD32F105 Ender 3

//===========================================================================
//============================== Thermal ==================================
//===========================================================================
#define WATCH_TEMP_PERIOD 20
#define WATCH_TEMP_INCREASE 2
#define WATCH_BED_TEMP_PERIOD 20
#define WATCH_BED_TEMP_INCREASE 2

//===========================================================================
//============================== Serial ====================================
//===========================================================================
#define SERIAL_XON_XOFF
#define SERIAL_STATS_MAX_RX_QUEUED 32
#define SERIAL_STATS_MAX_TX_QUEUED 32
#define SERIAL_RECV_TIMEOUT 2000

//===========================================================================
//============================== G-Code Features ===========================
//===========================================================================
#define NOZZLE_PARK_FEATURE
#ifdef NOZZLE_PARK_FEATURE
  #define NOZZLE_PARK_POINT { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 }
#endif

//===========================================================================
//============================== Power Supply ==============================
//===========================================================================
//#define PSU_CONTROL

//===========================================================================
//============================== EEPROM ====================================
//===========================================================================
#define EEPROM_SETTINGS
#define EEPROM_CHITCHAT

//===========================================================================
//============================== Host Keepalive ============================
//===========================================================================
#define HOST_KEEPALIVE_FEATURE
#define DEFAULT_KEEPALIVE_INTERVAL 2

//===========================================================================
//============================== Safety ==================================
//===========================================================================
#define PREVENT_COLD_EXTRUSION
#define EXTRUDE_MINTEMP 170
#define PREVENT_LENGTHY_EXTRUDE
#define EXTRUDE_MAXLENGTH 200

//===========================================================================
//============================== Motion Modes ==============================
//===========================================================================
#define CLASSIC_JERK

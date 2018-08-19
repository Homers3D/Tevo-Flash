/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Chinese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_CN_H
#define LANGUAGE_CN_H

#define DISPLAY_CHARSET_ISO10646_CN

#define WELCOME_MSG                         "\xa4\xa5\xfe\xff"
#define MSG_BACK                            "\x8e\xbb"
#define MSG_SD_INSERTED                     "\xa8\xa9\xaa\xab"
#define MSG_SD_REMOVED                      "\xa8\xa9\xac\xad"
#define MSG_LCD_ENDSTOPS                    "\x96\x97"
#define MSG_MAIN                            "\xae\xaf\xb0"
#define MSG_AUTOSTART                       "\xb1\xb2\xb3\xb4"
#define MSG_DISABLE_STEPPERS                "\xb5\xb6\xb9\xba"
#define MSG_DEBUG_MENU                      "Debug Menu"
#define MSG_PROGRESS_BAR_TEST               "Progress Bar Test"
#define MSG_AUTO_HOME                       "\xbb\xbc\xbd"
#define MSG_AUTO_HOME_X                     "X\xbc\xbd"
#define MSG_AUTO_HOME_Y                     "Y\xbc\xbd"
#define MSG_AUTO_HOME_Z                     "Z\xbc\xbd"
#define MSG_LEVEL_BED_HOMING                "XYZ \xbc\xbd"
#define MSG_LEVEL_BED_WAITING               "Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            "Next Point"
#define MSG_LEVEL_BED_DONE                  "Leveling Done!"
#define MSG_Z_FADE_HEIGHT                   "Fade Height"
#define MSG_SET_HOME_OFFSETS                "\xbe\xbf\xbb\xbc\xbd\xc0\xc1"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#define MSG_SET_ORIGIN                      "\xbe\xbf\xbc\xbd"
#define MSG_PREHEAT_1                       "\xc3\xc4 PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " \xd3\xd4\xc4\xc7"
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 " \xd3\xd4"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " \xc4\xc7"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " \xbe\xbf"
#define MSG_PREHEAT_2                       "\xc3\xc4 ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " \xd3\xd4\xc4\xc7"
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 " \xd3\xd4"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " \xc4\xc7"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " \xbe\xbf"
#define MSG_COOLDOWN                        "\xc8\xc9"
#define MSG_SWITCH_PS_ON                    "\xb9\xcb\xca\xb3"
#define MSG_SWITCH_PS_OFF                   "\xb9\xcb\xb5\xb6"
#define MSG_EXTRUDE                         "\xcc\xad"
#define MSG_RETRACT                         "\xbb\xcd"
#define MSG_MOVE_AXIS                       "\xc1\xb2\xce"
#define MSG_BED_LEVELING                    "\xcf\xe0\xc4\xc7"
#define MSG_LEVEL_BED                       "\xcf\xe0\xc4\xc7"
#define MSG_LEVEL_CORNERS                   "Level corners"
#define MSG_NEXT_CORNER                     "Next corner"
#define MSG_EDITING_STOPPED                 "Mesh Editing Stopped"
#define MSG_USER_MENU                       "\xc7\xef\xcf\xd0"
#define MSG_UBL_DOING_G29                   "Doing G29"
#define MSG_UBL_UNHOMED                     "\xa0XYZ\xbb\xbc\xbd"
#define MSG_UBL_TOOLS                       "UBL Tools"
#define MSG_UBL_LEVEL_BED                   "Unified Bed Leveling"
#define MSG_UBL_MANUAL_MESH                 "Manually Build Mesh"
#define MSG_UBL_BC_INSERT                   "Place shim & measure"
#define MSG_UBL_BC_INSERT2                  "Measure"
#define MSG_UBL_BC_REMOVE                   "Remove & measure bed"
#define MSG_UBL_MOVING_TO_NEXT              "Moving to next"
#define MSG_UBL_ACTIVATE_MESH               "Activate UBL"
#define MSG_UBL_DEACTIVATE_MESH             "Deactivate UBL"
#define MSG_UBL_SET_BED_TEMP                "Bed Temp"
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             "Hotend Temp"
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_MESH_EDIT                   "Mesh Edit"
#define MSG_UBL_EDIT_CUSTOM_MESH            "Edit Custom Mesh"
#define MSG_UBL_FINE_TUNE_MESH              "Fine Tuning Mesh"
#define MSG_UBL_DONE_EDITING_MESH           "Done Editing Mesh"
#define MSG_UBL_BUILD_CUSTOM_MESH           "Build Custom Mesh"
#define MSG_UBL_BUILD_MESH_MENU             "Build Mesh"
#define MSG_UBL_BUILD_PLA_MESH              "Build PLA Mesh"
#define MSG_UBL_BUILD_ABS_MESH              "Build ABS Mesh"
#define MSG_UBL_BUILD_COLD_MESH             "Build Cold Mesh"
#define MSG_UBL_MESH_HEIGHT_ADJUST          "Adjust Mesh Height"
#define MSG_UBL_MESH_HEIGHT_AMOUNT          "Height Amount"
#define MSG_UBL_VALIDATE_MESH_MENU          "Validate Mesh"
#define MSG_UBL_VALIDATE_PLA_MESH           "Validate PLA Mesh"
#define MSG_UBL_VALIDATE_ABS_MESH           "Validate ABS Mesh"
#define MSG_UBL_VALIDATE_CUSTOM_MESH        "Validate Custom Mesh"
#define MSG_UBL_CONTINUE_MESH               "Continue Bed Mesh"
#define MSG_UBL_MESH_LEVELING               "Mesh Leveling"
#define MSG_UBL_3POINT_MESH_LEVELING        "3-Point Leveling"
#define MSG_UBL_GRID_MESH_LEVELING          "Grid Mesh Leveling"
#define MSG_UBL_MESH_LEVEL                  "Level Mesh"
#define MSG_UBL_SIDE_POINTS                 "Side Points"
#define MSG_UBL_MAP_TYPE                    "Map Type"
#define MSG_UBL_OUTPUT_MAP                  "Output Mesh Map"
#define MSG_UBL_OUTPUT_MAP_HOST             "Output for Host"
#define MSG_UBL_OUTPUT_MAP_CSV              "Output for CSV"
#define MSG_UBL_OUTPUT_MAP_BACKUP           "Off Printer Backup"
#define MSG_UBL_INFO_UBL                    "Output UBL Info"
#define MSG_UBL_EDIT_MESH_MENU              "Edit Mesh"
#define MSG_UBL_FILLIN_AMOUNT               "Fill-in Amount"
#define MSG_UBL_MANUAL_FILLIN               "Manual Fill-in"
#define MSG_UBL_SMART_FILLIN                "Smart Fill-in"
#define MSG_UBL_FILLIN_MESH                 "Fill-in Mesh"
#define MSG_UBL_INVALIDATE_ALL              "Invalidate All"
#define MSG_UBL_INVALIDATE_CLOSEST          "Invalidate Closest"
#define MSG_UBL_FINE_TUNE_ALL               "Fine Tune All"
#define MSG_UBL_FINE_TUNE_CLOSEST           "Fine Tune Closest"
#define MSG_UBL_STORAGE_MESH_MENU           "Mesh Storage"
#define MSG_UBL_STORAGE_SLOT                "Memory Slot"
#define MSG_UBL_LOAD_MESH                   "Load Bed Mesh"
#define MSG_UBL_SAVE_MESH                   "Save Bed Mesh"
#define MSG_MESH_LOADED                     "Mesh %i loaded"
#define MSG_MESH_SAVED                      "Mesh %i saved"
#define MSG_NO_STORAGE                      "No storage"
#define MSG_UBL_SAVE_ERROR                  "Err: UBL Save"
#define MSG_UBL_RESTORE_ERROR               "Err: UBL Restore"
#define MSG_UBL_Z_OFFSET_STOPPED            "Z-Offset Stopped"
#define MSG_UBL_STEP_BY_STEP_MENU           "Step-By-Step UBL"
#define MSG_MOVING                          "Moving..."
#define MSG_FREE_XY                         "Free XY"
#define MSG_MOVE_X                          "\xc1\xb2X\xce"
#define MSG_MOVE_Y                          "\xc1\xb2Y\xce"
#define MSG_MOVE_Z                          "\xc1\xb2Z\xce"
#define MSG_MOVE_E                          "\xc1\xb2\xcc\xad\xba"
#define MSG_MOVE_01MM                       "\xc1\xb2 0.1mm"
#define MSG_MOVE_1MM                        "\xc1\xb2 1mm"
#define MSG_MOVE_10MM                       "\xc1\xb2 10mm"
#define MSG_SPEED                           "\xd1\xd2"
#define MSG_BED_Z                           "Bed Z"
#define MSG_NOZZLE                          "\xd3\xd4"
#define MSG_BED                             "\xc4\xc7"
#define MSG_FAN_SPEED                       "\xd5\xd6\xd1\xd2"
#define MSG_FLOW                            "\xcc\xad\xd1\xd2"
#define MSG_CONTROL                         "\xd8\xd9"
#define MSG_MIN                             LCD_STR_THERMOMETER " \xda\xdb"
#define MSG_MAX                             LCD_STR_THERMOMETER " \xda\xdc"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " \xbe\xc2"
#define MSG_AUTOTEMP                        "\xb1\xb2\xd8\xc9"
#define MSG_ON                              "\xb3 "  // intentional space to shift wide symbol to the left
#define MSG_OFF                             "\xb5 "  // intentional space to shift wide symbol to the left
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Select"
#define MSG_ACC                             "\xca\xf3\xa2\xd1"
#define MSG_JERK                            "\xd7\xd1"
#define MSG_VX_JERK                         "X\xd7\xd1"
#define MSG_VY_JERK                         "Y\xd7\xd1"
#define MSG_VZ_JERK                         "Z\xd7\xd1"
#define MSG_VE_JERK                         "E\xd7\xd1"
#define MSG_VELOCITY                        "\xd1\xd2"
#define MSG_VMAX                            "\xda\xa3\xd1"
#define MSG_VMIN                            "\xda\xa6\xd1"
#define MSG_VTRAV_MIN                       "\xda\xa6\xce\xb2"
#define MSG_ACCELERATION                    "\xa2\xd1"
#define MSG_AMAX                            "\xda\xa3\xa2\xd1"
#define MSG_A_RETRACT                       "\xbb\xcd\xa2\xd1"
#define MSG_A_TRAVEL                        "\xc1\xb2\xa2\xd1"
#define MSG_STEPS_PER_MM                    "\xb7\xb8/mm"
#define MSG_XSTEPS                          "X\xb7\xb8/mm"
#define MSG_YSTEPS                          "Y\xb7\xb8/mm"
#define MSG_ZSTEPS                          "Z\xb7\xb8/mm"
#define MSG_ESTEPS                          "E\xb7\xb8/mm"
#define MSG_E1STEPS                         "E1\xb7\xb8/mm"
#define MSG_E2STEPS                         "E2\xb7\xb8/mm"
#define MSG_E3STEPS                         "E3\xb7\xb8/mm"
#define MSG_E4STEPS                         "E4\xb7\xb8/mm"
#define MSG_E5STEPS                         "E5\xb7\xb8/mm"
#define MSG_TEMPERATURE                     "\xc9\xd2"
#define MSG_MOTION                          "\xb2\xff"
#define MSG_FILAMENT                        "\xe0\xe1"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_ADVANCE_K                       "Advance K"
#define MSG_CONTRAST                        "LCD contrast"
#define MSG_STORE_EEPROM                    "\xe5\xe6\xbe\xbf"
#define MSG_LOAD_EEPROM                     "\xe7\xe8\xbe\xbf"
#define MSG_RESTORE_FAILSAFE                "\xbc\xe9\xbe\xbf"
#define MSG_INIT_EEPROM                     "\xb4\xbe-EEPROM"
#define MSG_REFRESH                         "Refresh"
#define MSG_WATCH                           "\xec\xed\xee\xef"
#define MSG_PREPARE                         "\xa4\xa5"
#define MSG_TUNE                            "\xcf\xf0"
#define MSG_PAUSE_PRINT                     "\xf1\xf2\xca\xf3"
#define MSG_RESUME_PRINT                    "\xf4\xf5\xca\xf3"
#define MSG_STOP_PRINT                      "\xf2\xf6\xca\xf3"
#define MSG_CARD_MENU                       "SD\xa8\xca\xf3"
#define MSG_NO_CARD                         "\xf9\xa8"
#define MSG_DWELL                           "\xfa\xfb..."
#define MSG_USERWAIT                        "Wait for user..."
#define MSG_PRINT_PAUSED                    "\xf1\xf2\xca\xf3"
#define MSG_RESUMING                        "\xe7\xe8\xca\xf3"
#define MSG_PRINT_ABORTED                   "\xca\xf3\xf2\xf6"
#define MSG_NO_MOVE                         "No move."
#define MSG_KILLED                          "KILLED. "
#define MSG_STOPPED                         "\xf2\xf6. "
#define MSG_CONTROL_RETRACT                 "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Change filament"
#define MSG_INIT_SDCARD                     "Init. SD card"
#define MSG_CNG_SDCARD                      "Change SD card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_BLTOUCH                         "BLTouch"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   "Reset BLTouch"
#define MSG_BLTOUCH_DEPLOY                  "Deploy BLTouch"
#define MSG_BLTOUCH_STOW                    "Stow BLTouch"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "\xa0"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "\xa2\xc4\x9f\x9e"
#define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 "\xc9\xd2\x9f\xd8"
#define MSG_ERR_MAXTEMP                     "Err: \xd3\xd4\xc9\xd2\xf7\xa3"
#define MSG_ERR_MINTEMP                     "Err: \xd3\xd4\xc9\xd2\xf7\xa6"
#define MSG_ERR_MAXTEMP_BED                 "Err: \xc4\xc7\xc9\xd2\xf7\xa3"
#define MSG_ERR_MINTEMP_BED                 "Err: \xc4\xc7\xc9\xd2\xf7\xa6"
#define MSG_ERR_Z_HOMING                    "G28 Z Forbidden"
#define MSG_HALTED                          "\xfe\xff\xf2\xf6"
#define MSG_PLEASE_RESET                    "\xb5\xb3\xba\xa7\xe7\xe8\xfe\xff"
#define MSG_SHORT_DAY                       "d" // One character only
#define MSG_SHORT_HOUR                      "h" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only
#define MSG_HEATING                         "\xd3\xd4\xa2\xc4\xdd..."
#define MSG_HEATING_COMPLETE                "\xd3\xd4\xa2\xc4\x9d\xa1."
#define MSG_BED_HEATING                     "\xc4\xc7\xa2\xc4."
#define MSG_BED_DONE                        "\xc4\xc7\xa2\xc4\x9d\xa1."
#define MSG_DELTA_CALIBRATE                 "Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               "Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrate Center"
#define MSG_DELTA_SETTINGS                  "Delta Settings"
#define MSG_DELTA_AUTO_CALIBRATE            "Auto Calibration"
#define MSG_DELTA_HEIGHT_CALIBRATE          "Set Delta Height"
#define MSG_DELTA_DIAG_ROG                  "Diag Rod"
#define MSG_DELTA_HEIGHT                    "Height"
#define MSG_DELTA_RADIUS                    "Radius"
#define MSG_INFO_MENU                       "About Printer"
#define MSG_INFO_PRINTER_MENU               "Printer Info"
#define MSG_3POINT_LEVELING                 "3-Point Leveling"
#define MSG_LINEAR_LEVELING                 "Linear Leveling"
#define MSG_BILINEAR_LEVELING               "Bilinear Leveling"
#define MSG_UBL_LEVELING                    "Unified Bed Leveling"
#define MSG_MESH_LEVELING                   "Mesh Leveling"
#define MSG_INFO_STATS_MENU                 "Printer Stats"
#define MSG_INFO_BOARD_MENU                 "Board Info"
#define MSG_INFO_THERMISTOR_MENU            "Thermistors"
#define MSG_INFO_EXTRUDERS                  "Extruders"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protocol"
#define MSG_CASE_LIGHT                      "Case light"
#define MSG_CASE_LIGHT_BRIGHTNESS           "Light BRIGHTNESS"

#if LCD_WIDTH >= 20
      #define MSG_INFO_PRINT_COUNT              "Print Count"
      #define MSG_INFO_COMPLETED_PRINTS         "Completed"
      #define MSG_INFO_PRINT_TIME               "Total print time"
      #define MSG_INFO_PRINT_LONGEST            "Longest job time"
      #define MSG_INFO_PRINT_FILAMENT           "Extruded total"
  #else
      #define MSG_INFO_PRINT_COUNT              "Prints"
      #define MSG_INFO_COMPLETED_PRINTS         "Completed"
      #define MSG_INFO_PRINT_TIME               "Total"
      #define MSG_INFO_PRINT_LONGEST            "Longest"
      #define MSG_INFO_PRINT_FILAMENT           "Extruded"
  #endif

  #define MSG_INFO_MIN_TEMP                   "Min Temp"
  #define MSG_INFO_MAX_TEMP                   "Max Temp"
  #define MSG_INFO_PSU                        "PSU"
  #define MSG_DRIVE_STRENGTH                  "Drive Strength"
  #define MSG_DAC_PERCENT                     "Driver %"
  #define MSG_DAC_EEPROM_WRITE                "DAC EEPROM Write"
  #define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
  #define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
  #define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrude more"
  #define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Resume print"
  #define MSG_FILAMENT_CHANGE_MINTEMP         "Minimum Temp is "
  #define MSG_FILAMENT_CHANGE_NOZZLE          "  Nozzle: "
  #define MSG_ERR_HOMING_FAILED               "Homing failed"
  #define MSG_ERR_PROBING_FAILED              "Probing failed"

//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
  
    #define MSG_FILAMENT_CHANGE_INIT_1          "Wait for start"
    #define MSG_FILAMENT_CHANGE_INIT_2          "of the filament"
    #define MSG_FILAMENT_CHANGE_INIT_3          "change"
  
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wait for"
    #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filament unload"
  
    #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert filament"
    #define MSG_FILAMENT_CHANGE_INSERT_2        "and press button"
    #define MSG_FILAMENT_CHANGE_INSERT_3        "to continue..."
  
    #define MSG_FILAMENT_CHANGE_HEAT_1          "Press button to"
    #define MSG_FILAMENT_CHANGE_HEAT_2          "heat nozzle."
  
    #define MSG_FILAMENT_CHANGE_HEATING_1       "Heating nozzle"
    #define MSG_FILAMENT_CHANGE_HEATING_2       "Please wait..."
  
    #define MSG_FILAMENT_CHANGE_LOAD_1          "Wait for"
    #define MSG_FILAMENT_CHANGE_LOAD_2          "filament load"
  
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Wait for"
    #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filament extrude"
  
    #define MSG_FILAMENT_CHANGE_RESUME_1        "Wait for print"
    #define MSG_FILAMENT_CHANGE_RESUME_2        "to resume"
  
#else // LCD_HEIGHT < 4
  
    #define MSG_FILAMENT_CHANGE_INIT_1          "Please wait..."
  
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Ejecting..."
  
    #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert and Click"
  
    #define MSG_FILAMENT_CHANGE_HEATING_1       "Heating..."
  
    #define MSG_FILAMENT_CHANGE_LOAD_1          "Loading..."
  
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extruding..."
  
    #define MSG_FILAMENT_CHANGE_RESUME_1        "Resuming..."
  
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_CN_H

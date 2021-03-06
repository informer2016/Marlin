/**
 * Czech
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 * 
 * Translated by Petr Zahradnik, Computer Laboratory
 * Blog and video blog Zahradnik se bavi 
 * http://www.zahradniksebavi.cz
 *  
 */
#ifndef LANGUAGE_CZ_H
#define LANGUAGE_CZ_H

#define WELCOME_MSG                         MACHINE_NAME " pripraven"
#define MSG_SD_INSERTED                     "Karta vlozena"
#define MSG_SD_REMOVED                      "Karta vyjmuta"
#define MSG_MAIN                            "Hlavni nabidka"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Uvolnit motory"
#define MSG_AUTO_HOME                       "Domovska pozice"
#define MSG_SET_HOME_OFFSETS                "Nastavit ofsety"
#define	MSG_AUTO_LEVELING                   "Auto vyrovnavani"
#define	MSG_LEVELING_TEST                   "Test luzku uroven"
#define MSG_SET_ORIGIN                      "Nastavit pocatek"
#define MSG_PREHEAT_PLA                     "Zahrat PLA"
#define MSG_PREHEAT_PLA0                    "Zahrat PLA 1"
#define MSG_PREHEAT_PLA1                    "Zahrat PLA 2"
#define MSG_PREHEAT_PLA2                    "Zahrat PLA 3"
#define MSG_PREHEAT_PLA012                  "Zahrat PLA Vse"
#define MSG_PREHEAT_PLA_BEDONLY             "Zahrat PLA Podloz"
#define MSG_PREHEAT_PLA_SETTINGS            "Nastavit PLA"
#define MSG_PREHEAT_ABS                     "Zahrat ABS"
#define MSG_PREHEAT_ABS0                    "Zahrat ABS 1"
#define MSG_PREHEAT_ABS1                    "Zahrat ABS 2"
#define MSG_PREHEAT_ABS2                    "Zahrat ABS 3"
#define MSG_PREHEAT_ABS012                  "Zahrat ABS Vse"
#define MSG_PREHEAT_ABS_BEDONLY             "Zahrat ABS Podloz"
#define MSG_PREHEAT_ABS_SETTINGS            "Nastavit ABS"
#define MSG_COOLDOWN                        "Zchladit"
#define MSG_SWITCH_PS_ON                    "Zapnout napajeni"
#define MSG_SWITCH_PS_OFF                   "Vypnout napajeni"
#define MSG_EXTRUDE                         "Vytlacit (extr.)"
#define MSG_RETRACT                         "Zatlacit (retr.)"
#define MSG_MOVE_AXIS                       "Posunout osy"
#define MSG_MOVE_X                          "Posunout X"
#define MSG_MOVE_Y                          "Posunout Y"
#define MSG_MOVE_Z                          "Posunout Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_E1                         "Extruder 2"
#define MSG_MOVE_E2                         "Extruder 3"
#define MSG_MOVE_01MM                       "Posunout o 0,1mm"
#define MSG_MOVE_1MM                        "Posunout o 1mm"
#define MSG_MOVE_10MM                       "Posunout o 10mm"
#define MSG_SPEED                           "Rychlost"
#define MSG_NOZZLE                          "Tryska"
#define MSG_NOZZLE1                         "Tryska 2"
#define MSG_NOZZLE2                         "Tryska 3"
#define MSG_BED                             "Podlozka"
#define MSG_FAN_SPEED                       "Rychlost vent."
#define MSG_FLOW                            "Prutok"
#define MSG_FLOW0                           "Prutok 0"
#define MSG_FLOW1                           "Prutok 1"
#define MSG_FLOW2                           "Prutok 2"
#define MSG_CONTROL                         "Ovladani"
#define MSG_MIN                             " \002 Min"
#define MSG_MAX                             " \002 Max"
#define MSG_FACTOR                          " \002 Fakt"
#define MSG_AUTOTEMP                        "Autoteplota"
#define MSG_ON                              "Zap"
#define MSG_OFF                             "Vyp"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_PID_P1                          "PID-P E2"
#define MSG_PID_I1                          "PID-I E2"
#define MSG_PID_D1                          "PID-D E2"
#define MSG_PID_C1                          "PID-C E2"
#define MSG_PID_P2                          "PID-P E3"
#define MSG_PID_I2                          "PID-I E3"
#define MSG_PID_D2                          "PID-D E3"
#define MSG_PID_C2                          "PID-C E3"
#define MSG_ACC                             "Zrychl"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retrakt"
#define MSG_XSTEPS                          "Xkroku/mm"
#define MSG_YSTEPS                          "Ykroku/mm"
#define MSG_ZSTEPS                          "Zkroku/mm"
#define MSG_ESTEPS                          "Ekroku/mm"
#define MSG_TEMPERATURE                     "Teplota"
#define MSG_MOTION                          "Pohyb"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E na mm3"
#define MSG_FILAMENT_SIZE_EXTRUDER_0        "Fil. Prum. 1"
#define MSG_FILAMENT_SIZE_EXTRUDER_1        "Fil. Prum. 2"
#define MSG_FILAMENT_SIZE_EXTRUDER_2        "Fil. Prum. 3"
#define MSG_CONTRAST                        "Kontrast LCD"
#define MSG_STORE_EPROM                     "Ulozit nastaveni"
#define MSG_LOAD_EPROM                      "Nacist nastaveni"
#define MSG_RESTORE_FAILSAFE                "Obnovit vychozi"
#define MSG_REFRESH                         "Obnovit"
#define MSG_WATCH                           "Info obrazovka"
#define MSG_PREPARE                         "Priprava tisku"
#define MSG_TUNE                            "Doladeni tisku"
#define MSG_PAUSE_PRINT                     "Pozastavit tisk"
#define MSG_RESUME_PRINT                    "Obnovit tisk"
#define MSG_STOP_PRINT                      "Zastavit tisk"
#define MSG_CARD_MENU                       "Tisknout z SD"
#define MSG_NO_CARD                         "Zadna SD karta"
#define MSG_DWELL                           "Uspano..."
#define MSG_USERWAIT                        "Cekani na uziv..."
#define MSG_RESUMING                        "Obnovovani tisku"
#define MSG_PRINT_ABORTED                   "Tisk zrusen"
#define MSG_NO_MOVE                         "Zadny pohyb."
#define MSG_KILLED                          "PRERUSENO. "
#define MSG_STOPPED                         "ZASTAVENO. "
#define MSG_CONTROL_RETRACT                 "Retrakt mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                "Retraktovat  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Zvednuti Z mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Vymenit filament"
#define MSG_INIT_SDCARD                     "Nacist SD kartu"
#define MSG_CNG_SDCARD                      "Zmenit SD kartu"
#define MSG_ZPROBE_OUT                      "Sonda Z mimo bed"
#define MSG_POSITION_UNKNOWN                "Domu X/Y pred Z"
#define MSG_ZPROBE_ZOFFSET                  "Z ofset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"

#define MSG_RECTRACT                        "Retrakce"

#ifdef DELTA_CALIBRATION_MENU
    #define MSG_DELTA_CALIBRATE             "Delta Kalibrace"
    #define MSG_DELTA_CALIBRATE_X           "Kalibrovat X"
    #define MSG_DELTA_CALIBRATE_Y           "Kalibrovat Y"
    #define MSG_DELTA_CALIBRATE_Z           "Kalibrovat Z"
    #define MSG_DELTA_CALIBRATE_CENTER      "Kalibrovat Stred"
#endif // DELTA_CALIBRATION_MENU

#endif // LANGUAGE_CZ_H

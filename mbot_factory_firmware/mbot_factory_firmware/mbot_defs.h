/*
 * mbot_defs.h
 *
 * Created: 7/11/2022 10:33:47 AM
 *  Author: unfor
 */


#ifndef MBOT_DEFS_H_
#define MBOT_DEFS_H_


#if !defined(SERIAL_BAUD_RATE)
#define SERIAL_BAUD_RATE (115200)
#endif


#define NTD1     294
#define NTD2     330
#define NTD3     350
#define NTD4     393
#define NTD5     441
#define NTD6     495
#define NTD7     556
#define NTDL1    147
#define NTDL2    165
#define NTDL3    175
#define NTDL4    196
#define NTDL5    221
#define NTDL6    248
#define NTDL7    278
#define NTDH1    589
#define NTDH2    661
#define NTDH3    700
#define NTDH4    786
#define NTDH5    882
#define NTDH6    990
#define NTDH7    112


#define RUN_F	(0x01)
#define RUN_B	(0x01 << 1)
#define RUN_L	(0x01 << 2)
#define RUN_R	(0x01 << 3)
#define STOP	(0x00)


#define BLUE_TOOTH		0
#define IR_CONTROLER	1




#define VERSION                0
#define ULTRASONIC_SENSOR      1
#define TEMPERATURE_SENSOR     2
#define LIGHT_SENSOR           3
#define POTENTIONMETER         4
#define JOYSTICK               5
#define GYRO                   6
#define SOUND_SENSOR           7
#define RGBLED                 8
#define SEVSEG                 9
#define MOTOR                  10
#define SERVO                  11
#define ENCODER                12
#define IR                     13
#define IRREMOTE               14
#define PIRMOTION              15
#define INFRARED               16
#define LINEFOLLOWER           17
#define IRREMOTECODE           18
#define SHUTTER                20
#define LIMITSWITCH            21
#define BUTTON                 22
#define HUMITURE               23
#define FLAMESENSOR            24
#define GASSENSOR              25
#define COMPASS                26
#define TEMPERATURE_SENSOR_1   27
#define DIGITAL                30
#define ANALOG                 31
#define PWM                    32
#define SERVO_PIN              33
#define TONE                   34
#define BUTTON_INNER           35
#define ULTRASONIC_ARDUINO     36
#define PULSEIN                37
#define STEPPER                40
#define LEDMATRIX              41
#define TIMER                  50
#define TOUCH_SENSOR           51
#define JOYSTICK_MOVE          52
#define COMMON_COMMONCMD       60
#define ENCODER_BOARD          61
#define ENCODER_PID_MOTION     62
#define PM25SENSOR             63


// Secondary command (for COMMON_COMMONCMD)
#define SET_STARTER_MODE				0x10
#define SET_AURIGA_MODE					0x11
#define SET_MEGAPI_MODE					0x12
#define GET_BATTERY_POWER				0x70
#define GET_AURIGA_MODE					0x71
#define GET_MEGAPI_MODE					0x72


// Read type (for ENCODER_BOARD)
#define ENCODER_BOARD_POS				0x01
#define ENCODER_BOARD_SPEED				0x02


// Secondary command (for ENCODER_PID_MOTION)
#define ENCODER_BOARD_POS_MOTION		0x01
#define ENCODER_BOARD_SPEED_MOTION		0x02
#define ENCODER_BOARD_PWM_MOTION		0x03
#define ENCODER_BOARD_SET_CUR_POS_ZERO	0x04
#define ENCODER_BOARD_CAR_POS_MOTION	0x05


// Secondary command (for PM25SENSOR)
#define GET_PM1_0						0x01
#define GET_PM2_5						0x02
#define GET_PM10						0x03


#define GET		1
#define RUN		2
#define RESET	4
#define START	5




#endif /* MBOT_DEFS_H_ */
/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 5
  #define LEFT_MOTOR_BACKWARD  6
  #define RIGHT_MOTOR_FORWARD  9
  #define LEFT_MOTOR_FORWARD   10
  #define RIGHT_MOTOR_ENABLE 12
  #define LEFT_MOTOR_ENABLE 13
#endif
#ifdef BTS_MOTOR_DRIVER
//RIGHT SIDE MOTOR
#define R_PWM_RIGHT_SIDE 9 //PWM GPIO 9 - RPWM
#define L_PWM_RIGHT_SIDE 6 //PWM GPIO 6 - LPWM
#define L_EN_RIGHT_SIDE  7 //GPIO 7 - L_S
#define R_EN_RIGHT_SIDE  8 //GPIO 8 - R_S

//LEFT SIDE MOTOR
#define R_PWM_LEFT_SIDE  11 //PWM GPIO 11 - RPWM
#define L_PWM_LEFT_SIDE  10 //PWM GPIO 10 - LPWM 
#define L_EN_LEFT_SIDE   13 //GPIO 13 - L_S
#define R_EN_LEFT_SIDE   12 //GPIO 12 - R_S

#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);

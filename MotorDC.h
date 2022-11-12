
#ifndef MotorDC_H_
#define MotorDC_H_
#define HAL_TIM_MODULE_ENABLED

#include "stm32f4xx_hal.h" //deve ser modificado a depender da placa utilizada


// Direções do motor DC
#define dirFoward    0
#define dirReverse   1

// Propriedades PWM
#define MotorDC_PWM_RES  10
#define MotorDC_F_PWM    500

// Numero de motores DC utilizados
#define DC_MOTOR_UNITS  1

typedef struct
{
	GPIO_TypeDef * DIR1_GPIO;
	GPIO_TypeDef * DIR2_GPIO;
	uint16_t       DIR1_PIN;
	uint16_t       DIR2_PIN;
	TIM_TypeDef*   TIM_Instance;
	uint32_t       PWM_TIM_CH;
	uint16_t       TIM_CLK_MHz;
	uint32_t       PWM_FREQ_Hz;
	uint8_t        PWM_RES_BITS;
}DC_MOTOR_CfgType;


/*Prototipos das funções*/

void DC_MOTOR_Init(uint8_t au8_MOTOR_Instance);
void DC_MOTOR_Start(uint8_t au8_MOTOR_Instance, uint8_t au8_DIR, uint16_t au16_SPEED);
void DC_MOTOR_Set_Speed(uint8_t au8_MOTOR_Instance, uint16_t au16_SPEED);
void DC_MOTOR_Set_Dir(uint8_t au8_MOTOR_Instance, uint8_t au8_DIR);
void DC_MOTOR_Stop(uint8_t au8_MOTOR_Instance);
uint32_t DC_MOTOR_Get_MaxFreq(uint8_t au8_MOTOR_Instance);


#endif /* MotorDC_H_ */





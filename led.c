#include "led.h"

void led_test(void){
	led_init();
		led_on();
}

//初始化函数的定义
void led_init(void){
	//1.配置引脚功能为GPIO
	//2.配置引脚为输出功能
	GPIOCALTFNO &= ~(3 << 28);
	GPIOCALTFNO |= (1 << 28);
	GPIOCOUTENB |= (1 << 14);
}
void led_on(void){
	//配置输出寄存器为0
	GPIOCOUT &= ~(1 << 14);
	delay(1000000);
	GPIOCOUT |= (1 << 14);
}

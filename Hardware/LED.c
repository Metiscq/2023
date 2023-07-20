
#include "ch32v30x.h"                  // Device header
void LED_Init(){
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;//!!!
//�������Ĭ���ǵ͵�ƽ��
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1 | GPIO_Pin_0;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	GPIO_SetBits(GPIOA, GPIO_Pin_1 | GPIO_Pin_0);

}
void LED1_Turn(){
	if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_1)==0){
		GPIO_SetBits(GPIOA,GPIO_Pin_1);
	}else GPIO_ResetBits(GPIOA,GPIO_Pin_1);
	
}
void LED2_Turn(){
	if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin_0)==0){
		GPIO_SetBits(GPIOA,GPIO_Pin_0);
	}else GPIO_ResetBits(GPIOA,GPIO_Pin_0);
	
}
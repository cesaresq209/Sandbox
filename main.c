

void main(){
	GPIO_Init();
	ADC_Init();
	Uart_Init();
	while(1)
	{
		// Test atollic git
		if(GPIO_Read(PORTA, Pin2) == 1)
		{
			GPIO_Write(PORTA, Pin3, 1);
		}
		else
		{
			GPIO_Write(PORTA, Pin3, 0);
		}
	}
}

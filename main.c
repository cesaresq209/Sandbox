

void main(){
	GPIO_Init();
	ADC_Init();
	Uart_Init();
	while(1)
	{
		//Read GPIO
		if(GPIO_Read(PORTA, Pin2) == 1)
		{
			// Set GPIO to High
			GPIO_Write(PORTA, Pin3, 1);
		}
		else
		{
			// Set GPIO to Low
			GPIO_Write(PORTA, Pin3, 0);
		}
	}
}

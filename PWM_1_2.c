//pic12f683
unsigned char i;

void main(void)
{
    TRISIO.B2 = 0;
    PWM1_Init(20000); //40 khz
    PWM1_Set_Duty(127); //50% 127/255  // length of power wave
    PWM1_Start();

    while(1==1)
    {
      for(i=0; i<256; i++)   // loop from 0 to 255
      {
               PWM1_Set_Duty(i);
               delay_ms(10);
      }
    }
}

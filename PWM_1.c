//PWM for pic12f683

void main(void)
{
    TRISIO.B2 = 0;
    PWM1_Init(20000); //20 khz
    PWM1_Set_Duty(127); //50% 127/255
    PWM1_Start();

    while(1==1)
    {

    }
}

// Blink program
// Microcontroller 12f683
// IDE: MicroC
//https://www.youtube.com/watch?v=TIsiRmGVgUI

void main(void) 
{
    TRISIO.B2 = 0;
    
    while(1==1)
    {
        GPIO.B2 = 1;
        Delay_ms(1000);
        GPIO.B2 = 0;
        Delay_ms(1000);
    }
}

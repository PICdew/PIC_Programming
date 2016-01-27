//pic12f683
// https://www.youtube.com/watch?v=hkW5O5FCzMg
// Button turn on LED
unsigned char i = 0;

void main(void)
{
 TRISIO = 0b00000010; // TRISIO = 0x02;
 CMCON0 = 0x07; // 0b..111
 ANSEL = 0;
 

    while(1==1)
    {
     i = GPIO.B1;
     if(i == 0)
     {
      GPIO.B2 = 0;
     }
     if(i == 1)
     {
      GPIO.B2 = 1;
     }
     Delay_ms(500);
    }
}

//pic12f683
// https://www.youtube.com/watch?v=hkW5O5FCzMg
// Blink LEDs with Binary code
//Binary converter: http://www.binaryconvert.com/convert_signed_char.html
/*
GPIO is a 6-bit wide, bidirectional port. The
corresponding data direction register is TRISIO.
Setting a TRISIO bit (= 1) will make the corresponding
GPIO pin an input

Clearing a TRISIO bit (= 0) will make the corresponding GPIO pin an
output
*/

void main(void)
{   

    TRISIO = 0b000000;

    while(1==1)
    {
        GPIO = 0b000000;
        Delay_ms(1000);
        GPIO = 0b000101;
        Delay_ms(1000);
    }
 
    
}

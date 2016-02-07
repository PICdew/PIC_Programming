//pic12f683
// https://www.youtube.com/watch?v=hkW5O5FCzMg
// Blink LEDs with Binary code
//Binary converter: http://www.binaryconvert.com/convert_signed_char.html
// BitOperations: https://www.youtube.com/watch?v=d0AwjSpNXR0
/*
GPIO is a 6-bit wide, bidirectional port. The
corresponding data direction register is TRISIO.
Setting a TRISIO bit (= 1) will make the corresponding
GPIO pin an input

Clearing a TRISIO bit (= 0) will make the corresponding GPIO pin an
output
*/

unsigned char port1;
unsigned char port2;
unsigned char orValue;
unsigned char andValue;
unsigned char reverseValue;

void main(void)
{   

port1 = 0b00000001;
port2 = 0b00000100;

orValue =  port1|port2;    //or operator = 0b00000101;
andValue = port1 & port2;  //and operator = 0b00000000;
reverseValue = ~port1;  // reverse/one*s complement = 0b11111110

TRISIO = 0b00000000;

    while(1==1)
    {
        GPIO = reverseValue;
        Delay_ms(1000);
        GPIO = ~reverseValue;
        Delay_ms(1000);

    }
 
    
}

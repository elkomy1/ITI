#include"std_types.h"
#include"DIO.h"
#include"DIO_REG.h"
#include"bit_math.h"
#include<util/delay.h>




int main(void)
{

    DDRA=0xff;
    while(1)
    {
         _delay_ms(1000);
        DIO_enumSetPin(DIO_enumPortA,DIO_enumPin0,DIO_enumLogicHigh);
        _delay_ms(1000);
        DIO_enumSetPin(DIO_enumPortA,DIO_enumPin0,DIO_enumLogicLow);
    
    }


}

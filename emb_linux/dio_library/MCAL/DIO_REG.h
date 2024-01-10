#define PINA *((volatile unsigned char*)0x39)
#define PORTA *((volatile unsigned char*)0x3A)
#define DDRA *((volatile unsigned char*)0x3B)

#define PINB *((volatile unsigned char*)0x36)
#define PORTB *((volatile unsigned char*)0x37)
#define DDRB *((volatile unsigned char*)0x38)

#define PINC *((volatile unsigned char*)0x33)
#define PORTC *((volatile unsigned char*)0x34)
#define DDRC *((volatile unsigned char*)0x35)

#define PIND *((volatile unsigned char*)0x30)
#define PORTD *((volatile unsigned char*)0x31)
#define DDRD *((volatile unsigned char*)0x32)

#define F_CPU 8000000l

#include "DIO.h"
#include "DIO_REG.h"
#include "std_types.h"
#include "bit_math.h"

/**
 *@brief  : Function to Set the Input Pins to be external pulldown or internal pullup or the output pins to be Logic HIGH  or Logic LOW.
 *@param  : Port Number,Pin Number,Logic State(HIGH/LOW).
 *@return : Error State                                                                      
 */	
DIO_enumError_t DIO_enumSetPin(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumLogicState_t Copy_enumLogicState)
{
	DIO_enumError_t ErrorStatus = DIO_enumNOk;
	
	#if (NO_OF_PORTS==FOUR_PORTS)
	
	if(Copy_enumPortNum < DIO_enumPortA || Copy_enumPortNum > DIO_enumPortD) //checking if the port number is correct
	{
		ErrorStatus = DIO_enumWrongPort;
	}
	else if(Copy_enumPinNum < DIO_enumPin0 || Copy_enumPinNum > DIO_enumPin7) //checking if the pin number is correct
	{
		ErrorStatus = DIO_enumWrongPin;
	}
	else if(Copy_enumLogicState < DIO_enumLogicLow || Copy_enumLogicState > DIO_enumLogicHigh)
	{
		ErrorStatus = DIO_enumWrongConfig;
	}
	else //implement code normally
	{
		switch (Copy_enumPortNum)
		{
			case DIO_enumPortA: //if Port A
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh: 
						SET_BIT(PORTA,Copy_enumPinNum);
						break;
					case DIO_enumLogicLow:
						CLEAR_BIT(PORTA,Copy_enumPinNum);
						break;
					default:
						break;
				}
				break;
				
			case DIO_enumPortB: //if port B
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						SET_BIT(PORTB,Copy_enumPinNum);
						break;
					case DIO_enumLogicLow:
						CLEAR_BIT(PORTB,Copy_enumPinNum);
						break;
					default:
						break;
				}
				break;
				
			case DIO_enumPortC: //if port C
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						SET_BIT(PORTC,Copy_enumPinNum);
						break;
					case DIO_enumLogicLow:
						CLEAR_BIT(PORTC,Copy_enumPinNum);
						break;
					default:
						break;
				}
				break;
				
			case DIO_enumPortD: //if port D
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						SET_BIT(PORTD,Copy_enumPinNum);
						break;
					case DIO_enumLogicLow:
						CLEAR_BIT(PORTD,Copy_enumPinNum);
						break;
					default:
						break;
				}
				break;
			default:
				break;
		}
		ErrorStatus = DIO_enumOk;
	}
	
	#elif (NO_OF_PORTS==THREE_PORTS)
	
	if(Copy_enumPortNum < DIO_enumPortA || Copy_enumPortNum > DIO_enumPortC)//checking if the port number is correct
	{
		ErrorStatus = DIO_enumWrongPort;
	}
	else if(Copy_enumPinNum < DIO_enumPin0 || Copy_enumPinNum > DIO_enumPin7) //checking if the pin number is correct
	{
		ErrorStatus = DIO_enumWrongPin;
	}
	else if(Copy_enumLogicState < DIO_enumLogicLow || Copy_enumLogicState > DIO_enumLogicHigh)
	{
		ErrorStatus = DIO_enumWrongConfig;
	}
	else //implement code normally
	{
		switch (Copy_enumPortNum)
		{
			case DIO_enumPortA: //if Port A
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						SET_BIT(PORTA,Copy_enumPinNum);
						break;
					case DIO_enumLogicLow:
						CLEAR_BIT(PORTA,Copy_enumPinNum);
						break;
					default:
						break;
				}
				break;
			
			case DIO_enumPortB: //if port B
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						SET_BIT(PORTB,Copy_enumPinNum);
						break;
					case DIO_enumLogicLow:
						CLEAR_BIT(PORTB,Copy_enumPinNum);
						break;
					default:
						break;
				}
				break;
			
			case DIO_enumPortC: //if port C
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						SET_BIT(PORTC,Copy_enumPinNum);
						break;
					case DIO_enumLogicLow:
						CLEAR_BIT(PORTC,Copy_enumPinNum);
						break;
					default:
					break;
				}
				break;
			
			default:
				break;
		}
		ErrorStatus = DIO_enumOk;
	}
	
	#elif (NO_OF_PORTS==TWO_PORTS)
	
	if(Copy_enumPortNum < DIO_enumPortA || Copy_enumPortNum > DIO_enumPortB)//checking if the port number is correct
	{
		ErrorStatus = DIO_enumWrongPort;
	}
	else if(Copy_enumPinNum < DIO_enumPin0 || Copy_enumPinNum > DIO_enumPin7) //checking if the pin number is correct
	{
		ErrorStatus = DIO_enumWrongPin;
	}
	else if(Copy_enumLogicState < DIO_enumLogicLow || Copy_enumLogicState > DIO_enumLogicHigh)
	{
		ErrorStatus = DIO_enumWrongConfig;
	}
	else //implement code normally
	{
		switch (Copy_enumPortNum)
		{
			case DIO_enumPortA: //if Port A
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						SET_BIT(PORTA,Copy_enumPinNum);
						break;
					case DIO_enumLogicLow:
						CLEAR_BIT(PORTA,Copy_enumPinNum);
						break;
					default:
						break;
				}
				break;
			
			case DIO_enumPortB: //if port B
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						SET_BIT(PORTB,Copy_enumPinNum);
						break;
					case DIO_enumLogicLow:
						CLEAR_BIT(PORTB,Copy_enumPinNum);
						break;
					default:
						break;
				}
				break;
			
			default:
				break;
		}
		ErrorStatus = DIO_enumOk;
	}
	
	#elif (NO_OF_PORTS==ONE_PORT)
	
	if(Copy_enumPortNum < DIO_enumPortA || Copy_enumPortNum > DIO_enumPortA)//checking if the port number is correct
	{
		ErrorStatus = DIO_enumWrongPort;
	}
	else if(Copy_enumPinNum < DIO_enumPin0 || Copy_enumPinNum > DIO_enumPin7) //checking if the pin number is correct
	{
		ErrorStatus = DIO_enumWrongPin;
	}
	else if(Copy_enumLogicState < DIO_enumLogicLow || Copy_enumLogicState > DIO_enumLogicHigh)
	{
		ErrorStatus = DIO_enumWrongConfig;
	}
	else //implement code normally
	{
		switch (Copy_enumPortNum)
		{
			case DIO_enumPortA: //if Port A
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						SET_BIT(PORTA,Copy_enumPinNum);
						break;
					case DIO_enumLogicLow:
						CLEAR_BIT(PORTA,Copy_enumPinNum);
						break;
					default:
						break;
				}
				break;
			
			default:
				break;
		}
		ErrorStatus = DIO_enumOk;
	}
	
	#endif
	return ErrorStatus;
}

/**
 *@brief : Function to Set the whole Port(8 pins) at one time to be Logic HIGH  or Logic LOW.
 *@param : Port Number,Logic State(HIGH/LOW).
 *@return: Error State.                                                                      
 */
DIO_enumError_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum,DIO_enumLogicState_t Copy_enumLogicState) 
{
	#if (NO_OF_PORTS==FOUR_PORTS)
	
	DIO_enumError_t ErrorStatus = DIO_enumNOk;
	if(Copy_enumPortNum < DIO_enumPortA || Copy_enumPortNum > DIO_enumPortD) //checking if the port number is correct
	{
		ErrorStatus = DIO_enumWrongPort;
	}
	else if(Copy_enumLogicState < DIO_enumLogicLow || Copy_enumLogicState > DIO_enumLogicHigh) //checking if the configuration is correct
	{
		ErrorStatus = DIO_enumWrongConfig;
	}
	else //implement code normally
	{
		switch (Copy_enumPortNum)
		{
			case DIO_enumPortA: //if Port A
				switch(Copy_enumLogicState)
				{
						case DIO_enumLogicHigh:
							PORTA = 0xFF;
							break;
						case DIO_enumLogicLow:
							PORTA = 0x00;
							break;
						default:
							break;
				}
				break;
				
			case DIO_enumPortB: //if port B
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						PORTB = 0xFF;
						break;
					case DIO_enumLogicLow:
						PORTB = 0x00;
						break;
					default:
						break;
				}
				break;
				
			case DIO_enumPortC: //if port C
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						PORTC = 0xFF;
						break;
					case DIO_enumLogicLow:
						PORTC = 0x00;
						break;
					default:
						break;
				}
				break;
				
			case DIO_enumPortD: //if port D
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						PORTD = 0xFF;
						break;
					case DIO_enumLogicLow:
						PORTD = 0x00;
						break;
					default:
						break;
				}
				break;
				
			default:
				break;
		}
		ErrorStatus = DIO_enumOk;
	}
	
	#elif (NO_OF_PORTS==THREE_PORTS)

	DIO_enumError_t ErrorStatus = DIO_enumNOk;
	if(Copy_enumPortNum < DIO_enumPortA || Copy_enumPortNum > DIO_enumPortC) //checking if the port number is correct
	{
		ErrorStatus = DIO_enumWrongPort;
	}
	else if(Copy_enumLogicState < DIO_enumLogicLow || Copy_enumLogicState > DIO_enumLogicHigh) //checking if the configuration is correct
	{
		ErrorStatus = DIO_enumWrongConfig;
	}
	else //implement code normally
	{
		switch (Copy_enumPortNum)
		{
			case DIO_enumPortA: //if Port A
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						PORTA = 0xFF;
						break;
					case DIO_enumLogicLow:
						PORTA = 0x00;
						break;
					default:
						break;
				}
				break;
				
			case DIO_enumPortB: //if port B
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						PORTB = 0xFF;
						break;
					case DIO_enumLogicLow:
						PORTB = 0x00;
						break;
					default:
						break;
				}
				break;
				
			case DIO_enumPortC: //if port C
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
						PORTC = 0xFF;
						break;
					case DIO_enumLogicLow:
						PORTC = 0x00;
						break;
					default:
						break;
				}
				break;
			default:
				break;
		}
		ErrorStatus = DIO_enumOk;
	}
	
		#elif (NO_OF_PORTS==TWO_PORTS)

		DIO_enumError_t ErrorStatus = DIO_enumNOk;
		if(Copy_enumPortNum < DIO_enumPortA || Copy_enumPortNum > DIO_enumPortB) //checking if the port number is correct
		{
			ErrorStatus = DIO_enumWrongPort;
		}
		else if(Copy_enumLogicState < DIO_enumLogicLow || Copy_enumLogicState > DIO_enumLogicHigh) //checking if the configuration is correct
		{
			ErrorStatus = DIO_enumWrongConfig;
		}
		else //implement code normally
		{
			switch (Copy_enumPortNum)
			{
				case DIO_enumPortA: //if Port A
					switch(Copy_enumLogicState)
					{
						case DIO_enumLogicHigh:
							PORTA = 0xFF;
							break;
						case DIO_enumLogicLow:
							PORTA = 0x00;
							break;
						default:
							break;
					}
					break;
				
				case DIO_enumPortB: //if port B
					switch(Copy_enumLogicState)
					{
						case DIO_enumLogicHigh:
							PORTB = 0xFF;
							break;
						case DIO_enumLogicLow:
							PORTB = 0x00;
							break;
						default:
							break;
					}
					break;

				default:
					break;
			}
			ErrorStatus = DIO_enumOk;
		}
		
		#elif (NO_OF_PORTS==ONE_PORT)

		DIO_enumError_t ErrorStatus = DIO_enumNOk;
		if(Copy_enumPortNum < DIO_enumPortA || Copy_enumPortNum > DIO_enumPortA) //checking if the port number is correct
		{
			ErrorStatus = DIO_enumWrongPort;
		}
		else if(Copy_enumLogicState < DIO_enumLogicLow || Copy_enumLogicState > DIO_enumLogicHigh) //checking if the configuration is correct
		{
			ErrorStatus = DIO_enumWrongConfig;
		}
		else //implement code normally
		{
			switch (Copy_enumPortNum)
			{
				case DIO_enumPortA: //if Port A
					switch(Copy_enumLogicState)
					{
						case DIO_enumLogicHigh:
							PORTA = 0xFF;
							break;
						case DIO_enumLogicLow:
							PORTA = 0x00;
							break;
						default:
							break;
					}
					break;
				
				default:
					break;
			}
			ErrorStatus = DIO_enumOk;
		}
		
		#endif
	return ErrorStatus;
}

/**
 *@brief  : Function to Read the Logic State of the Pin (Is it HIGH or LOW).
 *@param  : Port Number,Pin Number, Pointer points to unsigned char passed by address (to return the value of pin state).
 *@return : Error State                                                                     
 */
DIO_enumError_t DIO_enumReadState(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumLogicState_t* Add_Pu8PinValue)
{
	DIO_enumError_t ErrorStatus = DIO_enumNOk;
	
	#if (NO_OF_PORTS==FOUR_PORTS)
	
	if(Copy_enumPortNum < DIO_enumPortA || Copy_enumPortNum > DIO_enumPortD) //checking if the port number is correct
	{
		ErrorStatus = DIO_enumWrongPort;
	}
	else if(Copy_enumPinNum < DIO_enumPin0 || Copy_enumPinNum > DIO_enumPin7) //checking if the pin number is correct
	{
		ErrorStatus = DIO_enumWrongPin;
	}
	else if (Add_Pu8PinValue == NULL) //checking if the pointer is not wild
	{
		ErrorStatus = DIO_enumNullPointer;
	}
	else //implement the code normally
	{
		switch(Copy_enumPortNum) //check we are in which port
		{
			case DIO_enumPortA: //if port A
				*Add_Pu8PinValue = GET_BIT(PINA,Copy_enumPinNum);
				break;
			case DIO_enumPortB: //if port B
				*Add_Pu8PinValue = GET_BIT(PINB,Copy_enumPinNum);
				break;
			case DIO_enumPortC: //if port C
				*Add_Pu8PinValue = GET_BIT(PINC,Copy_enumPinNum);
				break;
			case DIO_enumPortD: //if Port D
				*Add_Pu8PinValue = GET_BIT(PIND,Copy_enumPinNum);
				break;
			default:
				break;
		}
		ErrorStatus = DIO_enumOk;
	}
	
	#elif (NO_OF_PORTS==THREE_PORTS)
	
	if(Copy_enumPortNum < DIO_enumPortA || Copy_enumPortNum > DIO_enumPortC) //checking if the port number is correct
	{
		ErrorStatus = DIO_enumWrongPort;
	}
	else if(Copy_enumPinNum < DIO_enumPin0 || Copy_enumPinNum > DIO_enumPin7) //checking if the pin number is correct
	{
		ErrorStatus = DIO_enumWrongPin;
	}
	else if (Add_Pu8PinValue == NULL) //checking if the pointer is not wild
	{
		ErrorStatus = DIO_enumNullPointer;
	}
	else //implement the code normally
	{
		switch(Copy_enumPortNum) //check we are in which port
		{
			case DIO_enumPortA: //if port A
				*Add_Pu8PinValue = GET_BIT(PINA,Copy_enumPinNum);
				break;
			case DIO_enumPortB: //if port B
				*Add_Pu8PinValue = GET_BIT(PINB,Copy_enumPinNum);
				break;
			case DIO_enumPortC: //if port C
				*Add_Pu8PinValue = GET_BIT(PINC,Copy_enumPinNum);
				break;
			default:
				break;
		}
		ErrorStatus = DIO_enumOk;
	}
	
	#elif (NO_OF_PORTS==TWO_PORTS)
	
		if(Copy_enumPortNum < DIO_enumPortA || Copy_enumPortNum > DIO_enumPortB) //checking if the port number is correct
		{
			ErrorStatus = DIO_enumWrongPort;
		}
		else if(Copy_enumPinNum < DIO_enumPin0 || Copy_enumPinNum > DIO_enumPin7) //checking if the pin number is correct
		{
			ErrorStatus = DIO_enumWrongPin;
		}
		else if (Add_Pu8PinValue == NULL) //checking if the pointer is not wild
		{
			ErrorStatus = DIO_enumNullPointer;
		}
		else //implement the code normally
		{
			switch(Copy_enumPortNum) //check we are in which port
			{
				case DIO_enumPortA: //if port A
					*Add_Pu8PinValue = GET_BIT(PINA,Copy_enumPinNum);
					break;
				case DIO_enumPortB: //if port B
					*Add_Pu8PinValue = GET_BIT(PINB,Copy_enumPinNum);
					break;
				default:
					break;
			}
			ErrorStatus = DIO_enumOk;
		}
	
	#elif (NO_OF_PORTS==ONE_PORT)
	
			if(Copy_enumPortNum < DIO_enumPortA || Copy_enumPortNum > DIO_enumPortA) //checking if the port number is correct
			{
				ErrorStatus = DIO_enumWrongPort;
			}
			else if(Copy_enumPinNum < DIO_enumPin0 || Copy_enumPinNum > DIO_enumPin7) //checking if the pin number is correct
			{
				ErrorStatus = DIO_enumWrongPin;
			}
			else if (Add_Pu8PinValue == NULL) //checking if the pointer is not wild
			{
				ErrorStatus = DIO_enumNullPointer;
			}
			else //implement the code normally
			{
				switch(Copy_enumPortNum) //check we are in which port
				{
					case DIO_enumPortA: //if port A
						*Add_Pu8PinValue = GET_BIT(PINA,Copy_enumPinNum);
						break;
					
					default:
						break;
				}
				ErrorStatus = DIO_enumOk;
			}
			
	#endif
	
	return ErrorStatus;
}

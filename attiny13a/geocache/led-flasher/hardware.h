// PinMode

#define PINMODE_PB0_INPUT   DDRB &= ~(1 << PB0)
#define PINMODE_PB1_INPUT   DDRB &= ~(1 << PB1)
#define PINMODE_PB2_INPUT   DDRB &= ~(1 << PB2)
#define PINMODE_PB3_INPUT   DDRB &= ~(1 << PB3)
#define PINMODE_PB4_INPUT   DDRB &= ~(1 << PB4)
#define PINMODE_PB5_INPUT   DDRB &= ~(1 << PB5)

#define PINMODE_PB0_OUTPUT  DDRB |= (1 << PB0)
#define PINMODE_PB1_OUTPUT  DDRB |= (1 << PB1)
#define PINMODE_PB2_OUTPUT  DDRB |= (1 << PB2)
#define PINMODE_PB3_OUTPUT  DDRB |= (1 << PB3)
#define PINMODE_PB4_OUTPUT  DDRB |= (1 << PB4)
#define PINMODE_PB5_OUTPUT  DDRB |= (1 << PB5)

// DigitalWrite

#define DIGITALWRITE_PB0_LOW     PORTB &= ~(1 << PB0)
#define DIGITALWRITE_PB1_LOW     PORTB &= ~(1 << PB1)
#define DIGITALWRITE_PB2_LOW     PORTB &= ~(1 << PB2)
#define DIGITALWRITE_PB3_LOW     PORTB &= ~(1 << PB3)
#define DIGITALWRITE_PB4_LOW     PORTB &= ~(1 << PB4)
#define DIGITALWRITE_PB5_LOW     PORTB &= ~(1 << PB5)

#define DIGITALWRITE_PB0_HIGH    PORTB |= (1 << PB0)
#define DIGITALWRITE_PB1_HIGH    PORTB |= (1 << PB1)
#define DIGITALWRITE_PB2_HIGH    PORTB |= (1 << PB2)
#define DIGITALWRITE_PB3_HIGH    PORTB |= (1 << PB3)
#define DIGITALWRITE_PB4_HIGH    PORTB |= (1 << PB4)
#define DIGITALWRITE_PB5_HIGH    PORTB |= (1 << PB5)

#define DIGITALWRITE_PB0_TOGGLE  PORTB ^= (1 << PB0)
#define DIGITALWRITE_PB1_TOGGLE  PORTB ^= (1 << PB1)
#define DIGITALWRITE_PB2_TOGGLE  PORTB ^= (1 << PB2)
#define DIGITALWRITE_PB3_TOGGLE  PORTB ^= (1 << PB3)
#define DIGITALWRITE_PB4_TOGGLE  PORTB ^= (1 << PB4)
#define DIGITALWRITE_PB5_TOGGLE  PORTB ^= (1 << PB5)

// Prescale

#define CPU_PRESCALE_1    cli();CLKPR=(1<<CLKPCE);CLKPR=0;sei();
#define CPU_PRESCALE_2    cli();CLKPR=(1<<CLKPCE);CLKPR=1;sei();
#define CPU_PRESCALE_4    cli();CLKPR=(1<<CLKPCE);CLKPR=2;sei();
#define CPU_PRESCALE_8    cli();CLKPR=(1<<CLKPCE);CLKPR=3;sei();
#define CPU_PRESCALE_16   cli();CLKPR=(1<<CLKPCE);CLKPR=4;sei();
#define CPU_PRESCALE_32   cli();CLKPR=(1<<CLKPCE);CLKPR=5;sei();
#define CPU_PRESCALE_64   cli();CLKPR=(1<<CLKPCE);CLKPR=6;sei();
#define CPU_PRESCALE_128  cli();CLKPR=(1<<CLKPCE);CLKPR=7;sei();
#define CPU_PRESCALE_256  cli();CLKPR=(1<<CLKPCE);CLKPR=8;sei();

#define ADC_PRESCALE_2    ADCSRA|=((1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0));ADCSRA^=(1<<ADPS0)
#define ADC_PRESCALE_4    ADCSRA|=((1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0));ADCSRA^=(1<<ADPS1)
#define ADC_PRESCALE_8    ADCSRA|=((1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0));ADCSRA^=((1<<ADPS1)|(1<<ADPS0))
#define ADC_PRESCALE_16   ADCSRA|=((1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0));ADCSRA^=(1<<ADPS2)
#define ADC_PRESCALE_32   ADCSRA|=((1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0));ADCSRA^=((2<<ADPS2)|(0<<ADPS0))
#define ADC_PRESCALE_64   ADCSRA|=((1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0));ADCSRA^=((2<<ADPS2)|(1<<ADPS1))
#define ADC_PRESCALE_128  ADCSRA|=((1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0));ADCSRA^=((2<<ADPS1)|(1<<ADPS1)|(1<<ADPS0))

// disable hardware features

#define PRR               _SFR_IO8(0x25)
#define PRADC             0
#define PRTIM0            1

#define ADC_DISABLED      ADCSRA&=~(1<<ADEN);PRR|=(1<<PRADC)
#define ACD_DISABLED      ACSR=(1<<ACD)
#define TIMER0_DISABLED   PRR|=(1<<PRTIM0)

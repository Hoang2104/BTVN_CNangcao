#include <stdio.h>
#include <stdint.h>

typedef enum{
    GPIO_PIN_1 = 1,
    GPIO_PIN_2 = 1 << 1,
    GPIO_PIN_3 = 1 << 2,
    GPIO_PIN_4 = 1 << 3,
    GPIO_PIN_5 = 1 << 4,
    GPIO_PIN_6 = 1 << 5,
    GPIO_PIN_7 = 1 << 6,
    GPIO_PIN_8 = 1 << 7
}GPIO_PIN;

typedef enum{
    LOW,
    HIGH
}STATUS;

uint8_t PORTA = 0b00000000;

void delay(uint64_t a){
    int i,j;
    for (i = 0; i <= a; i++)
    {
        for (j = 0; j < 1000; i++)
        {
        }
    }
}

void blinkLED(GPIO_PIN pin, uint64_t a){
    PORTA &= ~pin;
    delay(a);
    PORTA |= pin;
    delay(a);
}

int main(int argc, char const *argv[])
{
    while(1){
        blinkLED(GPIO_PIN_1,5);
        printf("portA: %x\n", PORTA);
    }
    return 0;
}

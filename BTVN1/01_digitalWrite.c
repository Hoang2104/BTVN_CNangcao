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
    HIGH,
}STATUS;

uint8_t PORTA = 0b00010000;

void digitalWrite(GPIO_PIN PIN, STATUS status){
    if(status == HIGH){
        PORTA |= PIN; 
    }else PORTA &= ~PIN;
}

int main(int argc, char const *argv[])
{
    digitalWrite(GPIO_PIN_5, LOW);
    printf("portA: %x", PORTA);
    return 0;
}

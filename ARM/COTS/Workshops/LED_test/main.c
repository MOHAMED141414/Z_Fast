#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"

void delay(void)
{
    for (volatile int i = 0; i < 100000; i++); // Delay ????
}

int main(void)
{
    // 1. Initialize System Clock
    RCC_VoidInitSysClock();

    // 2. Enable Clock for GPIO Port A
    RCC_VoidEnablePeripheralClock(RCC_APB2, RCC_APB2ENR_IOPAEN);

    // 3. Configure Pin 5 on Port A as Output (Push-pull, 10 MHz)
    GPIO_u8SetPinMode(GPIO_PORTA, GPIO_PIN5, GPIO_OUTPUT_PUSH_PULL_10MHZ);

    while (1)
    {
        // 4. Set Pin 5 to High (LED ON)
        GPIO_u8SetPinValue(GPIO_PORTA, GPIO_PIN5, GPIO_HIGH);

        // 5. Delay
        delay();

        // 6. Set Pin 5 to Low (LED OFF)
        GPIO_u8SetPinValue(GPIO_PORTA, GPIO_PIN5, GPIO_LOW);

        // 7. Delay
        delay();
    }

    return 0;
}
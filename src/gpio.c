#include <stdio.h>
#include "pico/stdlib.h"

#define LED_RED     13
#define LED_BLUE    12
#define LED_GREEN   11
#define BUZZER      21

void initicializar_gpio()
{
    gpio_init(LED_RED);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_init(LED_BLUE);
    gpio_set_dir(LED_BLUE, GPIO_OUT);
    gpio_init(LED_GREEN);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);
}
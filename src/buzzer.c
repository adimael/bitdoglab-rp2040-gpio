#include <stdio.h>
#include "pico/stdlib.h"
#include "gpio.h"
#include "buzzer.h"

void controle_buzzer () {
    gpio_put(BUZZER, 1);
    sleep_ms(2000);
    gpio_put(BUZZER, 0);
}
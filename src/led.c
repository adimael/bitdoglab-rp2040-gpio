#include "pico/stdlib.h"
#include "gpio.h"
#include "led.h"

void controle_led(int red, int blue, int green){
    gpio_put(LED_RED, red);
    gpio_put(LED_BLUE, blue);
    gpio_put(LED_GREEN, green);
}


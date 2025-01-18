#include <stdio.h>
#include "pico/stdlib.h"
#include "gpio.h"
#include "buzzer.h"
#include "led.h"
int main(){

    stdio_init_all();
    initicializar_gpio();

    return 0;
}
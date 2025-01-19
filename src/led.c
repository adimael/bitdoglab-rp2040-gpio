#include "led.h"
#include "pico/stdlib.h"

void ligar_led_verde() {
    gpio_put(11, 1);
    gpio_put(12, 0);
    gpio_put(13, 0);
}

void ligar_led_azul() {
    gpio_put(11, 0);
    gpio_put(12, 1);
    gpio_put(13, 0);
}

void ligar_led_vermelho() {
    gpio_put(11, 0);
    gpio_put(12, 0);
    gpio_put(13, 1);
}

void ligar_led_branco() {
    gpio_put(11, 1);
    gpio_put(12, 1);
    gpio_put(13, 1);
}

void desligar_leds() {
    gpio_put(11, 0);
    gpio_put(12, 0);
    gpio_put(13, 0);
}

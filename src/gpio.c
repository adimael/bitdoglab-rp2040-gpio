#include "gpio.h"
#include "pico/stdlib.h"

void inicializar_gpio() {
    for (int gpio = 11; gpio <= 13; gpio++) {
        gpio_init(gpio);
        gpio_set_dir(gpio, GPIO_OUT);
    }
    gpio_init(21);
    gpio_set_dir(21, GPIO_OUT); // Configuração do buzzer
}

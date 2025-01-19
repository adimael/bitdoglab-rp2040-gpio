#include "buzzer.h"
#include "pico/stdlib.h"

void acionar_buzzer() {
    gpio_put(21, 1);
    sleep_ms(2000); // Ativa o buzzer por 2 segundos
    gpio_put(21, 0);
}

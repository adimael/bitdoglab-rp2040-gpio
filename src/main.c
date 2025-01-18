#include <stdio.h>
#include "pico/stdlib.h"
#include "gpio.h"
#include "buzzer.h"
#include "led.h"
int main(){

    stdio_init_all();
    initicializar_gpio();
    
    while(true){
        printf("Digite o comando: ");
        char comando[10];
        scanf("%s", comando);

        if (strcmp(comando, "vermelho") == 0) {
            control_led(1, 0, 0);
        } else if (strcmp(comando, "azul") == 0) {
            control_led(0, 1, 0);
        } else if (strcmp(comando, "verde") == 0) {
            control_led(0, 0, 1);
        } else if (strcmp(comando, "branco") == 0) {
            control_led(1, 1, 1);
        } else if (strcmp(comando, "desligar") == 0) {
            control_led(0, 0, 0);
        } else if (strcmp(comando, "som") == 0) {
            control_buzzer();
        } else if (strcmp(comando, "REBOOT") == 0) {
            printf("Rebooting...\n");
            reset_usb_boot(0, 0);
        } else {
            printf("Comando não reconhecido.\n");
        }
    }
    

    return 0;
}
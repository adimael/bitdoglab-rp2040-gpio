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
    }
    

    return 0;
}
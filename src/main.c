#include <stdio.h>
#include "pico/stdlib.h"
#include <string.h>
#include "pico/bootrom.h"
#include "gpio.h"
#include "led.h"
#include "buzzer.h"

// Função para processar os comandos
void processar_comando(const char *comando);

int main() {
    stdio_init_all();  // Inicializa a UART padrão para comunicação com o terminal
    inicializar_gpio(); // Configura os pinos GPIO
    printf("Bem-vindo! Controle os LEDs e o buzzer pelo terminal.\n");

    char comando[20];  // Variável para armazenar o comando
    int index = 0;

    while (1) {
        printf("Digite um comando: ");
        memset(comando, 0, sizeof(comando));  // Limpa o buffer do comando
        index = 0;

        // Lê os caracteres até o ENTER (ou 'newline')
        while (1) {
            char c = getchar();  // Lê os caracteres da entrada padrão

            // Verifica se o caractere é ENTER (nova linha) ou '\r' (retorno de carro)
            if (c == '\r' || c == '\n') {
                comando[index] = '\0';  // Finaliza o comando
                break;
            } else if (index < sizeof(comando) - 1) {
                comando[index++] = c;  // Armazena o caractere no buffer
                putchar(c);  // Echo: exibe o caractere digitado
            }
        }

        // Após digitar o comando, mostra o que foi digitado
        printf("\nComando digitado: %s\n", comando);
        processar_comando(comando);  // Processa o comando
    }

    return 0;
}

void processar_comando(const char *comando) {
    if (strcmp(comando, "green") == 0) {
        ligar_led_verde();
    } else if (strcmp(comando, "blue") == 0) {
        ligar_led_azul();
    } else if (strcmp(comando, "red") == 0) { 
        ligar_led_vermelho();
    } else if (strcmp(comando, "white") == 0) {
        ligar_led_branco();
    } else if (strcmp(comando, "desligar") == 0) {
        desligar_leds();
    } else if (strcmp(comando, "buzzer") == 0) {
        acionar_buzzer();
    } else if (strcmp(comando, "sair") == 0) {
        printf("Reiniciando o sistema...\n");
        reset_usb_boot(0, 0);  // Reinicia o microcontrolador
    } else {
        printf("Comando inválido. Tente novamente.\n");
    }
}

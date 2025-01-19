# Projeto: Controle de Pinos GPIO com Teclado Matricial 4x4

Este projeto tem como objetivo implementar o controle de pinos GPIO utilizando um teclado matricial 4x4 e um microcontrolador Raspberry Pi Pico W. O sistema irá controlar 3 LEDs RGB, um buzzer e exibir informações em um display LCD1602, acionados pelas teclas pressionadas no teclado matricial. O código é desenvolvido na linguagem C utilizando o Pico SDK e simulado com o simulador de eletrônica online Wokwi.

## Vídeo da Prática

Segue o link do vídeo dos resultados obtidos durante a simulação:

[Assista ao vídeo demonstrativo. Clique aqui!](https://youtube.com/shorts/9cQsqQ9KVrY?feature=share)



---

## Tabela de Conteúdos
  - [Estrutura do Repositório](#estrutura-do-repositório)
  - [Como Rodar o Projeto](#como-rodar-o-projeto)
  - [Simulação no Wokwi:](#simulação-no-wokwi)
  - [Delegação de Tarefas](#delegação-de-tarefas)
  - [Prazos e Datas Importantes](#prazos-e-datas-importantes)

## Estrutura do Repositório

A estrutura do repositório é organizada da seguinte forma:

````
/projeto
│
├── /src               # Código-fonte do projeto
│   ├── main.c          # Arquivo principal
│   ├── buzzer.c        # Funções acionar o buzzer
│   ├── gpio.c          # Funções para inicializar pinos GPIO
│   ├── led.c           # Funções ligar leds
│
├── /include           # Cabeçalhos (.h)
│   ├── buzzer.h       # Definições do buzzer
│   ├── led.h          # Definições do led
│   ├── gpio.h         # Definições para GPIO
│
├── README.md          # Arquivo com instruções de uso do projeto
├── CMakeLists.txt     # Arquivo de configuração do CMake

````


## Como Rodar o Projeto

Para rodar o projeto localmente, siga os seguintes passos:

1. **Clone o repositório**:
   ```bash
   git clone https://github.com/adimael/bitdoglab-rp2040-gpio.git
   ````
2. Entre na pasta do projeto:
````
cd bitdoglab-rp2040-gpio
````

# Instruções para Configuração e Compilação do Projeto

## Passo 1: Baixar o Ninja
1. Acesse a página oficial de releases do Ninja:  
   [Ninja Releases no GitHub](https://github.com/ninja-build/ninja/releases).
2. Baixe o arquivo binário mais recente para Windows (geralmente um `.zip`).
3. Extraia o conteúdo do arquivo `.zip` (haverá um arquivo `ninja.exe`).

---

## Passo 2: Adicionar o Ninja ao Path do sistema
Para que o `ninja` seja reconhecido como um comando em qualquer terminal, siga estas etapas:

1. Clique com o botão direito no botão **Iniciar** e selecione **Configurações**.
2. Vá em **Sistema** → **Sobre** → **Configurações avançadas do sistema** (no lado direito).
3. Na aba **Avançado**, clique em **Variáveis de Ambiente**.
4. Na seção **Variáveis do Sistema**, localize a variável `Path` e clique em **Editar**.
5. Clique em **Novo** e adicione o caminho completo para o diretório onde você extraiu o `ninja.exe`. Por exemplo:
````
C:\Users\SeuUsuario\Downloads\ninja-win
````
6. Clique em **OK** em todas as janelas.

---

## Passo 3: Verificar se o Ninja está funcionando
1. Abra um terminal (PowerShell ou Prompt de Comando).
2. Digite o comando abaixo para verificar a instalação:
```bash
ninja --version
````

## Passo 4: Configurar e Compilar o Projeto

1. Volte ao diretório do projeto e abra um terminal.
2. Crie ou limpe a pasta `build`:
   ```bash
   rmdir /s /q build
   mkdir build
   cd build

3. Configure o projeto com o CMake:
 ```bash
   cmake -G Ninja ..
  ````
4. Compile o projeto:

  ```bash
   ninja
  ````

5. Após isso, o arquivo main.elf será gerado na pasta build.

## Simulação no Wokwi:

Após a configuração, você pode usar o simulador Wokwi para testar o circuito. Acesse o simulador através do link [https://wokwi.com/](https://wokwi.com/) ou use a extensão do Wokwi no VSCode [https://marketplace.visualstudio.com/items?itemName=Wokwi.wokwi-vscode](https://marketplace.visualstudio.com/items?itemName=Wokwi.wokwi-vscode) e veja como a interação com o teclado matricial aciona os LEDs, o buzzer e exibe as informações no display LCD1602.


## Delegação de Tarefas

Cada membro do projeto ficou responsável por uma parte específica. Abaixo estão as tarefas delegadas, com o nome do responsável e o nome sugerido para a branch.

| **Membro**           | **Tarefa**                                  | **Branch Sugerida**            |
|----------------------|---------------------------------------------|--------------------------------|
| **Matheus Mato**      | Buzzer              | `BUZZER` |
| **Vivian Rodrigues**  | README.md                    | `main`      |
| **Daniel Silva**      | Main (Arquivo principal)                     | `main`     |
| **Joelson Santana**    | Main (Arquivo principal)              | `main`|
| **Mychael Matos**     | Main (Arquivo principal)               | `main` |conversor-potencia`   |
| **Caio Bruno**        | Leds                  | `LEDS`       |conversor-tempo`      |conversor-dados`      |
| **Adimael Santos**      | Configuração e estruturação do projeto            | `main`   |  |

## Prazos e Datas Importantes

- Data de início do projeto: 14/01/2025

- Data para finalizar e subir as tarefas: 17/01/2025 (como combinado durante a reunião)

- Data para revisão e merge das branches: 18/01/2025

- Data final do projeto: 19/01/2025





#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "includes/kbhit.h" // Input do teclado
#include "includes/setup.h" // Parte lógica do programa
#include "includes/draw.h" // Desenha a quadra
#include "includes/singleplayer.h" // Modo SinglePlayer
#include "includes/pve.h" // Modo contra o computador

int main() {
    opc = menu();
    switch (opc) {
        case 1:
            setupSinglePlayer();
            while (!perdeu) {
                inputSinglePlayer();
                clean();
                logic_singlePlayer();
                ball_singlePlayer();
                draw(1);
                usleep(90000);
            }
            break;
        case 2:
            setupPvE();
            while (!perdeu) {
                inputPvE();
                clean();
                logic_PVE();
                ball_PvE();
                draw(2);
                usleep(90000);
            }
            break;
        default:
            return 0;
            break;
    }
}
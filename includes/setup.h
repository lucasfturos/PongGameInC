#define w 20
#define h 60

int i, j, k, flag, perdeu, pontosP1, pontosP2;
int player1Y, player2Y, bolaX, bolaY;
int velocidadeX, velocidadeY, opc;
char quadra[w][h] = {};

void inputSinglePlayer() {
    if (kbhit()) {
        switch (getchar()) {
        case 'a': flag = 1; break;
        case 'd': flag = 2; break;
        case 'x': perdeu = 1; break;
        }
    }
}

void inputPvE() {
    if (kbhit()) {
        switch (getchar()) {
        case 'w': flag = 1; break;
        case 's': flag = 2; break;
        case 'x': perdeu = 1; break;
        }
    }
}

void setupSinglePlayer() {
    bolaX = rand() % h - 2;
    bolaY = rand() % w - 2;
    velocidadeX = 1;
    velocidadeY = 1;
    perdeu = 0;
    // Pontos do Jogador 1 e do Jogador 2
    pontosP1 = 0;
    pontosP2 = 0;
}

void setupPvE() {
    bolaX = rand() % h - 2;
    bolaY = rand() % w - 2;
    velocidadeX = 1;
    velocidadeY = 1;
    perdeu = 0;
    // Pontos do Jogador 1 e do Jogador 2
    pontosP1 = 0;
    pontosP2 = 0;
}

void ball_singlePlayer() {
    if (bolaY <= 2)
        velocidadeY *= -1;
    else if (bolaY >= w - 2)
        velocidadeY *= -1;
    else if (bolaX <= 1 && bolaX == player1Y - 1)
        velocidadeX *= -1;
    else if (bolaX > h - 3)
        velocidadeX *= -1;

    bolaX += velocidadeX;
    bolaY += velocidadeY;

    quadra[bolaY][bolaX] = '0';
}

void ball_PvE() {
    if (bolaY <= 1)
        velocidadeY *= -1;
    else if (bolaY >= w - 2)
        velocidadeY *= -1;
    else if (bolaX <= 1 && bolaX == player1Y - 1)
        velocidadeX *= -1;
    else if (bolaX > h - 3 || bolaX <=1)
        velocidadeX *= -1;

    bolaX += velocidadeX;
    bolaY += velocidadeY;

    quadra[bolaY][bolaX] = '0';
}
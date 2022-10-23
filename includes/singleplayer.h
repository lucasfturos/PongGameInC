void logic_singlePlayer() {
    switch (flag) {
    case 1:
        if (player1Y < 1) { flag = 2; break; }
        else { player1Y--; break; }
    case 2:
        if (player1Y >= h - 10) { flag = 1; break; }
        else { player1Y++; break; }
    default: break;
    }

    for (i = 1; i <= w; i++){
        if (i <= 8) {
            quadra[w - 2][player1Y + i] = '=';
            if (bolaY <= player1Y &&
                bolaY >= player1Y &&
                bolaX <= player1Y &&
                bolaX <= i && bolaY <= i)
                velocidadeX *= -1;

            // if (bolaX <= 1 && bolaY >= 1) {
            //     pontosP2 += 1;
            //     bolaX = rand() % h - 2;
            //     bolaY = rand() % w - 2;
            //     if (pontosP2 == 10)
            //         perdeu = 1;
            // }
            // else if (bolaX <= player1Y && bolaX <= i) {
            //     pontosP1 += 1;
            //     bolaX = rand() % h - 2;
            //     bolaY = rand() % w - 2;

            //     if (pontosP1 == 10)
            //         perdeu = 1;
            // }
        }
    }
}

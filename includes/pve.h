void logic_PVE() {
switch (flag) {
    case 1:
        if (player1Y < 1) { flag = 2; break; }
        else { player1Y--; break; }
    case 2:
        if (player1Y >= w - 7) { flag = 1; break; }
        else { player1Y++; break; }
    default: break;
    }

    for (i = 1; i <= w;i++){
        if (i <= 5) {
            quadra[player1Y + i][1] = '|';
            if (bolaY <= player1Y &&
                bolaY >= player1Y &&
                bolaX <= player1Y &&
                bolaX <= i)
                velocidadeX *= -1;
        }
    }
    for (i = 1; i <= w;i++) {
        if (i <= 5) {
            quadra[player1Y + i][h - 2] = '|';
            if (bolaY <= player1Y &&
                bolaY >= player1Y &&
                bolaX <= player1Y &&
                bolaX <= i)
                velocidadeX *= -1;
        }
    }
}
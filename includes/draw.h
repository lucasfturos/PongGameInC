int menu() {
    int opc, c;
    system("cls || clear");
    printf("\n\t\tGAME PONG\n");
    printf("\n----------------------------------------\n");
    printf("\n------------------ MENU ----------------\n");
    printf("\n----------- Escolha uma opcao ----------\n");
    printf("\n------------ 1 SinglePlayer ------------\n");
    printf("\n------------ 2 Player vs PC ------------\n");
    printf("\n-- Clique em qualquer tecla para sair --\n");
    printf("\n----------------------------------------\n");
    printf("\nEscolha uma opção:");
    scanf("%d", &opc);
    while ((c = getchar()) != '\n' && c != EOF) {} // Limpeza de buffer
    system("cls || clear");
    return opc;
}

void draw(int opc) {
    system("clear || cls");
    printf("\nPong Game\n\n");
    for (i = 0; i < w; i++) {
        for (j = 0; j < h; j++)
            printf("%c", quadra[i][j]);
        printf("\n");
    }
    printf("\n\nPontos Jogador: %d", pontosP1);
    if (opc == 1)
        printf("\nPontos da Bola: %d", pontosP2);
    else
        printf("\nPontos do Computador: %d", pontosP2);
    printf("\n\nClique em X para Sair\n");
}

void clean() {
    for (i = 0; i < w; i++) {
        for (j = 0; j < h; j++) {
            if (i == 0 || i == w - 1 || j == 0 || j == h - 1)
                quadra[i][j] = '#';
            else quadra[i][j] = ' ';
        }
    }
}

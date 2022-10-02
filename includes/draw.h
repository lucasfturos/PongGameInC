// Text ASCII generator on link: http://patorjk.com/software/taag/#p=display&f=ANSI%20Regular&t=Pong%20Game%20In%20C

int menu() {
    int opc, c;
    system("cls || clear");
    printf("\n\n██████   ██████  ███    ██  ██████       ██████   █████  ███    ███ ███████     ██ ███    ██      ██████ \n");
    printf("██   ██ ██    ██ ████   ██ ██           ██       ██   ██ ████  ████ ██          ██ ████   ██     ██      \n");
    printf("██████  ██    ██ ██ ██  ██ ██   ███     ██   ███ ███████ ██ ████ ██ █████       ██ ██ ██  ██     ██      \n");
    printf("██      ██    ██ ██  ██ ██ ██    ██     ██    ██ ██   ██ ██  ██  ██ ██          ██ ██  ██ ██     ██      \n");
    printf("██       ██████  ██   ████  ██████       ██████  ██   ██ ██      ██ ███████     ██ ██   ████      ██████ \n");
    printf("\n\n");
    printf("\n\t\t\t\t                   MENU                 \n");
    printf("\n\t\t\t\t            Escolha uma opcao           \n");
    printf("\n\t\t\t\t             1 SinglePlayer             \n");
    printf("\n\t\t\t\t             2 Player vs PC             \n");
    printf("\n\t\t\t\t   Clique em qualquer tecla para sair   \n");
    printf("\n\t\t\t\t   Escolha uma opção:");
    scanf("%d", &opc);
    while ((c = getchar()) != '\n' && c != EOF) {} // Limpeza de buffer
    system("cls || clear");
    return opc;
}

void draw(int opc) {
    system("clear || cls");
    printf("\n\n██████   ██████  ███    ██  ██████    ██████   █████  ███    ███ ██████ \n");
    printf("██   ██ ██    ██ ████   ██ ██        ██       ██   ██ ████  ████ ██         \n");
    printf("██████  ██    ██ ██ ██  ██ ██   ███  ██   ███ ███████ ██ ████ ██ ████      \n");
    printf("██      ██    ██ ██  ██ ██ ██    ██  ██    ██ ██   ██ ██  ██  ██ ██         \n");
    printf("██       ██████  ██   ████  ██████    ██████  ██   ██ ██      ██ ██████     \n\n\n");
    for (i = 0; i < w; i++) {
        for (j = 0; j < h; j++)
            printf("%c", quadra[i][j]);
        printf("\n");
    }
    printf("\n\nPontos Jogador: %d", pontosP1);
    if (opc == 1)
        printf("\t\t\t   Pontos da Bola: %d", pontosP2);
    else
        printf("\t\t     Pontos do Computador: %d", pontosP2);
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

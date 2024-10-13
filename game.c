#include <stdio.h>

typedef struct {
    char vet[15];
} Nome;

typedef struct {
    int dia;
    int mes;
    int ano;
} RegData;

typedef struct {
    Nome nickname;
    int pontuacao;
    RegData data;
} Partida;

typedef struct {
    Partida vet[20];
} Placar;


int main() {

    int opcao = 0;

    do {
    printf("1. Jogar\n"
           "2. Jogador ranqueado com a maior pontuação.\n"
           "3. Jogador ranqueado com a menor pontuação.\n"
           "4. Mostrar os dados de um jogador, se ranqueado, a partir do seu código.\n"
           "5. Mostrar o número de jogadores ranqueados.\n"
           "6. Mostrar o ranking dos jogadores (TOP 20).\n"
           "7. Remover um jogador do ranking, a partir do seu código (e senha do administrador).\n"
           "8. Fim.\n");

    printf("\n\t----- Digite a opção -----\n");
    scanf("%i", &opcao);

    switch(opcao) {
        case 1: 
            
        break;
           
        case 2: 

        break;

        case 3: 

        break;

        case 4: 

        break;

        case 5: 

        break;

        case 6: 

        break;

        case 7: 

        break;
    }
    } while(opcao < 8);
} 
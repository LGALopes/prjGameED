#include <stdio.h>
#include <string.h>

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

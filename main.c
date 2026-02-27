#include <stdio.h>
#include <string.h>

#define TAM 8

// Estrutura representando uma peça
typedef struct {
    char nome[20];
    int linha;
    int coluna;
} Peca;

// Função para mover peça
void moverPeca(Peca *p, int novaLinha, int novaColuna) {
    p->linha = novaLinha;
    p->coluna = novaColuna;
}

// Função para exibir dados da peça
void mostrarPeca(Peca p) {
    printf("Peça: %s\n", p.nome);
    printf("Posição: Linha %d, Coluna %d\n", p.linha, p.coluna);
}

// Função que valida se posição está dentro do tabuleiro
int posicaoValida(int linha, int coluna) {
    if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM) {
        return 1;
    }
    return 0;
}

int main() {

    Peca torre;

    strcpy(torre.nome, "Torre");
    torre.linha = 0;
    torre.coluna = 0;

    printf("=== Estado Inicial ===\n");
    mostrarPeca(torre);

    printf("\nMovendo peça...\n");

    if (posicaoValida(0, 5)) {
        moverPeca(&torre, 0, 5);
    } else {
        printf("Movimento inválido!\n");
    }

    printf("\n=== Estado Final ===\n");
    mostrarPeca(torre);

    return 0;

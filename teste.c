#include <stdio.h>

void movimento(const char* tipo, int casas){
    for (int i = 1; i <= casas; i++)
    {
        printf("%s\n", tipo);
    }
}

void bispo (int numeroCasas){
    for (int i = 1; i <= numeroCasas; i++)
    {
        printf("\nCima");
        for (int j = 1; j <= 1; j++)
        {
            printf(" Direita\n");
        }
        
    }
    
}



int main() {
    // Movimentação da Torre - 5 casas para a direita usando FOR
    int casasTorre = 5;
    const char* movi = "Direita";
    printf("Movimento da Torre:\n");
    movimento(movi, casasTorre);

    // Movimentação do Bispo - 5 casas na diagonal para cima e à direita usando WHILE
    printf("Movimento do Bispo");
    int casasBispo = 5;
    bispo(casasBispo);


    // Movimentação da Rainha - 8 casas para a esquerda usando DO-WHILE
    int casasRainha = 8;
    movi = "Esquerda";
    printf("\nMovimento da Rainha:\n");
    movimento(movi, casasRainha);

    //Movimento do Cavalo usando Loops aninhados
    printf("\nMovimento do Cavalo:\n");

       //Tamanho máximo do i define quantas vezes o movimento foi executado

        for (int i = 1,  j = 1; j<=3 ; i++,j++) {
            if (j <= 2) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }
            
        } 
    

    return 0;
}

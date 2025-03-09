#include <stdio.h>

int main() {
   int t , b = 0, r = 0, c = 0; // variavel de cada peça.
    int mt, mb, mr, mc; // variavel para armazenar entrada de movimentação.

    printf("Digite quantas casas a Torre irá andar para cima: \n");
    scanf(" %d", &mt);
   // Implementação de Movimentação da Torre para a direita. com FOR.
    printf("Torre movendo-se para: \n");
   for ( t = 0; t < mt; t++)
   {
    printf("Direita.\n");
   }
        printf("\n");

        printf("Digite quantas casas o BISPO irá andar na diagonal: \n");
        scanf(" %d", &mb);
   // Implementação de Movimentação do Bispo na diagonal. com WHILE
   printf("BISPO movendo-se em diagonal para: \n");
    while (b < mb)
   {
    printf("CimaDireita.\n");
    b ++;
   }
        printf("\n");

        printf("Digite quantas casas a Rainha irá andar para a esquerda: \n");
        scanf(" %d", &mr);
    // Implementação de Movimentação da Rainha para esquerda. com DO WHILE
    printf("Rainha movendo-se para: \n");  
    do
   {
        printf("Esquerda.\n");
        r ++;
   } while (r < mr);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Digite quantas casas o cavalo irá andar em L: \n");
    scanf(" %d", &mc);
   // Implementação de Movimentação do Cavalo para a direita e cima com movimento em L. com FOR && WHILE
    printf("Cavalo movendo-se para: \n");
    for ( t = 0; t < mc; t++)
    {
     printf("Direita.\n");
    } while (c < mc)
        {
                printf("CIMA.\n");
                c++;
         }
        printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
   
    return 0;
}

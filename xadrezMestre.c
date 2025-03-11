#include <stdio.h>

void torre(int tr){
    printf("Torre movendo-se para: \n");
   for ( tr = 0; tr < 5; tr++)
   {
    printf("Direita.\n");
   }
}
void bispo(int bt){
    printf("BISPO movendo-se em diagonal para: \n");
    for ( bt = 0; bt < 5; bt++)
    {
     printf("Cima.\n");
        int b = 0;
       while (b < 1)
        {
                printf("Direita.\n");
                b++;
         }
    }
}
void Rainha(int ra){
    printf("Rainha movendo-se para: \n");  
    do
   {
        printf("Esquerda.\n");
        ra ++;
   } while (ra < 8);
}

int main() {
   int t , b = 0, r = 0, c = 0; // variavel de cada peça.
    int mt, mb, mr, mc; // variavel para armazenar entrada de movimentação.

   // Implementação de Movimentação da Torre para a direita. com Recursivo.
        torre(t);

        printf("\n");
   // Implementação de Movimentação do Bispo na diagonal. com Recursivo.
        bispo(b);

        printf("\n");
    // Implementação de Movimentação da Rainha para esquerda. com Recursivo.
        Rainha(r);

        printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
   // Implementação de Movimentação do Cavalo para a direita e cima com movimento em L. com FOR && WHILE
    printf("Cavalo movendo-se para: \n");
    for ( t = 0; t < 2; t++)
    {
     printf("Cima.\n");
    } while (c < 1)
        {
                printf("Direita.\n");
                c++;
         }
        printf("\n");

    return 0;
}

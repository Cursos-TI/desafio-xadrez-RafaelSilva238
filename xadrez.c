#include <stdio.h>
#include <stdio.h>

int main() {
  
    int bispo = 0, rainha = 8;

    // Mover a torre 5 casas para a direita
    for (int i = 0; i < 5; i++)
    {
        printf ("Direita\n"); //Imprime aa direção do movimento da torre
    }
    
    // Movimenta do bispo 5 casas na diagnoal para cima e direita 

    while ( bispo < 5)
    {
        printf ("Cima, Direita\n"); // imprime a direção do bispo na diagnonal
        bispo ++;
    }
    
     //Move a rainha 8 casas para esquerda

     printf ("Rainha na casa 3 H \n");

    do
    {
           
        printf ("rainha move para esquerda \n"); // Apresenha a direção onde a rainha está se movimentando
        rainha --; // realiza decremento

    } while (rainha > 0); // Conta até a 8
    

    return 0;
}
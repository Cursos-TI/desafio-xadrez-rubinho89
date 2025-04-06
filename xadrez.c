#include <stdio.h>

void moverTorres(int casas){
    if(casas > 0){
        printf("Direita\n");
        moverTorres(casas - 1);
    }

}

void moverBisbo(int casas){
    if(casas > 0){
        printf("Cima, Direita\n");
        moverBisbo(casas - 1);
    }
}

void moverRainha(int casas){
    if(casas > 0){
        printf("esquerda\n");
        moverRainha( casas - 1);
    }
}


int main(){
    moverTorres(5);
    moverBisbo(5);
    moverRainha(8);

     // Movimento do Cavalo
     int movimentoCompleto = 3; // Por exemplo, 3 movimentos
     printf("Mover Cavalo:\n");
     while(movimentoCompleto--) {
         for(i = 0; i < 2; i++) {
             printf("Cima\n");
         }
         printf("Direita\n");
     }





    return 0




}
 
    

    

    


    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

 


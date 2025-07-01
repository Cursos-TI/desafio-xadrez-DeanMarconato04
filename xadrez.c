#include <stdio.h>

    int main (){

        int Torre, Bispo, Rainha, Cavalo;

            //Inicio do xadrez
            printf ("Bem vindo ao xadrez!\n");

                //Peças

                printf ("Torre\n");

                    Torre = 1;

                    do { 
                        printf ("Direita\n"); //Imprime a direita na posição (Inserido 1) ao iniciar o Loop
                        Torre++; //Incrementa o valor de Torre a cada reinicio do Loop.

                    } while (Torre <= 5 ); //Enquanto Torre for menor ou igual a 5, o Loop reinicia incrementando seu valor. Para ao atingir 5.

                
                printf ("Bispo\n");
        
                    for (Bispo = 1; Bispo <= 5; Bispo++){ //Definido que a peça Bispo se encontra na posição 1. Condição indica que Bispo movimentará até atingir 5
                        printf ("Cima\n");
                        printf ("Direita\n"); /*O loop inicia com o Bispo na posição = 1, imprime Cima e Direita, e por fim incrementa, atualizando sua posição,
                                                considerando agora = 2. Segue até atingir a posição 5*/
                    }

                
                printf ("Rainha\n");
                    
                    Rainha = 1; //Define a posição da Rainha para = 1
            
                    while (Rainha <= 8) //Enquanto a Rainha ocupar uma posição igual ou menor a 8, o Loop roda incrementando em 1, sua posição
                    {
                        printf ("Esquerda\n"); //Imprime a direção do movimento
                        
                        Rainha++; //incremento da posição da rainha
                    }


            printf ("\n");

                printf ("Cavalo\n");
                    
                    for (Cavalo = 1; Cavalo <= 2; Cavalo++) //Inicializa Cavalo = 1 e inicia o Loop definindo o limite em 2. Ao reiniciar o Loop, incrementa variavel
                    {
                        printf ("Baixo\n"); //Imprime a posição do Cavalo

                        while (Cavalo == 2) //Cavalo = 1 nao ativa a condição. Reinicia o loop. Cavalo = 2 ativa
                        {
                            printf ("Esquerda\n"); //Imprime o movimento do cavalo
                            Cavalo++; //Incrementa para Cavalo = 3 e encerra o Loop For, pois "Cavalo <= 2".
                        }
                    }

        return 0;

    }
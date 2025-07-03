#include <stdio.h>

    void movTorre(int torre) { //Recursivo para a peça Torre, com base definida para, ao decrementar, o loop parar quando casa > 0 deixar de ser verdadeiro;
        if (torre > 0) {
            printf ("Direita\n");
            movTorre (torre - 1);
        }
    }
    void movBispo(int bispo) {
        int i = 0; //Define o valor da inteira i
        while (i < bispo) {
            printf("Cima\n");

        int j = 0;   //
        while (j < 1) {
            printf("Esquerda\n");
            j++;
        }

        i++;
        }
    }


    void movRainha (int rainha) { //Define que SE o valor de rainha for  maior que 0, o loop fará impressa até que o valor decremente para 1. Após atingir 0, ele encerra
                if (rainha > 0) {
                    printf ("Esquerda\n");
                    movRainha (rainha - 1);
                }
            }


    int main (){

        int Cavalo;

        //Inicio do xadrez
        printf ("Bem vindo ao xadrez!\n");

            //Peças

            printf ("Torre\n");
                movTorre(5); //Recursividade = Puxa a função Torre

        printf ("\n");

            printf ("Bispo\n");
                movBispo(5);  //Recursividade = Puxa a função Bispo

        printf ("\n");

            printf ("Rainha\n");
                movRainha(8);  //Recursividade = Puxa a função Rainha
                    
        printf ("\n");

            printf ("Cavalo\n");
                    
                for (Cavalo = 1; Cavalo <= 2 ; Cavalo++) //Inicializa Cavalo = 1 e inicia o Loop definindo o limite em 2. Ao reiniciar o Loop, incrementa variavel
                {
                    printf ("Cima\n"); //Imprime a posição do Cavalo

                    while (Cavalo == 2) //Cavalo = 1 nao ativa a condição. Reinicia o loop. Cavalo = 2 ativa
                    {
                            printf ("Direita\n"); //Imprime o movimento do cavalo
                            Cavalo++; //Incrementa para Cavalo = 3 e encerra o Loop For, pois "Cavalo <= 2".
                    }
                }

        return 0;

    }
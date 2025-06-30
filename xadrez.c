#include <stdio.h>

int main (){

        int Torre = 0, Bispo, Rainha = 0, peca; // T= Torre / B= Bispo / R=Rainha
        
        //Menu do jogo
        printf ("Bem vindo ao xadrez!\n");
        printf ("Para começar, escolha a peça que deverá ser movida:\n"); //Aplicado Menu no jogo para leitura e escolha da peça.
        printf ("1. Torre.\n 2. Bispo.\n 3. Rainha\n"); //As peças para movimentar
        scanf ("%d", &peca); //Inserção da opão a ser usada np Switch
        
        switch (peca)
        {
        case 1:
            printf ("Torre\n");
            do { 
                printf ("Moveu %d casas para a direita.\n", Torre);
                Torre++;
            } while (Torre <= 5 );
            //Logica: Apresentação da movimentação da peça Torre em 5 casas para direita enquanto o loop estiver ativo.
            break;
        case 2:
            printf ("Bispo\n");
            for (Bispo = 0; Bispo <= 5; Bispo++){
                printf ("O Bispo se moveu %d casas para Cima-Direita.\n", Bispo);
            }
            //O Bispo se move na diagonal sendo impresso Cima-direita para casa representação do movimento de 5 casas.
            break;
        case 3:
            printf ("Rainha\n");
            
            while (Rainha <= 8)
            {
                printf ("Rainha andou %d casas para a esquerda!\n", Rainha);

                Rainha++; //incremento para limitar o Loop.
            }
            //Logica: Enquanto a Rainha se movimentar para a esquerda, a mensagem será exibida até atingir a oitava casa, imprimindo a posição.

            break;
        default:
            printf ("Opção inválida. Selecione uma peça.\n");
            break;
        }

    return 0;
}
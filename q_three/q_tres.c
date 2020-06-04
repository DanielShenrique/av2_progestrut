#include <stdio.h>
#include <stdlib.h>

//3)Leia uma matriz 5 x 5. Leia também um valor  X.
//O programa devera fazer uma busca desse valor na matriz e,
// ao final, escrever a localização (linha e coluna)
//ou uma mensagem de “não encontrado”.

int main()
{

    int matrix[5][5];
    int value;

    unsigned int i, j, find = 0;

    //ler todos os valores
    printf("Digite os valores para a matrx:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%i", &matrix[i][j]);
        }
    }

    system("cls");

    printf("Digite um numero que sera buscado na matriz:\n");
    scanf("%i", &value);

    //achar os valores
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (value == matrix[i][j])
            {
                printf("Valor encontrado.\n");
                printf("Linha: %i\n", i);
                printf("Coluna: %i\n", j);
                find = 1;
            }
        }
    }

    //se não achou ele manda a mensagem valor não encontrado
    if(find  <= 0){
        printf("Valor nao encontrado\n");
    }

    system("pause");
    return 0;
}
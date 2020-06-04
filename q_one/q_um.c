#include <stdio.h>
#include <stdlib.h>

//1) Leia 10 números inteiros e armazene em um vetor v.
//Crie dois novos vetores v1 e v2.
//Copie os valores  ımpares de v para v1,
//e os valores pares de v para v2 que terão seus tamanhos modificados dinamicamente.
//No final escreva os elementos UTILIZADOS de v1 e v2.

int main()
{

    int v[10];
    int *v1 = NULL, *v2 = NULL;
    int *new_v1, *new_v2;

    int value;
    unsigned int i, size_v1 = 0, size_v2 = 0;

    for (i = 0; i < 10; i++)
    {
        //adicionar numeros ao vetor de inteiro v
        printf("digite um valor:");
        scanf("%i", &value);
        v[i] = value;

        //adicionar os numeros aos vetores v1 e v2, sendo v1 para impar e v2 para par
        if ((value % 2) != 0)
        {
            size_v1++;
            new_v1 = (int *)realloc(v1, size_v1 * sizeof(int));
            if (new_v1 != NULL)
            {
                v1 = new_v1;
                v1[size_v1 - 1] = v[i];
            }
            else
            {
                free(v1);
                printf("Erro ao realocar a memoria\n");
                return 0;
            }
        }
        else
        {
            size_v2++;
            new_v2 = (int *)realloc(v2, size_v2 * sizeof(int));
            if (new_v2 != NULL)
            {
                v2 = new_v2;
                v2[size_v2 - 1] = v[i];
            }
            else
            {
                free(v2);
                printf("Erro ao realocar a memoria\n");
                return 0;
            }
        }
    }

    system("cls");

    printf("valores de v1:\n");
    for(i = 0; i < size_v1; i++){
        printf("%i\n", v1[i]);
    }

    printf("valores de v2:\n");
        for(i = 0; i < size_v2; i++){
        printf("%i\n", v2[i]);
    }

    free(v1);
    free(v2);

    system("pause");
    return 0;
}
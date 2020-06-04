#include <stdio.h>
#include <stdlib.h>

//2)Faça um programa para ler 10 números DIFERENTES
//a serem armazenados em um vetor.
//Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos,
//˜ sendo que caso o usuário digite um número que já foi digitado anteriormente,
//o programa deverá pedir para ele digitar outro número.
//Note que cada valor digitado pelo usuário deve ser pesquisado no vetor,
//verificando se ele existe entre os números que já foram  fornecidos.
// Exibir na tela o vetor final que foi digitado.

int main()
{

    float v[10], val;

    unsigned int i, j, count = 0;

    for (i = 0; i < 10; i++)
    {

        //digitar um valor no vetor
        printf("digite um valor:\n");
        scanf("%f", &val);

        if (i == 0)
        {
            v[i] = val;
        }
        else
        {

            //comparar os valores no vetor, e se tiver um valor ja colocado no vetor
            //ele pede para colocar um valor diferente, que não tinha antes, no vetor.
            for (j = 0; j < i; j++)
            {
                if (val != v[j])
                {
                    v[i] = val;
                }
                else
                {

                    do
                    {
                        printf("o valor ja foi posto, por favor tente outro valor:\n");
                        scanf("%f", &val);
                        fflush(stdin);
                    } while (val == v[j]);

                    v[i] = val;
                }
            }
        }
    }

    system("cls");

    //imprimir o vetor
    printf("numeros do vetor:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.1f \n", v[i]);
    }

    system("pause");
    return 0;
}
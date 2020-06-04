#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//4)Faça um programa que modifique as vogais de uma frase.
//O programa deve ler uma frase (max. 100 caracteres) e armazená-la num vetor.
//Imprimir a frase lida trocando as vogais,
//isto é, trocar 'a' pelo 'u', 'e' pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'.
//Usar uma função void (procedimento) para realizar a troca
//e uma função para realizar a impressão da frase trocada.
//A função deve ter como parâmetro um ponteiro char referente ao vetor.
//Dica: Use a função gets() da biblioteca string.h para realizar a leitura da frase.
//Use o switch para realizar as trocas. Só considere as letras minúsculas.

void ChangePhrase(char *phrase_to_change);
void ShowPhrase(char *phrase_to_show);

int main()
{
    char phrase[100];
    char *pointer_phrase;
    unsigned short int i;

    //escrever uma frase com o tamanho do vetor
    printf("Digite a frase:\n");
    fgets(phrase, sizeof(phrase) / sizeof(phrase[0]), stdin);

    pointer_phrase = phrase;

    //mudar as vogais da frase e imprimir ela
    ChangePhrase(pointer_phrase);
    ShowPhrase(pointer_phrase);

    system("pause");
    return 0;
}

//função que muda as vogais da frase
void ChangePhrase(char *phrase_to_change)
{
    unsigned short int i;

    for (i = 0; i <strlen(phrase_to_change); i++)
    {
        switch (phrase_to_change[i])
        {
        case 'a':
            phrase_to_change[i] = 'u';
            break;

        case 'e':
            phrase_to_change[i] = 'o';
            break;

        case 'i':
            phrase_to_change[i] = 'u';
            break;

        case 'o':
            phrase_to_change[i] = 'a';
            break;

        case 'u':
            phrase_to_change[i] = 'e';
            break;

        default:
            break;
        }
    }
    
}

//função que imprime a frase trocada
void ShowPhrase(char *phrase_to_show){

    printf("%s", phrase_to_show);

}

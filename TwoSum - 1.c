#include <stdio.h>
#include <locale.h>

int SumTwo(int lista[], int alvo);

int main (){
    setlocale(LC_ALL,"Portuguese");

    int lista[5] = {1,2,3,4,5};
    int alvo = 0;

    printf("Qual o alvo:");
    scanf("%i",&alvo);

    SumTwo(lista,alvo);

    return 0;
}

int SumTwo(int lista[], int alvo){
    if (lista == NULL)
    {
        return 0;
    }
    
    for (int i = 0, j = 1; i < 5 && j < 5; i++, j++)
    {
        if (lista[i] + lista[j] == alvo)
        {
            return printf("[%i,%i]\n",i,j);
        }
    }
    return 0;
}
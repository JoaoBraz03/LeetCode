#include <stdio.h>
#include <locale.h>

float Pow(int base, int expoente);

int main (){
    setlocale(LC_ALL,"Portuguese");
    float base = 7;
    int expoente = 4;
    Pow(base,expoente);
}

float Pow(int base, int expoente){

    if (expoente == 0)
    {
        return 1;
    }
    else if (expoente > 0)
    {
        for (int i = 1; i < expoente ; i++)
        {
            base = base * i;
        }
        return base;
    }
    else{
        for (int i = expoente; i < 0; i++)
        {
            base = base * i;
        }
        return base;
    }
    
}
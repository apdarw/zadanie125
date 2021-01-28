#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int objetosc_prostopadl(int a, int b, int H)
{
    int V;
    V = a * b * H;

    return V;
}

int objetosc_ostroslup(int a, int b, int H)
{
    int V;
    V = (a * a * H) / 3;

    return V;
}

int main(void)
{
    int a, b, H, V1, V2;

    printf("Podaj kolejno w wierszach dlugosc podstawy, szerokosc podstawy oraz wysokosc figury: \n");
    scanf("%d %d %d", &a, &b, &H);

    if (a <= 0 || b <= 0 || H <= 0){
        printf("Podano zle wartosci!!");

    } else {
        V1 = objetosc_prostopadl(a, b, H);
        V2 = objetosc_ostroslup(a, b, H);

        printf("Objetosc prostopadloscianu wynosi: %d \n", V1);
        printf("Objetosc ostroslupa wynosi: %d \n", V2);
    }
return 0;
}

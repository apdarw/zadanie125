#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int objetosc(int a, int b, int H)
{
    int objetosc;
    objetosc = a * b * H;

    return objetosc;
}

int main(void)
{
    int a, b, H, V;

    printf("Podaj dlugosc boku a, szerokosc boku b oraz wysokosc H: \n");
    scanf("%d %d %d", &a, &b, &H);

    if (a <= 0 || b <= 0 || H <= 0){
        printf("Podano zle wartosci!!");

    } else {
        V = objetosc(a, b, H);
        printf("Objetosc prostopadloscianu wynosi: %d \n", V);
    }
return 0;
}

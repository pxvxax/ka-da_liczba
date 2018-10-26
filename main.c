#include <stdio.h>

int main() {
    int a;
    int licznik_petli=0;


    printf("Podaj a: "); scanf("%d", &a);
    if (!(a % 2)) --a;

    for (; a > 0; a -= 2){
        licznik_petli++;

        if (!(a % 3)) continue;
        if (!(a % 5)) continue;
        if (!(a % 7)) continue;
        printf("%d ", a);


    }



    printf("\n");
    printf("liczba pętli wyniosła : %d\n", licznik_petli);


    return 0;
}
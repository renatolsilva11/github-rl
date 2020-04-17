#include<stdio.h>

int main(void) {
    int n, s = 0, cont = 0;

    printf("DIGITE O VALOR DE N\n");
    scanf("%d", &n);

    while (cont <= 3) {
        cont = cont + 1;
        if (s == 0) {
            s = 10;
        }
        s = s + n;
    }

    
    printf("O VALOR FINAL DE S É : %d\n", s);
}
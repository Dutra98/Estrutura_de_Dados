#include <stdio.h>
#include <locale.h>

int potencia(int x, int y) {
    if (y == 0)
        return 1;
    else
        return x * potencia(x, y - 1);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int b = 2, e = 31;
    printf("%d elevado a %d é: %d\n", b, e, potencia(b, e));

    return 0;
}

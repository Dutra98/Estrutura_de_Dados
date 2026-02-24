#include <stdio.h>
#include <locale.h>

int fibonacci(int n) {
    if (n < 2) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n = 10;
    printf("O termo %d da sequencia de Fibonacci e: %d\n", n, fibonacci(n));

    return 0;
}

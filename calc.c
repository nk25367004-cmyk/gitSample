#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div_safe(int a, int b, int* ok) {
    if (b == 0) { *ok = 0; return 0; }
    *ok = 1; return a / b;
}

int main(void) {
    int a, b;
    printf("２つの整数を入力してください: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("入力ミス\n");
        return 1;
    }

    printf("合計: %d\n", add(a, b));
    printf("差分: %d\n", sub(a, b));
    printf("積　: %d\n", mul(a, b));

    int ok = 0;
    int q = div_safe(a, b, &ok);
    if (ok) printf("商　: %d\n", q);
    else    printf("計算不可: undefined (division by zero)\n");

    return 0;
}

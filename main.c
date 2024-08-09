#include <stdio.h>

int main() {
    int n, x = 0;
    char op;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c", &op);
        if (op == '+') {
            x++;
        } else if (op == '-') {
            x--;
        }
    }

    printf("%d\n", x);

    return 0;
}

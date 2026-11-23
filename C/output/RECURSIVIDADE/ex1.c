#include <stdio.h>

int sqfb(int num) {
    if (num == 0) {
        return 0;
    }
    if (num == 1) {
        return 1;
    }
    return sqfb(num - 1) + sqfb(num - 2);
}

int main() {
    int n = 6;

    for (int i = 0; i <= n; i++) {
        printf("%d ", sqfb(i));
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int numbers[] = {123, 4567, 89, 0, 12345678};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("Szokozokkel kitoltve (jobbra igazitva):\n");
    for (int i = 0; i < length; i++) {
        printf("%8d\n", numbers[i]);
    }

    printf("\nNullakkal kitoltve (jobbra igazitva):\n");
    for (int i = 0; i < length; i++) {
        printf("%08d\n", numbers[i]);
    }

    return 0;
}

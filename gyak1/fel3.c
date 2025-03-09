#include <stdio.h>
#include <windows.h>

int main() {
    int numbers[] = {123, 4567, 89, 0, 12345678};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("Szokozokkel kitoltve (jobbra igazitva):\n");
    for (int i = 0; i < length; i++) {
        printf("%8d\n", numbers[i]);
        Sleep(1000);
    }

    printf("\nNullakkal kitoltve (jobbra igazitva):\n");
    for (int i = 0; i < length; i++) {
        printf("%08d\n", numbers[i]);
        Sleep(1000);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main() {
    srand(time(NULL)); 

    int random_int = rand() % (1001 - 500) + 500;
    printf("Veletlen egesz szam: %d\n", random_int);

    double random_float = 500 + ((double)rand() / RAND_MAX) * (1000 - 500);
    printf("Veletlen lebegopontos szam: %.2f\n", random_float);

    return 0;
}

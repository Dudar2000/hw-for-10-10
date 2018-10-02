#include <stdio.h>;

float tablou[100];
int n, min;

void main () {
    printf("n: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
        scanf("%f", &tablou[i]);

    Min ();

    printf("%i", min);
    printf(" %i\n", Count());
}

void Min () {
    min = tablou[1];

    for (int i = 2; i <= n; i++)
        if (min > tablou[i])
            min = tablou[i];
}

int Count () {
    int count = 0;

    for (int i = 1; i <= n; i++)
        if (tablou[i] == min)
            count++;

    return count;
}

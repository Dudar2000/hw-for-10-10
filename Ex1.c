#include <stdio.h>;

float tablou[100];
int n, max;

void main () {
    printf("n: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
        scanf("%f", &tablou[i]);

    Max ();

    printf("%i", max);
    printf(" %i\n", Count());
}

void Max () {
    max = tablou[1];

    for (int i = 2; i <= n; i++)
        if (max < tablou[i])
            max = tablou[i];
}

int Count () {
    int count = 0;

    for (int i = 1; i <= n; i++)
        if (tablou[i] == max)
            count++;

    return count;
}

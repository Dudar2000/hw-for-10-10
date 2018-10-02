#include <stdio.h>;

int array[100];
int n, negIndex, sum;

void main () {
    printf("n: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
        scanf("%i", &array[i]);

    negIndex = SearchForNegative();
    Sum ();
    printf("%i\n",  sum);
}

int SearchForNegative () {
    for (int i = 1; i <= n; i++)
        if (array[i] < 0)
            return i;
}

void Sum () {
    for (int i = negIndex + 1; i <= n; i++)
        sum += array[i];
}

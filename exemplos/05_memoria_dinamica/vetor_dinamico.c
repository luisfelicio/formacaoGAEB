#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Quantos números quer introduzir? ");
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Números introduzidos:\\n");
    for (int i = 0; i < n; i++) printf("%d ", v[i]);

    free(v);
    return 0;
}

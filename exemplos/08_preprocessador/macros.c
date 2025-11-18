#include <stdio.h>

#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))

int main() {
    float raio = 2.5;
    printf("Área do círculo: %.2f\n", AREA_CIRCULO(raio));
    return 0;
}

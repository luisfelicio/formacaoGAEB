#include <stdio.h>

struct Paciente {
    char nome[50];
    int idade;
    float glicemia;
};

int main() {
    struct Paciente p = {"Ana Silva", 30, 95.5};
    printf("Paciente: %s\nIdade: %d\nGlicemia: %.1f\n", p.nome, p.idade, p.glicemia);
    return 0;
}

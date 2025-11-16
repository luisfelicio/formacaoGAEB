#include <stdio.h>
#include "paciente.h"

void mostrar_paciente(Paciente p) {
    printf("Paciente: %s (%d anos) - Glicemia: %.1f\\n", p.nome, p.idade, p.glicemia);
}

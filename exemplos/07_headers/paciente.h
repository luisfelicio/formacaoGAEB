#ifndef PACIENTE_H
#define PACIENTE_H

typedef struct {
    char nome[50];
    int idade;
    float glicemia;
} Paciente;

void mostrar_paciente(Paciente p);

#endif

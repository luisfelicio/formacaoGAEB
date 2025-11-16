#ifndef PACIENTE_H
#define PACIENTE_H

typedef struct {
    char nome[50];
    int idade;
    float glicemia;
} Paciente;

// Funções a implementar
Paciente* criarPacientes(int n);
void preencherPacientes(Paciente* lista, int n);
void listarPacientes(Paciente* lista, int n);
void filtrarGlicemia(Paciente* lista, int n, float limite);
Paciente* copiarPacientes(Paciente* lista, int n);
void libertarPacientes(Paciente* lista);

#endif

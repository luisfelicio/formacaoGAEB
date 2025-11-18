#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "paciente.h"

/**
 * @brief Aloca memória para um vetor de Pacientes.
 * @param n número de pacientes
 * @return ponteiro para o vetor alocado
 */
Paciente* criarPacientes(int n) {
    // TODO: alocar memória com malloc
    // Dica: usar (Paciente*) malloc(n * sizeof(Paciente));
    return NULL;
}

/**
 * @brief Lê dados dos pacientes.
 */
void preencherPacientes(Paciente* lista, int n) {
    // TODO: usar scanf para preencher nome, idade e glicemia
}

/**
 * @brief Mostra a lista completa de pacientes.
 */
void listarPacientes(Paciente* lista, int n) {
    // TODO: imprimir cada paciente numa linha
}

/**
 * @brief Mostra apenas pacientes com glicemia acima de um limite.
 */
void filtrarGlicemia(Paciente* lista, int n, float limite) {
    // TODO: percorrer o vetor e imprimir apenas os que cumprem a condição
}

/**
 * @brief Cria uma cópia dinâmica da lista de pacientes.
 */
Paciente* copiarPacientes(Paciente* lista, int n) {
    // TODO: alocar nova memória e copiar os dados de cada paciente
    // Dica: usar strcpy para copiar strings
    return NULL;
}

/**
 * @brief Liberta a memória alocada para a lista.
 */
void libertarPacientes(Paciente* lista) {
    // TODO: usar free()
}

/**
 * @brief Aumenta a lista de pacientes usando realloc.
 * @param lista ponteiro atual
 * @param n ponteiro para o número atual de pacientes
 * @param extra número de pacientes adicionais
 * @return nova lista (pode mudar de endereço)
 */
Paciente* adicionarPacientes(Paciente* lista, int* n, int extra) {
    // TODO: realocar memória
    // Dica: lista = realloc(lista, (*n + extra) * sizeof(Paciente));

    // TODO: preencher apenas os novos pacientes
    // Ex: for (i = *n; i < *n + extra; i++) scanf(...)

    return lista;
}

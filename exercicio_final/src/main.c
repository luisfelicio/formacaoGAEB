#include <stdio.h>
#include <stdlib.h>
#include "paciente.h"

void mostrarMenu() {
    printf("\n===== MENU =====\n");
    printf("1. Criar lista de pacientes\n");
    printf("2. Preencher pacientes\n");
    printf("3. Listar pacientes\n");
    printf("4. Filtrar por glicemia\n");
    printf("5. Copiar lista de pacientes\n");
    printf("6. Libertar memória\n");
    printf("7. Adicionar mais pacientes (realloc)\n");
    printf("0. Sair\n");
    printf("Opcao: ");
}

int main() {
    Paciente* lista = NULL;
    Paciente* copia = NULL;
    int n = 0;  // número atual de pacientes
    int opcao;
    float limite;

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("Quantos pacientes deseja criar? ");
                scanf("%d", &n);
                lista = criarPacientes(n);
                if (lista != NULL) printf("Lista criada!\n");
                break;

            case 2:
                if (!lista) printf("Crie a lista primeiro!\n");
                else preencherPacientes(lista, n);
                break;

            case 3:
                if (!lista) printf("Crie a lista primeiro!\n");
                else listarPacientes(lista, n);
                break;

            case 4:
                if (!lista) printf("Crie a lista primeiro!\n");
                else {
                    printf("Limite de glicemia: ");
                    scanf("%f", &limite);
                    filtrarGlicemia(lista, n, limite);
                }
                break;

            case 5:
                if (!lista) printf("Crie a lista primeiro!\n");
                else copia = copiarPacientes(lista, n);
                break;

            case 6:
                if (lista) {
                    libertarPacientes(lista);
                    lista = NULL;
                }
                if (copia) {
                    libertarPacientes(copia);
                    copia = NULL;
                }
                n = 0;
                printf("Memória libertada.\n");
                break;

            case 7: {
                if (!lista) {
                    printf("Crie a lista primeiro!\n");
                    break;
                }

                int extra;
                printf("Quantos pacientes deseja adicionar? ");
                scanf("%d", &extra);

                lista = adicionarPacientes(lista, &n, extra);

                if (lista != NULL)
                    printf("Pacientes adicionados com sucesso!\n");
                else
                    printf("Erro ao realocar memória!\n");

                break;
            }

            case 0:
                printf("A sair...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}

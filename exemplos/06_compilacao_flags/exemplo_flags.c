#include <stdio.h>

/*
 * 🧩 Este programa serve para demonstrar o efeito das flags de compilação:
 *
 *  -Wall   → mostra todos os avisos (warnings)
 *  -Werror → transforma avisos em erros
 *  -g      → adiciona informações de debug (para usar com gdb / valgrind)
 *
 * Experimentos sugeridos:
 * 1️⃣  Compila SEM flags:             gcc exemplo_flags.c -o flags
 * 2️⃣  Compila COM avisos:            gcc exemplo_flags.c -Wall -o flags
 * 3️⃣  Compila COM avisos e erros:    gcc exemplo_flags.c -Wall -Werror -o flags
 * 4️⃣  Compila COM debug:             gcc exemplo_flags.c -Wall -Werror -g -o flags
 *
 * Observa o que o compilador te diz em cada caso 👀
 */

int soma(int a, int b) {
    int resultado;
    // ⚠️ Atenção: esta função tem um problema!
    // Se esquecermos de inicializar a variável, o compilador pode não avisar sem flags.
    resultado = a + b;
    return resultado;
}

int main() {
    int x;      // ⚠️ Variável NÃO inicializada
    int y = 5;

    // Aqui estamos a usar 'x' sem inicializar — erro clássico em C!
    int z = soma(x, y);

    printf("Resultado: %d\n", z);
    return 0;
}

/*
 * 💬 Explicação:
 *
 * - Quando compilas SEM flags:
 *     O programa provavelmente vai compilar e correr, mas imprime um valor aleatório.
 *
 * - Quando compilas com -Wall:
 *     Vais ver um aviso: "variable 'x' is used uninitialized".
 *
 * - Quando compilas com -Wall -Werror:
 *     O compilador vai recusar compilar — o aviso torna-se um erro.
 *
 * - Quando compilas com -g:
 *     O programa compila normalmente, mas agora podes usar:
 *        valgrind ./flags
 *     ou
 *        gdb ./flags
 *     para depurar e ver onde ocorrem problemas.
 */

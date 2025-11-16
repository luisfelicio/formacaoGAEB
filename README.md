# 🧠 Formação em C — Introdução Prática

Bem-vindo(a) ao repositório da **Formação em C**!  
Este material foi preparado para uma sessão prática e interativa de 2 horas, cobrindo os conceitos essenciais da linguagem **C** — desde o clássico `Hello World` até um mini-projeto modular com `structs`, `pointers` e `malloc`.

---

## 🎯 Objetivo
Proporcionar uma introdução sólida à linguagem C através de **exemplos curtos**, **explicações simples** e um **mini-projeto final**, que pode ser compilado e testado localmente por cada participante.

---

## 🧩 Conteúdos

| Tema | Tópicos | Ficheiros / Pasta |
|------|----------|-------------------|
| 1️⃣ Introdução ao C | Contexto, `Hello World`, compilação básica | `exemplos/01_hello_world/` |
| 2️⃣ Primitivas | `int`, `float`, `char`, `scanf`, `printf` | `exemplos/02_primitivas/` |
| 3️⃣ Structs | Criação e uso de `struct Paciente` | `exemplos/03_structs/` |
| 4️⃣ Apontadores | Endereços e passagem por referência | `exemplos/04_apontadores/` |
| 5️⃣ Memória Dinâmica | `malloc`, `free`, `stack vs heap` | `exemplos/05_memoria_dinamica/` |
| 6️⃣ Compilação | Flags úteis `-Wall`, `-Werror`, `-g` | `exemplos/06_compilacao_flags/` |
| 7️⃣ Modularização | `.h`, `.c` e `main.c` separados | `exemplos/07_headers/` |
| 8️⃣ Pré-processador | `#define`, `#include`, macros | `exemplos/08_preprocessador/` |
| 💡 Projeto Final | Sistema simples de pacientes | `exercicio_final/` |

---

## ⚙️ Configuração do Ambiente

Antes de começar, certifica-te de que tens o compilador **gcc** instalado.

### 🐧 Linux / macOS
```bash
sudo apt install build-essential   # ou brew install gcc
gcc --version

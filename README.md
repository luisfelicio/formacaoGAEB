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
```

### 🪟 Windows
Recomendado: usar **WSL** (Ubuntu) ou o compilador **MinGW**.  
Guia detalhado: [`setup/instalar_compilador.md`](setup/instalar_compilador.md)

---

## 🚀 Primeiros Passos

Clona o repositório:
```bash
git clone https://github.com/<teu-utilizador>/formacao-c.git
cd formacao-c
```

Testa o ambiente:
```bash
gcc setup/testar_ambiente.c -o testar && ./testar
```

Compila o primeiro exemplo:
```bash
cd exemplos/01_hello_world
gcc hello.c -o hello && ./hello
```

---

## 🧪 Mini-Projeto Final

Na pasta [`exercicio_final/`](exercicio_final/), encontrarás um pequeno **sistema de pacientes** que demonstra:
- Uso de `structs`;
- Vetores dinâmicos com `malloc`;
- Filtros por valores (ex: glicemia);
- Organização modular (`.h` + `.c`);
- `Makefile` para compilação automatizada.

Para compilar:
```bash
cd exercicio_final
make
./pacientes
```

---

## 💡 Dicas

- Usa `-Wall -Werror -g` para compilar com avisos e debug:
  ```bash
  gcc ficheiro.c -o programa -Wall -Werror -g
  ```
- Testa com `valgrind` para detetar memory leaks:
  ```bash
  valgrind ./programa
  ```

---

## 🧰 Recursos Extra

📄 [Slides de apoio](recursos/slides.pdf)  
📘 [Guia rápido de comandos C](recursos/guia_rapido_comandos.md)  
💬 [Explicação detalhada de cada tema](exemplos/)

---

## 👨‍💻 Autor

**Luís Felício**  
📍 Universidade do Minho  
💼 EPIC Júnior — Formação em C  
📅 2025

---

## 📜 Licença

Este repositório é distribuído sob a licença **MIT**, para que qualquer pessoa possa aprender, adaptar e reutilizar o conteúdo livremente.

---

> ✨ “O C é simples, mas exige respeito. Compreende a memória, e ela trabalhará a teu favor.”  
> — *Anónimo do gcc*

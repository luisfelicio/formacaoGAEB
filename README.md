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

Antes de começar, certifica-te de que tens o **Visual Studio Code** e o **compilador GCC** instalados.

---

### 🪟 Windows

1. **Instala o VS Code**  
   🔗 [https://code.visualstudio.com/](https://code.visualstudio.com/)

2. **Instala o compilador C (MinGW-w64)**  
   🔗 [https://winlibs.com/](https://winlibs.com/)  
   - Faz download da versão *UCRT 64-bit*  
   - Extrai em `C:\mingw64`  
   - Adiciona `C:\mingw64\bin` à variável de ambiente **PATH**

3. **Testa no terminal do VS Code:**
   ```bash
   gcc --version
   ```

4. (Opcional) Instala a extensão **C/C++** da Microsoft no VS Code para suporte a IntelliSense e debug.

---

### 🐧 Linux (Ubuntu/Debian/Fedora/etc.)

1. **Instala o compilador GCC e Make:**
   ```bash
   sudo apt update
   sudo apt install build-essential
   ```

2. **Instala o VS Code:**
   ```bash
   sudo snap install code --classic
   ```

3. **Verifica a instalação:**
   ```bash
   gcc --version
   code --version
   ```

Agora já podes abrir o projeto no VS Code e compilar o código normalmente.

---

## 🚀 Primeiros Passos

Clona o repositório:
```bash
git clone https://github.com/<teu-utilizador>/formacaoGAEB.git
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

# 🧪 Exercício Final — Sistema de Pacientes

Neste exercício vais pôr em prática tudo o que aprendeste:  
`structs`, `pointers`, `malloc`, `free` e modularização com headers.

---

## 🧠 Objetivo

Criar um pequeno sistema de gestão de pacientes:
- Guardar dados (nome, idade, glicemia);
- Filtrar pacientes por glicemia;
- Copiar listas de pacientes para uma nova estrutura;
- Libertar corretamente a memória.

---

## 🧩 Funções a implementar

- `criarPacientes(int n)` → aloca memória para um vetor de pacientes.  
- `preencherPacientes(Paciente* lista, int n)` → pede dados via `scanf`.  
- `listarPacientes(Paciente* lista, int n)` → imprime todos os pacientes.  
- `filtrarGlicemia(Paciente* lista, int n, float limite)` → mostra apenas pacientes acima do limite.  
- `copiarPacientes(Paciente* lista, int n)` → devolve uma cópia da lista original.  
- `libertarPacientes(Paciente* lista)` → liberta a memória alocada.

---

## ⚙️ Compilar e correr

```bash
make
./pacientes
```

---

## 👨‍💻 Autores

**Duarte Rodrigues e Luís Felício**  
📍 Universidade do Minho  
💼 EPIC Júnior — Formação em C  
📅 18 de novembro de 2025

---

## 📜 Licença

Este repositório é distribuído sob a licença **MIT**, para que qualquer pessoa possa aprender, adaptar e reutilizar o conteúdo livremente.

---

> ✨ “O C é simples, mas exige respeito. Compreende a memória, e ela trabalhará a teu favor.”  
> — *Anónimo do gcc*

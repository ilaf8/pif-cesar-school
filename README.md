# Programação Imperativa e Funcional (PIF) — CESAR School

Repositório com minhas atividades da disciplina de **Programação Imperativa e Funcional (PIF — 2026.2)** da **CESAR School**, ministrada pelo professor **Danilo Farias Soares da Silva**.

As listas seguem os capítulos do livro *Treinamento em Linguagem C*, de Victorine Viviane Mizrahi.

## Listas de exercícios

| Lista | Conteúdo | Códigos | Respostas escritas |
| --- | --- | --- | --- |
| Capítulo 1 | Conceitos básicos de C, estrutura de programas, variáveis, constantes, tipos e bibliotecas. | [Lista-Cap1](Lista-Cap1/) | [Respostas do Capítulo 1](Respostas%20em%20Escrito.md) |
| Capítulo 2 | Entrada de dados, operadores, conversão de tipos, incrementos e expressões aritméticas, relacionais e lógicas. | [Lista-Cap2](Lista-Cap2/) | [Respostas do Capítulo 2](Lista-Cap2/Respostas%20em%20Escrito.md) |
| Capítulo 3 | Estruturas de repetição, `break`, `continue`, escopo de variáveis, acumuladores, sequências numéricas, laços aninhados e números aleatórios. | [Lista-Cap3](Lista-Cap3/) | [Respostas do Capítulo 3](Lista-Cap3/respostas.md) |

## Organização dos arquivos

Cada lista tem sua própria pasta, com um arquivo `.c` para cada questão de código. Os programas são independentes e devem ser compilados separadamente.

- **Lista-Cap1:** códigos das questões do Capítulo 1 e arquivos de complemento. As respostas escritas estão no arquivo `Respostas em Escrito.md`, na raiz do repositório.
- **Lista-Cap2:** códigos das questões 2, 3 e 7 a 28, junto do arquivo `Respostas em Escrito.md` com as respostas escritas.
- **Lista-Cap3:** códigos das questões 7 a 28, junto do arquivo `respostas.md` com as respostas teóricas e a explicação da questão 7.

## Ferramentas utilizadas

- Linguagem C para os exercícios.
- GCC / MinGW para compilar os programas.
- VS Code para escrever e executar os códigos.
- Markdown para as respostas escritas e a documentação.

## Como compilar e executar

Para baixar o repositório:

```powershell
git clone https://github.com/ilaf8/pif-cesar-school.git
cd pif-cesar-school
```

Exemplo no Windows, usando a questão 7 da Lista 3:

```powershell
cd Lista-Cap3
gcc -std=c11 -Wall -Wextra Questao7.c -o Questao7.exe
.\Questao7.exe
```

Para executar outra questão, basta trocar `Questao7.c` pelo nome do arquivo desejado e ajustar o nome do executável. Nos programas que recebem valores reais, use ponto para separar as casas decimais, como `7.5`.

## Autor

[ilaf8](https://github.com/ilaf8) — CESAR School.

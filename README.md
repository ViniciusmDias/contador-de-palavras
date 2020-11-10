# Trabalho A.7 Programação Paralela

Alunos: Vinicius Dias e Arthur Mota

## Introdução

Nesta atividade, precisamos desenvolver duas versões para um programa que conta palavras em um texto.

Dado um texto e um conjunto de "palavras chave", foi criado um programa sequencial e um programa paralelo (utilizando OpenMP) para contabilizar o número de ocorrências de cada palavra.

Variamos o tamanho do texto e o número de threads, para fazer uma avaliação do speed-up e da eficiência do programa paralelo.

## Como executar o código

Temos dois códigos nesse projeto, a versão sequencial e a versão paralela com OpenMP.

### Código sequencial

Ir ao diretório do projeto pelo terminal e executar o seguinte comando para criar o programa:

```
gcc contadorDePalavras.c -o seq
```

Após isso, executar o seguinte comando para rodar o arquivo com o programa criado: 

```
./seq
```

### Código paralelo

Ir ao diretório do projeto pelo terminal e executar o seguinte comando para criar o programa:

```
gcc contadorDePalavras.c -fopenmp -o par
```

Após isso, executar o seguinte comando para rodar o arquivo com o programa criado: 

```
./par
```

Ir ao diretório do projeto pelo terminal e executar o seguinte comando para criar o programa:


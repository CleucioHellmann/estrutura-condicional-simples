#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#else
#endif

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    printf("*** Estrutura condicional simples Comando if ***\n");

    printf("Testa a condição lógica (True/False) e, caso ela seja verdadeira, executa o bloco de comandos.\n");

    char nome[15]; // declaração de uma variável do tipo string (vetor de char)
    int idade;

    printf("Digite seu nome: \n");
    scanf("%s", nome); // para ler uma string não é necessário o & antes da variável

    // Limpar o buffer do teclado antes de ler a próxima entrada
    while (getchar() != '\n');

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    // O comando if abaixo vai verificar se a idade digitada é maior ou igual a 18. Se sim, o algoritmo imprime a mensagem; caso contrário, encerra o programa.
    if (idade >= 18)
    {
        printf("Você já pode dirigir...\n");
    }

    printf("\n====================\n");

    printf("*** Outro exemplo: ***\n");

    char nomeFilha[10];
    int idadeFilha;
    int idadeParaNamorar;

    printf("Digite o nome da sua filha: \n");
    scanf("%s", nomeFilha);

    // Limpar o buffer do teclado antes de ler a próxima entrada
    while (getchar() != '\n');

    printf("Digite a idade da sua filha: \n");
    scanf("%d", &idadeFilha);

    printf("Digite com quantos anos ela poderá namorar: \n");
    scanf("%d", &idadeParaNamorar);

    if (idadeFilha <= idadeParaNamorar)
    {
        printf("A idade de %s é menor que %d: então ela ainda não pode namorar.\n", nomeFilha, idadeParaNamorar);
    }

    #ifdef _WIN32
    system("pause"); // Pausa apenas em sistemas Windows
    #endif

    return 0;
}

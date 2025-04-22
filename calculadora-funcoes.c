#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);

int main()
{
    int opcao;
    int num1, num2;
    float resultado;

    do
    {
        printf("\n--- Calculadora ---\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o primeiro número: ");
            scanf("%d", &num1);
            printf("Digite o segundo número: ");
            scanf("%d", &num2);
            resultado = somar(num1, num2);
            printf("Resultado: %d + %d = %.2f\n", num1, num2, resultado);
            break;
        case 2:
            printf("Digite o primeiro número: ");
            scanf("%d", &num1);
            printf("Digite o segundo número: ");
            scanf("%d", &num2);
            resultado = subtrair(num1, num2);
            printf("Resultado: %d - %d = %.2f\n", num1, num2, resultado);
            break;
        case 3:
            printf("Digite o primeiro número: ");
            scanf("%d", &num1);
            printf("Digite o segundo número: ");
            scanf("%d", &num2);
            resultado = multiplicar(num1, num2);
            printf("Resultado: %d * %d = %.2f\n", num1, num2, resultado);
            break;
        case 4:
            printf("Digite o primeiro número: ");
            scanf("%d", &num1);
            printf("Digite o segundo número: ");
            scanf("%d", &num2);
            resultado = dividir(num1, num2);
            if (resultado != -1)
            { // -1 indica erro na divisão por zero
                printf("Resultado: %d / %d = %.2f\n", num1, num2, resultado);
            }
            break;
        case 0:
            printf("Saindo da calculadora.\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

// Implementação das funções
int somar(int a, int b)
{
    return a + b;
}

int subtrair(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

float dividir(int a, int b)
{
    if (b == 0)
    {
        printf("Erro: Divisão por zero!\n");
        return -1; // Retorna um valor de erro
    }
    return (float)a / b;
}
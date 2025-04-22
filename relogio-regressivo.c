#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void contagemRegressiva(int inicio);

int main()
{
    int numero;

    printf("Digite o número para iniciar a contagem regressiva: ");
    scanf("%d", &numero);

    contagemRegressiva(numero);

    return 0;
}

void contagemRegressiva(int inicio)
{
    printf("Contagem regressiva iniciada!\n");
    for (int i = inicio; i >= 0; i--)
    {
        printf("%d...\n", i);
#ifdef _WIN32
        Sleep(1000);
#else
        sleep(1);
#endif
    }
    printf("Fim da contagem!\n");
}
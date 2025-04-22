#include <stdio.h>
#include <string.h>

float calcularMedia(float n1, float n2, float n3);
void exibirResultado(float media);
void boasVindas(char nome[]);

int main()
{
    char nome[50];
    float nota1, nota2, nota3, media;

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    boasVindas(nome);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = calcularMedia(nota1, nota2, nota3);
    exibirResultado(media);

    return 0;
}

float calcularMedia(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3.0;
}

void exibirResultado(float media)
{
    printf("Média: %.2f\n", media);
    if (media >= 7.0)
    {
        printf("Situação: Aprovado\n");
    }
    else if (media >= 5.0)
    {
        printf("Situação: Recuperação\n");
    }
    else
    {
        printf("Situação: Reprovado\n");
    }
}

void boasVindas(char nome[])
{
    printf("Olá, %s! Vamos calcular sua média.\n", nome);
}
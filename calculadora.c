#include <stdio.h>

int main(void)
{
    float x, y;
    char operacao;

    // Solicita o primeiro número da operação
    printf("Digite o primeiro número: ");
    scanf("%f", &x);

    // Solicita o operador
    printf("Escolha a operação (+, -, *, /): ");
    scanf(" %c", &operacao); // O espaço antes de %c é importante para limpar o cache

    // Solicita o segundo número
    printf("Digite o segundo número: ");
    scanf("%f", &y);

    // Lógica para realizar o cálculo
    if (operacao == '+')
    {
        printf("Resultado: %.2f\n", x + y);
    }
    else if (operacao == '-')
    {
        printf("Resultado: %.2f\n", x - y);
    }
    else if (operacao == '*')
    {
        printf("Resultado: %.2f\n", x * y);
    }
    else if (operacao == '/')
    {
        if (y != 0)
        {
            printf("Resultado: %.2f\n", x / y);
        }
        else
        {
            printf("Erro: Divisão por zero.\n");
        }
    }
    else
    {
        printf("Operação inválida.\n");
    }

    return 0;
}
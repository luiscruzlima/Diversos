#include <stdio.h>

/*função para mostar menu*/
int Menu()
{
    int opcao;
    printf("Escolha uma das seguintes opcoes\n");
    printf("1. Entrada de dados\n2. Valor total\n3.Valor por motorista\n3.1 Por data\n3.2 Por viatura\n");
    scanf("%d", &opcao);

    return opcao;
}

int main()
{
    int opcao;

    opcao = Menu();

    printf("Escolheu a opção %d", opcao);
}
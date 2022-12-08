#include <stdio.h>

/*função para mostar menu*/
int Menu()
{
    int opcao;
    do 
    {
        printf("Escolha uma das seguintes opcoes\n");
        printf("1. Entrada de dados\n2. Valor total\n3. Valor por motorista\n3.1 Por data\n3.2 Por viatura\n");
        scanf("%d", &opcao);
        if (opcao != 1 && opcao != 2 && opcao != 3)
        {
            printf("Esta opção não existe!\n");
        }
        
    } while (opcao != 1 && opcao != 2 && opcao != 3 );
    

    return opcao;
}

int main()
{
    int opcao;

    opcao = Menu();

    printf("Escolheu a opção %d\n", opcao);
}
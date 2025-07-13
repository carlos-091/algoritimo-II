#include <stdio.h>

int main()
{
    FILE *clientes = fopen("clientes.txt", "a");
    if (clientes == NULL)
    {
        printf("Erro ao abrir o arquivo de clientes.\n");
        return 1;
    }

    int cod_cli;
    char nome[100], endereco[100], fone[20];

    printf("Digite o código do cliente: ");
    scanf("%d", &cod_cli);
    getchar();

    printf("Digite o nome do cliente: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o endereço do cliente: ");
    fgets(endereco, sizeof(endereco), stdin);

    printf("Digite o telefone do cliente: ");
    fgets(fone, sizeof(fone), stdin);

    fprintf(clientes, "%d,%s%s%s", cod_cli, nome, endereco, fone);

    fclose(clientes);
    printf("Cliente cadastrado com sucesso.\n");

    return 0;
}

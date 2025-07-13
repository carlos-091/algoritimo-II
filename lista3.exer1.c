#include <stdio.h>

int main()
{
    FILE *clientes = fopen("clientes.txt", "w");
    FILE *recebimentos = fopen("recebimentos.txt", "w");

    if (clientes == NULL || recebimentos == NULL)
    {
        printf("Erro ao criar os arquivos.\n");
        return 1;
    }

    fprintf(clientes, "Cod_Cli,Nome,Endereco,Fone\n");
    fprintf(recebimentos, "Num_doc,Valor_doc,Data_Emissao,Data_Vencimento,Cod_Cli\n");

    fclose(clientes);
    fclose(recebimentos);

    printf("Arquivos criados com sucesso.\n");

    return 0;
}


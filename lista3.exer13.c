#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *estilistas, *roupas, *estacoes;
    int opcao;
    int cod, cod_estilista, cod_estacao, ano;
    char nome[50], descricao[100];
    float salario;

    while (1) {
        printf("1. Cadastrar esta��o\n");
        printf("2. Cadastrar estilista\n");
        printf("3. Cadastrar roupa\n");
        printf("4. Mostrar roupas de uma esta��o\n");
        printf("5. Sair\n");
        printf("Op��o: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            estacoes = fopen("estacoes.dat", "ab");
            printf("C�digo da esta��o: ");
            scanf("%d", &cod);
            printf("Nome da esta��o: ");
            scanf(" %[^\n]", nome);
            fwrite(&cod, sizeof(int), 1, estacoes);
            fwrite(nome, sizeof(char), 50, estacoes);
            fclose(estacoes);
        }

        else if (opcao == 2) {
            estilistas = fopen("estilistas.dat", "ab");
            printf("C�digo do estilista: ");
            scanf("%d", &cod);
            printf("Nome do estilista: ");
            scanf(" %[^\n]", nome);
            printf("Sal�rio: ");
            scanf("%f", &salario);
            fwrite(&cod, sizeof(int), 1, estilistas);
            fwrite(nome, sizeof(char), 50, estilistas);
            fwrite(&salario, sizeof(float), 1, estilistas);
            fclose(estilistas);
        }

        else if (opcao == 3) {
            roupas = fopen("roupas.dat", "ab");
            printf("C�digo da roupa: ");
            scanf("%d", &cod);
            printf("Descri��o: ");
            scanf(" %[^\n]", descricao);
            printf("C�digo do estilista: ");
            scanf("%d", &cod_estilista);
            printf("C�digo da esta��o: ");
            scanf("%d", &cod_estacao);
            printf("Ano: ");
            scanf("%d", &ano);
            fwrite(&cod, sizeof(int), 1, roupas);
            fwrite(descricao, sizeof(char), 100, roupas);
            fwrite(&cod_estilista, sizeof(int), 1, roupas);
            fwrite(&cod_estacao, sizeof(int), 1, roupas);
            fwrite(&ano, sizeof(int), 1, roupas);
            fclose(roupas);
        }

        else if (opcao == 4) {
            int busca_estacao;
            printf("Digite o c�digo da esta��o: ");
            scanf("%d", &busca_estacao);

            roupas = fopen("roupas.dat", "rb");
            estilistas = fopen("estilistas.dat", "rb");

            while (fread(&cod, sizeof(int), 1, roupas) == 1)
            {
                fread(descricao, sizeof(char), 100, roupas);
                fread(&cod_estilista, sizeof(int), 1, roupas);
                fread(&cod_estacao, sizeof(int), 1, roupas);
                fread(&ano, sizeof(int), 1, roupas);

                if (cod_estacao == busca_estacao)
                {
                    rewind(estilistas);
                    while (fread(&cod, sizeof(int), 1, estilistas) == 1)
                    {
                        fread(nome, sizeof(char), 50, estilistas);
                        fread(&salario, sizeof(float), 1, estilistas);
                        if (cod == cod_estilista)
                        {
                            printf("Roupa: %s | Ano: %d | Estilista: %s\n", descricao, ano, nome);
                            break;
                        }
                    }
                }
            }

            fclose(roupas);
            fclose(estilistas);
        }

        else if (opcao == 5) break;
    }

    return 0;
}

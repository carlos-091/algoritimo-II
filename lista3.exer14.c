#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arq;
    int opcao;
    int numero;
    float nota1, nota2;
    char nome[50];

    while (1)
    {
        printf("1. Criar\n2. Incluir\n3. Sair\nOpção: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            arq = fopen("notas.dat", "wb");
            if (arq == NULL) return 1;
            fclose(arq);
            printf("Arquivo criado com sucesso.\n");
        }

        else if (opcao == 2)
        {
            arq = fopen("notas.dat", "ab");
            if (arq == NULL) return 1;

            while (1)
            {
                printf("Número (0 para encerrar): ");
                scanf("%d", &numero);
                if (numero == 0) break;

                printf("Nome: ");
                scanf(" %[^\n]", nome);
                printf("Nota 1: ");
                scanf("%f", &nota1);
                printf("Nota 2: ");
                scanf("%f", &nota2);

                fwrite(&numero, sizeof(int), 1, arq);
                fwrite(nome, sizeof(char), 50, arq);
                fwrite(&nota1, sizeof(float), 1, arq);
                fwrite(&nota2, sizeof(float), 1, arq);
            }

            fclose(arq);

            arq = fopen("notas.dat", "rb");
            if (arq == NULL) return 1;

            printf("\n--- Registros Cadastrados ---\n");
            while (fread(&numero, sizeof(int), 1, arq) == 1)
            {
                fread(nome, sizeof(char), 50, arq);
                fread(&nota1, sizeof(float), 1, arq);
                fread(&nota2, sizeof(float), 1, arq);
                printf("Nº: %d | Nome: %s | Média: %.2f\n", numero, nome, (nota1 + nota2) / 2);
            }

            fclose(arq);
        }

        else if (opcao == 3) {
            break;
        }
    }

    return 0;
}

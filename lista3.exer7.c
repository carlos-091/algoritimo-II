#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int string_para_data(const char *data_str, struct tm *data_tm) {
    return sscanf(data_str, "%d/%d/%d",
                  &data_tm->tm_mday, &data_tm->tm_mon, &data_tm->tm_year) == 3;
}


int diferenca_dias(struct tm d1, struct tm d2) {
    d1.tm_hour = d2.tm_hour = 0;
    d1.tm_min = d2.tm_min = 0;
    d1.tm_sec = d2.tm_sec = 0;
    d1.tm_mon--; d2.tm_mon--;
    d1.tm_year -= 1900; d2.tm_year -= 1900;

    time_t t1 = mktime(&d1);
    time_t t2 = mktime(&d2);

    return (int)((t1 - t2) / (60 * 60 * 24));
}

// Função para buscar o nome do cliente pelo código
void buscar_nome_cliente(int cod_cli, char *nome_cliente) {
    FILE *f = fopen("clientes.txt", "r");
    char linha[256];
    int cod;
    *nome_cliente = '\0';

    if (!f) return;

    fgets(linha, sizeof(linha), f); // cabeçalho
    while (fgets(linha, sizeof(linha), f)) {
        sscanf(linha, "%d,%[^,\n]", &cod, nome_cliente);
        if (cod == cod_cli) {
            break;
        }
    }
    fclose(f);
}

int main() {
    char data_ini[11], data_fim[11], venc[11], linha[256], emissao[11];
    int cod_cli, num_doc;
    float valor;
    struct tm d_ini = {0}, d_fim = {0}, d_venc = {0};
    time_t hoje = time(NULL);
    struct tm *data_hoje = localtime(&hoje);

    printf("Digite a data inicial (dd/mm/aaaa): ");
    scanf("%s", data_ini);
    printf("Digite a data final (dd/mm/aaaa): ");
    scanf("%s", data_fim);

    string_para_data(data_ini, &d_ini);
    string_para_data(data_fim, &d_fim);

    FILE *f = fopen("recebimentos.txt", "r");
    if (!f) {
        printf("Erro ao abrir arquivo de recebimentos.\n");
        return 1;
    }

    fgets(linha, sizeof(linha), f); // cabeçalho
    printf("Num_doc | Cliente | Valor | Vencimento | Dias de atraso\n");

    while (fgets(linha, sizeof(linha), f)) {
        sscanf(linha, "%d,%f,%[^,],%[^,],%d", &num_doc, &valor, emissao, venc, &cod_cli);
        string_para_data(venc, &d_venc);

        int depois_ini = difftime(mktime(&d_venc), mktime(&d_ini)) >= 0;
        int antes_fim = difftime(mktime(&d_fim), mktime(&d_venc)) >= 0;

        if (depois_ini && antes_fim) {
            int atraso = diferenca_dias(*data_hoje, d_venc);
            if (atraso < 0) atraso = 0;

            char nome[100];
            buscar_nome_cliente(cod_cli, nome);

            printf("%7d | %-20s | %7.2f | %10s | %3d dias\n",
                   num_doc, nome, valor, venc, atraso);
        }
    }

    fclose(f);
    return 0;
}

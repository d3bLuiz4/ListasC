//Não consegui entender o porquê o for dá erro nos copiladores, se possível, pode explicar?

#include <stdio.h>
#include <string.h>

#define max_cntts 5

typedef struct {
    char nome[50];
    char endereço[100];
    int idade [50];
    char telefone[20];
} Contato;

void cadastrar(Contato agenda[]) {
    for (int i = 0; i < max_cntts; i++) {
        printf("\nContato %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", agenda[i].nome);
        
        printf("Idade: ");
        scanf(" %[^\n]", agenda[i].idade);
        
        printf("Endereço: ");
        scanf(" %[^\n]", agenda[i].endereço);
        
        printf("Telefone: ");
        scanf(" %[^\n]", agenda[i].telefone);
        printf("_____________________");
    }
}

void Idade(Contato agenda[]) {
    int idadeProcurada;
    printf("Digite a idade para a pesquisa: ")
    scanf("%d", &idadeProcurada);
    
  for (int i = 0; i < max_cntts; i++) {
        if (agenda[i].idade == idadeProcurada) {
            printf("Contato encontrado^^:\n");
            printf("Nome: %s\n", agenda[i].nome);
            printf("Endereço: %s\n", agenda[i].endereço);
            printf("Telefone: %s\n", agenda[i].telefone);
        } else {
            printf("Contato não encontrado :(..\n");
        }
    }
}

    
void classificar(Contato agenda[]) {
    printf("Oops! Falha na conexão, tente novamente mais tarde X~X..\n");
}

void alterar(Contato agenda[]) {
}

void sair(Contato agenda[]) {
}

int main() {
    Contato agenda[max_cntts];
    int opcao;

    do {
        printf("\n~Menu da Agenda~\n");
        printf("_________________________________________________________\n");
        printf("Disque 1. para Cadastro\n");
        printf("Disque 2. para Pesquisa de registro por idade\n");
        printf("Disque 3. para Classificação alfabética\n");
        printf("Disque 4. para Alteração de registro digitado com erro\n");
        printf("Disque 5. para Sair do Menu\n");
        printf("_________________________________________________________\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar(agenda);
                break;
            case 2:
                Idade(agenda);
                break;
            case 3:
                classificar(agenda);
                break;
            case 5:
                sair(agenda);
                break;
        }
    } while (opcao != 5);

    return 0;
}
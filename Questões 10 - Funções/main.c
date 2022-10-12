#include <stdio.h>
#include <stdlib.h>

typedef struct{

    float salario;
    int numero_filhos;

}Pessoa;

/* Ler os Dados de uma Pessoa. */
void ler_pessoa(Pessoa *p){

    printf("Salario: ");
    scanf("%f", &p->salario);
    printf("Numero de Filhos: ");
    scanf("%d", &p->numero_filhos);
}

/* Imprimir os Dado de uma Pessoa. */
void imprimir(Pessoa p){

    printf("\n\tSalario: %.2f\n", p.salario);
    printf("\tNumero de Filhos: %d\n", p.numero_filhos);
}

/* Ler a Quantidade de Pessoas a Adicionar no Vetor. */
void ler_quant(int *quant){

    printf("Informe a Quantidade de Pesssoas: ");
    scanf("%d", &*quant);
}

/* Adiciona Cada Pessoa no Vetor. */
void add_pessoa_vetor(Pessoa *p, int quant){

    for(int i = 0; i < quant; i++){

        printf("\n\tPESSOA %d:\n", i + 1);

        ler_pessoa(&p[i]);
    }
}

/* Imprimir o Vetor Contendo Todas as Pessoas. */
void imprimir_pessoas(Pessoa *p, int quant){

    printf("\n\t-----------------------------------\n");

    for(int i = 0; i < quant; i++){

        printf("\n\tPESSOA %d:", i + 1);

        imprimir(p[i]);
    }

    printf("\n\t-----------------------------------\n");
}

/* Função que Retorna a Media dos Salarios. */
float media_salario(Pessoa *p, int quant){

    //soma
    // media = soma / quant
}

/* Função que Rotorna o Maior Salario. */
float maior_salario(Pessoa *p, int quant){

    //maior_s = 0
    // for (pessoas){
        //if(maior_s < p->salario){
            //maior_s = p[i]


    //return maior_s
}

/* Função que Retorna o Percentual de Salarios Menor ou Igual a 350. */
float maior_percentual(Pessoa *p, int quant){

    //aux = 0
    //for(pessoas)
        //if(p->salario <= 350)
            //aux += 1

    // percntual =  (aux * 100) / quant
    //return percentual
}

int main(){

    int quant;

    ler_quant(&quant);

    Pessoa *p = malloc(sizeof(Pessoa) * quant);

    add_pessoa_vetor(p, quant);

    imprimir_pessoas(p, quant);

    return 0;
}

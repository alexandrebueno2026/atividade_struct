#include <stdio.h>  // introdução

struct cozinheiro {  // estrutura basicas
    int cod;
    char nome[50];
}; 

struct cozinheiro cozinheiros[3]; // vetor do cozinheiro

struct ingrediente {
    int cod_ing;
    char nome_ing[50];
};

struct ingrediente ingredientes[15];

struct receita {
    int cod_rec, cod_coz;
    float cal;
    char nome_rec[50];
};

struct receita receitas[20];

struct rec_ing {
    int cod_ing, cod_rec;
    float quant;
    char med[15];

};

struct rec_ing rec_ings[60]; // vetor de ingredientes x receitas ( 3 x 20)


void cadastrar_cozinheiros(void); // prototipo

void cadastrar_ingredientes(void); // prototipo

void cadastrar_receitas(void);  // prototipo

void receitas_cozinheiros(void); // prototipo

void cadastrar_receitas_igred_quant(void);

void calorias(void); // prototipo

void total_receitas(void); // prototipo 


int main(){

    cadastrar_cozinheiros(); // chama a primeira função

    cadastrar_ingredientes(); // chama a segunda função

    cadastrar_receitas();

    cadastrar_receitas_igred_quant();

    
    
    
    return 0;
}


void cadastrar_cozinheiros(void){

    int i;

    for(i=0; i<2; i++){

        printf("Nome do cozinheiro\n");
        scanf("%49s", cozinheiros[i].nome);
        printf("Codigo do cozinheiro:\n");
        scanf("%d", &cozinheiros[i].cod);
        
    }
}

void cadastrar_ingredientes(void){

    int i;

    for(i=0; i<2; i++){

        printf("Entre com o ingrediente:\n");
        scanf("%49s", ingredientes[i].nome_ing);
        printf("Entre com o codigo:\n");
        scanf("%d", &ingredientes[i].cod_ing);
            
    }
    
    printf("Ingrediente\t\tCodigo\n"); // Parte extra, mostrar todos os ingredientes

    for(i=0; i<2; i++){ //parte extra, verificar todos os ingredientes digitados.

        printf("%s\t\t%d\n",ingredientes[i].nome_ing, ingredientes[i].cod_ing);

    }
   
}

void cadastrar_receitas(void) {

    int i;

    for(i=0; i<2; i++){
        printf("Nome da receita:\n");
        scanf("%49s", receitas[i].nome_rec);
        printf("Codigo da receita:\n");
        scanf("%d", &receitas[i].cod_rec);
        printf("Codigo do cozinheiro:\n");
        scanf("%d", &receitas[i].cod_coz);
        printf("Total de calorias a cada 100 g:\n");
        scanf("%f", &receitas[i].cal);
     }
}


void cadastrar_receitas_igred_quant(void) {

    int i, j, k;
    k = 0;

    for(i = 0; i < 2; i++){

        printf("Receita:%s\n", receitas[i].nome_rec);

        for(j = 0; j < 2; j++){

            rec_ings[k].cod_rec = receitas[i].cod_rec;

            printf("Codigo do ingrediente:\n");
            scanf("%d", &rec_ings[k].cod_ing);

            printf("Quantidade:\n");
            scanf("%f", &rec_ings[k].quant);

            printf("Unidade de medida:\n");
            scanf("%14s", rec_ings[k].med);

            k++;
        }
    }
}
       






#include <stdio.h>  // introdução

struct cozinheiro {  // estrutura basicas
    int cod;
    char nome[50];
}; 

struct cozinheiro cozinheiros[3]; // vetor do cozinheiro

struct ingrediente {
    int cod_ing;
    char ing[50];
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
    float quat;
    char med[15];

};

struct rec_ing rec_ings[60]; // vetor de ingredientes x receitas ( 3 x 20)


void cadastrar_cozinheiros(void); // prototipo

void cadastrar_ingredientes(void); // prototipo

void cadastrar_receitas(void);  // prototipo

void receitas_cozinheiros(void); // prototipo

void calorias(void); // prototipo

void total_receitas(void); // prototipo 


int main(){

    cadastrar_cozinheiros(); // chama a primeira função

    cadastrar_ingredientes(); // chama a segunda função

    return 0;
}


void cadastrar_cozinheiros(void){

    int i;

    for(i=0; i<3; i++){

        printf("Nome do cozinheiro\n");
        scanf("%49s", cozinheiros[i].nome);
        printf("Codigo do cozinheiro:\n");
        scanf("%d", &cozinheiros[i].cod);
        
    };
}

void cadastrar_ingredientes(void){

    int i;

    for(i=0; i<15; i++){

        printf("Entre com o ingrediente:\n");
        scanf("%49s", ingredientes[i].ing);
        printf("Entre com o codigo:\n");
        scanf("%d", &ingredientes[i].cod_ing);
            
    };
    
    for(i=0; i<15; i++){ // uma parte extra, verificar todos os ingredientes digitados.

        printf("Ingrediente\t\tCodigo\n");
        printf("%s\t\t%d\n",ingredientes[i].ing, ingredientes[i].cod_ing);

    };
   
}

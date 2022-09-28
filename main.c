#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct para armazenar atributos do estudante.
typedef struct {
    char nome[30];
    int idade;
    float nota;
    char nivel[10];

} estudante;

void registrar_estudantes(char **pont_nomes, int qtd_estudantes, int *pont_idade, float *pont_nota, char **pont_nivel){

    pont_nomes = malloc(qtd_estudantes*sizeof(char*));
    pont_idade = malloc(qtd_estudantes*sizeof(int));
    pont_nota = malloc(qtd_estudantes*sizeof(float));
    pont_nivel = malloc(qtd_estudantes*sizeof(char*));

        for(int i=0;i<qtd_estudantes;i++){
            pont_nomes[i]=malloc(sizeof(char)*30);
        };
        for(int k=0;k<qtd_estudantes;k++){
            pont_nivel[k]=malloc(sizeof(char)*10);
        }
        for(int j=0;j<qtd_estudantes;j++){
            printf("\nDigite o nome do estudante: ");
            scanf("%s", &pont_nomes[j]);
            printf("\nDigite a idade do estudante: ");
            scanf("%d", &pont_idade[j]);
            printf("\nDigite a nota do estudante: ");
            scanf("%f", &pont_nota[j]);
            printf("\nDigite o nivel do estudante: ");
            scanf("%s", &pont_nivel[j]);
            //printf("Registrado: %s", &pont_nivel[j]);
        };

}

void imprimir_estudantes(char **pont_nomes, int qtd_estudantes, int *pont_idade, float *pont_nota, char **pont_nivel){

    char *auxiliar;
    auxiliar = &pont_nomes;
    for(int i=0;i<qtd_estudantes;i++){
        printf("\nNome do estudante: %s", &auxiliar[i]);
    };
    for(int j=0;j<qtd_estudantes;j++){
        printf("\nNivel do estudante: %s", &pont_nivel[j]);
    };

}

int main(){

    int qtd_estudantes;
    char **pont_nomes;
    int *pont_idade;
    float *pont_nota;
    char **pont_nivel;



    printf("Digite a quantidade de estudantes que deseja registrar: ");
    scanf("%d", &qtd_estudantes);

    registrar_estudantes(pont_nomes, qtd_estudantes, pont_idade, pont_nota, pont_nivel);
    imprimir_estudantes(pont_nomes, qtd_estudantes, pont_idade, pont_nota, pont_nivel);

    return 0;
}

#include <stdio.h>

int main (){

    char nome[15]; 
    int idade; 
    char genero;
    float altura;

    printf("digite seu nome: ");
    scanf("%s", nome);

    printf("digite sua idade: ");
    scanf("%d", &idade);

    printf("digite seu genero: ");
    scanf(" %c", &genero);

    printf("digite sua altura: ");
    scanf("%f", &altura);

    printf("bem-vindo(a), %s!\n", nome);
    printf("seu perfil\n");
    printf("Nome: %s\n", nome);
    printf("idade: %d\n", idade);
    printf(" genero: %c\n", genero);
    printf("altura: %.2f\n", altura);

    return 0;
}
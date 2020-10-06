#include <stdio.h>

int main(){
    char nombre[100];
    unsigned int edad;
    printf("Hola Mundo \n");
    printf("Ingresa Nombre: ");
    fgets(nombre,sizeof(nombre),stdin);
    printf("Hola %s ",nombre);
    printf("Ingresa edad: ");
    scanf("%u",&edad);
     printf("vas a cumplir %u ",edad + 1);

    return 0;
}
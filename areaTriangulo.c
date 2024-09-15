#include <stdio.h>
#include <stdlib.h>


void saludo(void);
float pedirBase(void);
float pedirAltura(void);
float calcularArea(float, float);
void mostrarArea(float);



int main(void){
    
    
    float base = 0, altura = 0, area = 0;
    saludo();
    base = pedirBase();
    altura = pedirAltura();
    area = calcularArea(base, altura);
    mostrarArea(area);
    system("pause");
    return 0;
}

void saludo(void){
    printf("Bienvenido al software que calcula el area de un triangulo...\n");
}

float pedirBase(void){
    float base;
    printf("Ingresa la base del triangulo:\n");
    scanf("%f", &base);
    return (base);
}

float pedirAltura(void){
    float altura;
    printf("Ingresa la altura del triangulo:\n");
    scanf("%f", &altura);
    return (altura);
}

float calcularArea(float base, float altura){
    float calculo;
    calculo = (base * altura) / 2;
    return (calculo);
}

void mostrarArea(float area){
    printf("El area del triangulo es: %.2f\n", area);
}


#include <stdio.h>

void saludo(void);
int pedirDatos(void);
int calcularHoras(int);
int calcularMinutos(int);
int calcularSegundos(int);
void mostrarResultado(int, int, int, int);

int main(void)
{

    int horas, minutos, segundos, datos;

    saludo();
    datos = pedirDatos();
    if (datos <= 86400)
    {
        horas = calcularHoras(datos);
        minutos = calcularMinutos(datos);
        segundos = calcularSegundos(datos);
        mostrarResultado(datos, horas, minutos, segundos);
    }
    else
    {
        printf("No puede ingresar un tiempo mayor a 86400 segundos...");
    }

    return 0;
}

void saludo()
{
    printf("Bienvenido al software para realizar conversiones de tiempo...\n");
}

int pedirDatos(void)
{
    int tiempo;
    printf("Ingrese el tiempo en segundos para visualizar la conversion\n");
    scanf("%d", &tiempo);
    return (tiempo);
}

int calcularHoras(int segundos)
{
    return segundos / 3600;
}

int calcularMinutos(int segundos)
{
    segundos = segundos / 60;

    return segundos % 60;
}

int calcularSegundos(int segundos)
{
    return segundos % 60;
}

void mostrarResultado(int datos, int horas, int minutos, int segundos)
{

    printf("%d segundos son: %d horas, %d minutos y %d segundos.", datos, horas, minutos, segundos);
}


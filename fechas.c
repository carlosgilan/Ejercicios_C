#include <stdio.h>
#define TRUNCATE

int devolverFecha(void);
int separarDia(int);
int separarMes(int);
int separarAnio(int);
void mostrarFecha(int, int, int, int);

int main(void)
{

    int fecha, dia, mes, anio;

    fecha = devolverFecha();

    if (fecha > 999999 && fecha < 100000000)
    {

        dia = separarDia(fecha);
        mes = separarMes(fecha);
        anio = separarAnio(fecha);

        mostrarFecha(fecha, dia, mes, anio);
    }
    else
    {
        printf("Fecha invalida");
    }
    return 0;
}

int devolverFecha()
{
    int fecha;
    printf("Ingresa la fecha en el siguiente formato DDMMAAAA:\n");
    scanf("%d", &fecha);
    return fecha;
}

int separarDia(int fecha)
{
    int dia = TRUNCATE(fecha / 1000000);
    return dia;
}

int separarMes(int fecha)
{
    int mes = (fecha % 1000000);

    return TRUNCATE(mes / 10000);
}
int separarAnio(int fecha)
{
    int anio = fecha % 10000;
    return anio;
}
void mostrarFecha(int fecha, int dia, int mes, int anio)
{
    printf("La fecha %d separada por dia, mes y anio es: DD: %d - MM: %d - AAAA: %d", fecha, dia, mes, anio);
}
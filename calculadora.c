#include <stdio.h>
void titulo(void);
float primerDato(void);
float segundoDato(void);
float sumar(float, float);
float restar(float, float);
float multiplicar(float, float);
float dividir(float, float);
void imprimirResultado(float);
int main(void)
{
	float numero1, numero2, resultado;
	char operacion;
	titulo();
	printf("Ingrese el tipo de operacion que desea realizar: \n");
	printf("SUMA = +\n");
	printf("RESTA = -\n");
	printf("MULTIPLICACION = *\n");
	printf("DIVISION = /\n\n");
	printf("La operacion es: \n");
	scanf(" %c", &operacion);
	numero1 = primerDato();
	numero2 = segundoDato();
	switch (operacion)
	{
	case '+':
		resultado = sumar(numero1, numero2);
		break;
	case '-':
		resultado = restar(numero1, numero2);
		break;
	case '*':
		resultado = multiplicar(numero1, numero2);
		break;
	case '/':
		if (numero2 == 0)
		{
			printf("Operacion invalida: no se puede dividir por 0");
		}
		else
		{
			resultado = dividir(numero1, numero2);
		}
		break;
	default:
		printf("Operacion no valida");
		return 1;
	}
	imprimirResultado(resultado);
	return 0;
}
void titulo() { printf("**********CALCULADORA***********\n"); }
float primerDato(void)
{
	float numero1;
	printf("Ingrese el primer numero: ");
	scanf("%f", &numero1);
	return numero1;
}
float segundoDato(void)
{
	float numero2;
	printf("Ingrese el segundo numero: ");
	scanf("%f", &numero2);
	return numero2;
}
float sumar(float numero1, float numero2) { return numero1 + numero2; }

float restar(float numero1, float numero2) { return numero1 - numero2; }
float multiplicar(float numero1, float numero2) { return numero1 * numero2; }

float dividir(float numero1, float numero2) { return numero1 / numero2; }

void imprimirResultado(float resultado) { printf("%.2f\n", resultado); }

#include <iostream>

/* telefonica */

int main(int argc, char** argv) 

{
	int Opc, OpcM, OpcT  ; 
	
	printf(" Compañias Telefonicas \n ");
	printf("1. Telcel \n ");
	printf("2. Movistar \n ");
	printf("3. AT&T \n ");
	printf("4. Wizz \n ");
	printf("5. Axtel \n ");
	printf(" Selecciona una Opcion ");
	scanf("%d", &Opc );
	if (Opc == 1)
	{
	printf(" Bienvenido a Telcel \n ");
	printf("1. 500 Pesos de Saldo \n ");
	printf("2. 400 Pesos de Saldo \n ");
	printf("3. 300 Pesos de Saldo \n ");
	printf("4. 200 Pesos de Saldo \n ");
	printf("5. 100 Pesos de Saldo \n ");
	printf("6. 50 Pesos de Saldo \n ");
	printf(" Selecciona una Opcion ");
	scanf("%d", & OpcT);
	if (OpcT == 1)
	{
	printf(" Has Hecho una Recarga de 500 Pesos ");
	printf(" Gracias por su Recarga  ");
	}
	else 
	{
	if (OpcT == 2)
	{
	printf(" Has Hecho una Recarga de 400 Pesos ");
	printf(" Gracias por su Recarga ");
	}
	else 
	{
	if (OpcT == 3)
	{
	printf(" Has Hecho una Recarga de 300 Pesos ");
	printf(" Gracias por su Recarga ");
	}
	else 
	{
	if (OpcT == 4) 
	{
	printf(" Has Hecho una Recarga de 200 Pesos ");
	printf(" Gracias por su Recarga ");
	}
	else 
	{
	if (OpcT == 5)
	{
	printf(" Has Hecho una Recarga de 100 Pesos ");
	printf(" Gracias por su Recarga ");
	}
	else 
	{
	if (OpcT == 6) 
	{
	printf(" Has Hecho una Recarga de 50 Pesos ");
	printf(" Gracias por su Recarga ");
	}
	else 
	{
	if (OpcT < 0)
	{
	printf(" Error, Opcion no Valida ");
	}
	else 
	{
	if (OpcT > 6)
	{
	printf(" Error, Opcion no Valida ");
	}
	}
	}
	}
	}
	}
	}
	}
	
	
	
	
	
	
	
	
	
	return 0;
}

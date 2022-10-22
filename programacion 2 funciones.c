#include<stdio.h>
#include<windows.h>
float a,b;
int br;
//declarando funciones
float suma(float a,float b);
float resta(float a,float b);
float multiplicacion(float a,float b);
float division(float a,float b);

//valores a y b
int main(){
	printf("ingrese valor de a\n");
	scanf("%f",&a);
	printf("ingrese valor de b\n");
	scanf("%f",&b);
	
//eleccion de opciones
do{

	printf("que quiere hacer?\na+b(1)\na-b(2)\na*b(3)\na/b(4)\ndeclarar valores a y b(5)\nterminar progama(6)\nvalores actuales: a=%f b=%f",a,b);
	scanf("%d", &br);
switch(br){
	
	//suma
	case 1:
		printf("a+b=%f\n",suma(a,b));
		system("pause");
		break;
		
	//resta
	case 2:
		printf("a-b=%f\n",resta(a,b));
		system("pause");
		break;
		
	//multiplicacion
	case 3:
		printf("a*b=%f\n",multiplicacion(a,b));
		system("pause");
		break;
	
	//division
	case 4:
		printf("a/b=%f\n",division(a,b));
		system("pause");
		break;
		
	//re eleccion de valores a y b
	case 5:
		printf("ingrese valor de a\n");
		scanf("%f",&a);
		printf("ingrese valor de b\n");
		scanf("%f",&b);
		
	//finalizacion de programa
	case 6: break;
	
	//eleccion de opcion no disponible
	default:
		printf("no se ha encontrado esta opcion\n");
		system("pause");
		break;
		
}
system("cls");

}while(!(br==6));




}

//desarrollo de funciones

//funcion suma
float suma( float a,float b){
	float c=a+b;
	printf("a\n");
return c;
}

//funcion resta 
float resta(float a,float b){
	float c=a-b;
return c;
}

//funcion multiplicaion
float multiplicacion(float a,float b){
	float c=a*b;
return c;
}

//funcion division
float division(float a,float b){
	float c=a/b;
return c;
}




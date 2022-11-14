#include<stdio.h>
#include<windows.h>
int a=0;
struct feature{
    int edad;
    int colorpelo;
    float altura;
};

struct persona {
    char nombre[20];
    char apellido[20];
    struct feature caracteristica;
}persona[5];

void crear();
void mostrar();
void buscarEdad();
void buscarAltura();
void buscarColor();
void salir();
void menu();

int main(){
    menu();
    system("PAUSE");
    return 0 ;
}

void crear(){
	
        	for(int n = 0; n<1 ;n ++ ){			
 			printf("________________\n");
            printf("ingresar nombre de la persona %i\n",n+1);
			scanf("%s", &persona[n].nombre);
            
            
			printf("ingresar apellido de la persona %i\n",n+1);
			scanf("%s", &persona[n].apellido);

            printf("ingresar edad \n");
			scanf("%i", &persona[n].caracteristica.edad);

			printf("ingresar color de cabello\n-negro :1\n-amarillo :2\n-rojo :3\n");
			scanf("%i", &persona[n].caracteristica.colorpelo);
			
			printf("ingresar altura en metros\n");
			scanf("%f", &persona[n].caracteristica.altura);
			printf("________________\n");		
			
			a++;

}
}

void mostrar(){
			if(a==0){
			printf("no se ha ingresado informacion\n");
			
		}else{
		
		for(int n = 0; n<5 ;n ++ ){

		printf("________________\n");
		printf("nombre: %s %s\n", persona[n].nombre,persona[n].apellido);
		printf("edad: %i\n", persona[n].caracteristica.edad);
		printf("altura: %.2f\n", persona[n].caracteristica.altura);
		printf("color de cabello:");		
		switch(persona[n].caracteristica.colorpelo){
			case 1:printf("negro\n ");
				break;
			case 2:printf("amarillo\n");
				break;
			case 3:printf("rojo\n");
				break;
		}
		}
		
	
}
}

void buscarEdad(){
	int bi,b=0;
		if(a==0){
			printf("no se ha ingresado informacion\n");
			
		}else{
		
			printf("________________\n");
			printf("ingrese edad a buscar \n");
				scanf("%i",&bi);
					for(int n=0;n<5;n++){
						if(persona[n].caracteristica.edad==bi){
							printf("________________\n");
							b++;
							printf("nombre: %s %s\n", persona[n].nombre,persona[n].apellido);
							printf("edad: %i\n", persona[n].caracteristica.edad);						
						}
					}
				if(b==0){
				printf("no se han encontrado resultados\n");}						
}
}


void buscarAltura(){
	int b=0;
	float bf;
			if(a==0){
			printf("no se ha ingresado informacion\n");
			
		}else{
		
	

		printf("ingrese la altura(se buscaran personas entre 0.5m arriba o abajo del valor ingresado)\n");
				scanf("%f",&bf);
				for(int n = 0; n<5 ;n ++ ){
					if(bf-0.5<persona[n].caracteristica.altura && bf+0.5>persona[n].caracteristica.altura){
						printf("________________\n");
						b++;
							printf("nombre: %s %s\n", persona[n].nombre,persona[n].apellido);
							printf("altura: %.2f\n", persona[n].caracteristica.altura);
					}	
				}
				if(b==0){
				printf("no se han encontrado resultados\n");}
}
}

void buscarColor(){
	int bc,b=0;
			if(a==0){
			printf("no se ha ingresado informacion\n");
			
		}else{
		
	

		printf("ingresar color de cabello que se desea buscar\n-negro :1\n-amarillo :2\n-rojo :3\n");
				scanf("%i",&bc);
				for(int n = 0; n<5 ;n ++ ){
					if(persona[n].caracteristica.colorpelo==bc){
						printf("________________\n");
						b++;
						printf("nombre: %s %s\n", persona[n].nombre,persona[n].apellido);
						printf("color de cabello:");	
							switch(persona[n].caracteristica.colorpelo){
									case 1:printf("negro\n ");
										break;
									case 2:printf("amarillo\n");
										break;
									case 3:printf("rojo\n");
										break;
								}
							
					}
				}
				if(b==0){
					printf("no se han encontrado resultados\n");}
					
}
}

void salir(){
	    printf("Programa finalizado\n");
}

void menu(){
    int opc;
    do{
        printf("________________\n");
        printf("Menu de Opciones\n");
        printf("1. Crear personas\n");
        printf("2. Mostrar personas \n");
        printf("3. Buscar personas por Edad\n");
        printf("4. Buscar personas por altura(aproximada)\n");
        printf("5. Buscar personas por color de cabello\n");
        printf("6. Salir del sistema\n");
        printf("Selecione una Opcion\n");
        scanf("%d", &opc);
        printf("________________\n");        

        switch(opc){

        case 1:
            crear();
        break;

        case 2:
            mostrar();
        break;

        case 3:
            buscarEdad();
        break;

        case 4:
            buscarAltura();
        break;
        
        case 5:
            buscarColor();
        break;

        case 6:
            salir();
        break;

        default:
            printf("Opcion incorrecta");
        }

    }while(opc!=6);

};

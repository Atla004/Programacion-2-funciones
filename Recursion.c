#include <stdio.h>

long int fact(int n);


int main() {
    int n;
    printf("Ingrese el numero : "); 
	scanf("%d", &n);
    printf("%ld",fact(n));
    return 0;
}


// funcion recursiva
long int fact(int n) {
    //evitando errores(numeros negativos)
    if (n<0) {
        printf("Numero invalido");
        return 0;
    }
    // Casos base. 0!=1
    else if (n==0) {
        return 1;
    }else{
    //caso recursivo
    int a=n*fact(n-1);
	return a;
}
}
    	



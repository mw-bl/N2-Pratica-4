#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int soma(int a, int b) {
    return a + b;
}

int main (){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int op = 1, n1, n2, r;
	
	while(op == 1) {
   
        printf("Digite o primeiro número: ");
        scanf("%d", &n1);
        printf("\nDigite o segundo número: ");
        scanf("%d", &n2);
       
        r = soma(n1, n2);
        printf("\nResultado: %d.", r);

	    printf("\n\nDeseja continuar?\n");
        printf("0 - Não   1 - Sim: ");
        
        scanf("%d", &op);
        system("cls");     
    }
        
    return 0;
    }


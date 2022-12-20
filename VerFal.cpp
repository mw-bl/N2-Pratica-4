#include <stdio.h>
#include <locale.h>

char* isNegative ( int n ) {
	if (n >= 0){
		return "Falso";
	}
	return "Verdadeiro";
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	char* b = isNegative(num);
	printf("\nO número é negativo? \n-%s", b);
	
	return 0;
}

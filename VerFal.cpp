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
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	char* b = isNegative(num);
	printf("\nO n�mero � negativo? \n-%s", b);
	
	return 0;
}

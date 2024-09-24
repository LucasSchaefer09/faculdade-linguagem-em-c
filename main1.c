int main(int argc, char *argv[]) {
	int numero1, numero2, numero3, numero4, soma;
	int subtracao, multiplicacao, divisao;
		
	printf("DIGITE UM NUMERO: ");
	scanf("%d", &numero1);
	
	printf("DIGITE O SEGUNDO NUMERO: ");
	scanf("%d", &numero2);
	
	printf("DIGITE O TERCEIRO NUMERO: ");
	scanf("%d", &numero3);
	
	printf("DIGITE O QUARTO NUMERO: ");
	scanf("%d", &numero4);
	
	soma = numero1 + numero2 + numero3 + numero4;
	multiplicacao = numero1 * numero2 * numero3 * numero4;
	divisao = numero1 / numero2 / numero3 / numero4;
	
	printf("%d + %d + %d + %d =% \n", numero1, numero2, numero3, numero4, soma);
	printf("%d - %d - %d - %d = %d \n", numero1, numero2, numero3, numero4, subtracao);
	printf("%d * %d * %d * %d = %d \n", numero1, numero2, numero3, numero4, multiplicacao);
	printf("%d / %d / %d / %d = %d \n", numero1, numero2, numero3, numero4, divisao);
	printf("---------------SOMA: %d", soma);
	
	return 0;
}
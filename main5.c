int main(int argc, char *argv[]) {
	int numero;
	printf("Digite um numero ");
	scanf("%d", &numero);
	if(numero > 0){
		printf("%d e positivo \n", numero);
	} else {
		printf("o numero nao e positivo \n");
	}
	return 0;
}
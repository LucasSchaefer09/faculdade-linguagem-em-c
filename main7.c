int main(int argc, char *argv[]) {
	int opcao;
	printf("Menu: \n");
	printf("1. Opcao 1\n");
	printf("2. Opcao 2\n");
	printf("3. Opcao 3\n");
	printf("Digite a opcao deseja: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1:
			printf("Voce escolheu a opcao 1.\n");
			break;
		case 2:
			printf("Voce escolheu a opcao 2.\n");
			break;
		case 3:
			printf("Voce escolheu a opcao 3.\n");
			break;
		default:
			printf("Opcao invalida! \n");
	}
	
	return 0;
}
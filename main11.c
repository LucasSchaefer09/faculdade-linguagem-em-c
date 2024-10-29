int main(int argc, char *argv[]) {

	int numero_vetor[5];
	for(int i = 0; i < 5; i++){
		printf("Digite um numero: ");
		scanf("%d", &numero_vetor[i]);	
	}
	
	for(int j = 0; j < 5; j++){
		printf("dado da posicao %d igual %d \n", j, numero_vetor[j]);
	}
	
	
	return 0;
}
int main(int argc, char *argv[]) {
	int matriz_inteiro[5][8];
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 8; j++){
			int numero_aleatorio = rand() % 1000;
			matriz_inteiro[i][j] = numero_aleatorio;
		}
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 8; j++){
			printf("%d ", matriz_inteiro[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
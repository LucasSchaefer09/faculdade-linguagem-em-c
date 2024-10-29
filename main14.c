int main(int argc, char *argv[]) {
	int M[6][6];
	int count = 0;
	printf("Digite os elementos da matriz 6x6: \n");
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			printf("ELEMENTO [%d][%d]:", i, j);
			scanf("%d", &M[i][j]);
			if (M[i][j] > 10) {
				count++;
			}
		}
	}
	
	printf("A matriz possui %d valores maiores que 10.\n", count);
	
	return 0;
}
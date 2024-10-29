int main(int argc, char *argv[]) {
	int M[5][5];
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(i == j){
				M[i][j] = 1;
			} else {
				M[i][j] = 0;
			}
		}	
	}
	
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
int main(int argc, char *argv[]) {

	int i = 0;
	while (i <= 100){
		if (i%2==0){
			printf("O numero %d, e par \n", i);
		} else {
			printf("O numero %d, e impar \n", i);
		}
		i = i + 1;
	}
}
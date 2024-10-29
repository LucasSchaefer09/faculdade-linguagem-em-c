int main(int argc, char *argv[]) {

	char nome_pessoa[10];
	printf("Digite um nome: ");
	scanf("%s", &nome_pessoa);	
	getchar();
	printf("%s \n", nome_pessoa);
	
	for(int i=0; i < 10; i++){
		printf("%c", nome_pessoa[i]);
	}
	
	return 0;
}
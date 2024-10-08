int main(int argc, char *argv[]) {
	int cont = 0;
	float nota1, nota2, nota3, media = 0;
	
	printf("Digite a primeira nota \n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota \n");
	scanf("%f", &nota2);
	printf("Digite a terceira nota \n");
	scanf("%f", &nota3);
	media = (nota1+nota2+nota3)/3;
	printf("A media %f", media);
	
	float recebe_nota, nota = 0;
	while (cont < 3){
		printf("Digite a nota \n");
		scanf("%f", &nota);
		recebe_nota = recebe_nota + nota;
		cont = cont + 1;
	}
	media = recebe_nota/3;
	return 0;
}
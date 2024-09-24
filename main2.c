int main(int argc, char *argv[]) {
	float nota1, nota2, nota3, media;
	int peso1, peso2, peso3;
	
	printf("DIGITE A PRIMEIRA NOTA \n");
	scanf("%f", &nota1);
	printf("DIGITE A SEGUNDA NOTA \n");
	scanf("%f", &nota2);
	printf("DIGITE A TERCEIRA NOTA \n");
	scanf("%f", &nota3);
	printf("DIGITE O PRIMEIRO PESO \n");
	scanf("%d", &peso1);
	printf("DIGITE O SEGUNDO PESO \n");
	scanf("%d", &peso2);
	printf("DIGITE O TERCEIRO PESO \n");
	scanf("%d", &peso3);
	
	media = (((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3))/(peso1 + peso2 + peso3));
	printf("(%f * %d) + (%f * %d) + (%f * %d) /(%d + %d + %d) = %f", 
	nota1, peso1, nota2, peso2, nota3, peso3, peso1, peso2, peso3, media);
	
	
	return 0;
}
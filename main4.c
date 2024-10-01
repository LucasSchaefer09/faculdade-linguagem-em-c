int main (int argc, char *argv[]) {
    int numero;
    printf("Digite a idade: ");
    scanf("%d", &numero);
    if (numero >= 18) {
        printf("A pessoa e maior de %d anos\n", numero);
    } else {
        printf("A pessoa e menor de idade\n");
    }
    return 0;
}
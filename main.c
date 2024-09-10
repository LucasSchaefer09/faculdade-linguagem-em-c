int main() {
    float num1, num2, num3, media;

    // Solicita ao usuário que insira três números
    printf("Digite o primeiro numero por favor: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    // Calcula a média dos três números
    media = (num1 + num2 + num3) / 3;

    // Exibe a média calculada
    printf("A media dos tres numeros e: %.2f\n", media);

    return 0;
}

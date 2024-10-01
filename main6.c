int main(int argc, char *argv[]){
    float nota, frequencia;
    printf("digite a nota do aluno: ");
    scanf("%f", &nota);
    printf("digite a frequencia do aluno: ");
    scanf("%f", &frequencia);

    if(frequencia >= 75){
        if(nota >= 7){
            printf("aprovado \n");
        } else if ( nota >= 5 && nota <7){
            printf("recuperacao \n");
        } else {
            printf("reprovado \n");
        }
    }
    return 0;
}
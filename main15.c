int main() {
    int M[20][20];
    
    // Preencher a matriz com a regra M[i][j] = i + j
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            M[i][j] = i + j;
        }
    }

    // Exibir a matriz
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            printf("%3d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}

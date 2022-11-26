#include <stdio.h>
int main(){
    int matrixA[50][50];
    int matrixB[50][50];
    int hasil [50][50];
    int baris, i, j, k, jumlah = 0;
    scanf("%d", &baris);
    printf("Matriks A\n");
    for (i = 0; i < baris; i++){
       for (j = 0; j < baris; j++){
            scanf("%d", &matrixA[i][j]);}}
    printf("Matriks B\n");
    for (i = 0; i < baris; i++){
       for (j = 0; j < baris; j++){
            scanf("%d", &matrixB[i][j]);}}
    for (i = 0; i < baris; i++){
      for (j = 0; j < baris; j++){
            for (k = 0; k < baris; k++){
                  jumlah = jumlah + matrixA[i][k] * matrixB[k][j];}
            hasil [i][j] = jumlah;
            jumlah = 0;}}
    printf("Matriks AXB\n");
      for (i = 0; i < baris; i++){
            for (j = 0; j < baris; j++){
                  printf("%d ", hasil[i][j]);}
            printf("\n");}
}
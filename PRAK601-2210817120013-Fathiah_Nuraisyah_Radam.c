#include <stdio.h>
int main(){
    int i, j, baris, kolom;
    scanf("%d %d", &baris, &kolom);
    int matrix[baris][kolom];
    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
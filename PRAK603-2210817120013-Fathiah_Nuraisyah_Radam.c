#include <stdio.h>
int main(){
      int baris1, baris2;
      scanf("%d %d", &baris1, &baris2);
      if (baris1 != baris2){
            printf("Jumlah tidak sama");
            return 0;
      }
      int a[baris1];
      int b[baris2];
      int i;
            for (i = 0; i < baris1; i++){
                  scanf("%d", &a[i]);
            }
            for (i = 0; i < baris2; i++){
                  scanf("%d", &b[i]);
            }
            for (i = 0; i < baris1; i++){
                  printf("%d ", a[i] * b[i]);
            }
            return 0;
}
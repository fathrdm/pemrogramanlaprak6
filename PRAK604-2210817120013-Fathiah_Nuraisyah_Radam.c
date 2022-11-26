#include <stdio.h>
#include <string.h>
int main(){
      char word1[50], word2[50];
      scanf(" %[^\n]%*c", &word1);
      scanf(" %[^\n]%*c", &word2);
      int kata1, kata2;
      kata1 = strlen(word1);
      kata2 = strlen(word2);
      if (kata1 != kata2){
            printf("Panjang kalimat berbeda, pesan palsu");
            return 0;
      }
      int i, a = 0, b = 0;
      for (i = 0; i < kata1; i++){
            if (word1[i] == word2[i]){
                  printf("*");
                  a++;
            }
            else {
                  printf("#");
                  b++;
            }
      }
      printf("\n");
      printf("* = %d\n", a);
      printf("# = %d\n", b);
      if (a >= b){
            printf("Pesan Asli\n");
      }
      else {
            printf("Pesan Palsu");
      }
}
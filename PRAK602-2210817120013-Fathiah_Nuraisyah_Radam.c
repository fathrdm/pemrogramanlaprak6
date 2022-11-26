#include <stdio.h>
int main(){
    int angka, i, a=1;
    scanf("%d", &angka);
    int angka2[angka];
    for (i = 0; i < angka; i++){
        scanf("%d", &angka2[i]);
    }
    for (i = 0; i < angka; i++){
        printf("%d ", angka2[i] * a);
        a++;
    }
    return 0;
}
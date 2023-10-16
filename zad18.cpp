/*
Да се напише програма каде што се внесува код, 
цена на производ и сума која што корисникот ја има. 

Последните две цифри од кодот означуваат колку % ддв треба да се наплати. 

Да се пресмета вкупната цена која што корисникот треба да ја 
плати и да се испечати 1 доколку има пари да ја плати сумата, 
а во спротивно 0. Задачата да се реши со логички операции, без if-else.*/

#include <stdio.h>

int main(){
    int code, price, sum;
    scanf("%d%d%d", &code, &price, &sum);
    float ddv=code%100;
    printf("%.2f\n%d", (price*ddv/100)+price, (price*ddv/100)+price<=sum);
    return 0;
}
/*
Напишете програма која од стандарден влез ќе прочита 5 цели 
броеви A, B, C, D и E, и ќе ги измине броевите во интервалот [A, B] 
(нема да има пример со B<A) со чекор C (почнувајќи од А) и ќе пресмета:

збир на броевите чиј што квадрат е делив со D
просек (заокружен на две децимални места) на броевите на кои што цифрата на 
единиците или на десетките (или и двете од нив) е E (нема да има пример со E=0)
Пример: A=8;B=165;C=13;D=8;E=1;
Броевите кои треба да се изминат за овој пример се:
8 21 34 47 60 73 86 99 112 125 138 151 164
Kвадратите на броевите 8 60 112 и 164 се деливи со D=8, 
па бараниот збир е 8+60+112+164 = 344
Броевите 21 112 151 ја содржат цифрата E=1 на позиција на единиците или десетките, 
па бараниот просек е (21+112+151)/3 = 284/3 = 94.6666... 
(или заокружено на две децимали) = 94.67. Забележете дека и 
броевите 125 138 и 164 исто така ја содржат цифрата E=1, но не е на бараните позиции.*/

#include<stdio.h>
int main() {
    int A, B, C, D, E;
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    int zbir1 = 0, zbir2 = 0, brojac = 0;
    for (int i = A; i <= B; i += C) {
        if (i * i % D == 0) {
            zbir1 += i;
        }
        if (i % 10 == E || i / 10 % 10 == E) {
            zbir2 += i;
            brojac++;
        }
    }
    printf("zbir = %d\n", zbir1);
    printf("prosek = %.2f\n", (float)zbir2 / brojac);
}
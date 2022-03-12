#include <stdio.h>
const int  n = 5;
int a1 = 6;
int d = 3;
int main () {
    int pole[n];
    pole[0]=a1+d;
    printf("%d je zacatecni cislo \t %d  je kolik cisel \t %d  je po kolika\n",a1,n,d);
    for(int i=1;i<n;i++){
        pole[i]=pole[i-1]+d;
        printf("%d\n",pole[i]);
        }
   return 0;
}
//pokud to nechápu správně, tak výsledek úkolu bude s druhým for cyklem který bude pouze vypisovat 
/* n - počet požadovaných prvků
a1 - první číslo
d - (diference aritmetické posloupnosti)
*/
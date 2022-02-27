#include <stdio.h>
#include <math.h>

float a = 350;
float b = 3; 
float c = 50;
float d = 1.0555646;
float S;
int z = 0;

float degToRad(double a, double b, double c){
    a = a * 60 * 60;
    b = b * 60;
    S = (a + b + c) * 484814;
    S = S / 100000000000; 
    //printf("%f Radianu\n",S);//
    return 0;
    }
int main () {
    //vypocet radianu
    degToRad(a,b,c);
        a = 0;
        b = 0;
        c = 0;
        for(int x=0; x<14; x++){
            
            z = z + 30;
    printf("%d stupnu,",z);
    
                                }
    printf("\n");    
    for(int x=0; x<14; x++){
        
        degToRad(a,b,c);
        a = a + 30;
        printf("%.2f,      ",S);
    
    

                            }

    
   return 0;
}

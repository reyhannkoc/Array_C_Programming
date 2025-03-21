
#include <stdio.h>

int main() {
    double x[3][3], y[3];
    int j,i, a=1;
    for(j=0; j<3; j++){
        for(i=0; i<3; i++){
            
            x[j][i]=a;
            a++;
             
        }
    }
    for(j=0; j<3; j++){
    printf("\n");
        for(i=0; i<3; i++){
             printf(" %.0f  ",x[j][i]);
        }
    }
}
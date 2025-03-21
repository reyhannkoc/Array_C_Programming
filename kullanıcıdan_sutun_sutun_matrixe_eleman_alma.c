
#include <stdio.h>

int main() {
    double x[3][3], y[3];
    int j,i;
    for(j=0; j<3; j++){
        for(i=0; i<3; i++){
            printf("x[%d][%d]: ",i,j);
            scanf ("%lf",&x[j][i]);
             
        }
    }
    for(j=0; j<3; j++){
        
    printf("\n");
        for(i=0; i<3; i++){
           
           
             printf(" %.0f  ",x[i][j]);
        }
    }
}
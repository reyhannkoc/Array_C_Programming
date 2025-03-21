#include <stdio.h>

int main() {
    int x[3][3];
    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            
               x[i][j]=0;
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            
               if(i==1)
                   x[i][j]=34;
        }
    }
    
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<3; j++){
            printf("x[%d][%d]: %d ",i,j, x[i][j]);
        }
    }
    
    
    return 0;
}
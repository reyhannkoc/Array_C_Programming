#include <stdio.h>
int main() {
    int x[3][3],y[3];
    int temp, i, j, a=1;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            x[i][j]=a;
            a++;
        }
    }        
    
    for(i=0; i<3; i++){
        temp = x[i][2];
        x[i][2]=x[1][i];
        x[1][i]=temp;
        
    }
    
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<3; j++){
            printf("%d ",x[i][j]);
        }
    }
    
   
    return 0;
}
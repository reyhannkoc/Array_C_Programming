#include <stdio.h>
int main() {
    int x[3][3],y[3];
    int i,j, a=1;
    
    y[0]=65;
    y[1]=98;
    y[2]=32;
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(j==2)
               x[i][j]=y[i];
            else
                x[i][j]=a;
                
            a++;
        }
    }
    
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<3; j++){
            printf("%d ",x[i][j]);
        }
    }
    
    
   
    return 0;
}
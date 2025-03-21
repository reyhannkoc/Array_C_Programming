#include <stdio.h>
int main(){
    int array[100];
    
    for(int i=0; i<100; i++){
        array[i] = (i+1)*(i+1);
    }
    printf("ilk eleman: %d \n son eleman: %d",array[0],array[99]);
    return 0;
}     
#include <stdio.h>
int main() {
    int not[100], no[100], sm, max=0, maxno, min=999, minno;
    printf("sınıf mevcudu: ");
    scanf("%d",&sm);
    
    for(int i=0; i<sm; i++){
    printf("%d. öğrenci numarasını ve notunu giriniz: ",i+1);
    scanf("%d%d",&no[i],&not[i]);
    }
    for(int i=0; i<sm;i++){
        if(not[i]>max){
            max = not[i];
            maxno = no[i];
            
        }
        if(not[i]<min){
            min = not[i];
            minno = no[i];
            
        }
        
    }
    
    printf("\n%d numaralı öğrenci en yüksek notu almıştır: %d",maxno,max);
    printf("\n%d numaralı öğrenci en yüksek notu almıştır: %d",minno,min);
    
    
    
    return 0;
}
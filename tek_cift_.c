#include <stdio.h>
int main() {
    int n, a[100], cift[100], c=0, tek[100], t=0;
    printf("kaç adet sayi girmek istersiniz: ");
    scanf("%d",&n);
    if(n<=0){
        printf("lütfen pozitif bir sayi girin!\n");
    }
    else{
        printf("sayilari girin: ");
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        for(int j=0; j<n; j++){
            if(a[j]%2 == 0){
                cift[c]=a[j];
                c++;
            }
            else{
                tek[t]=a[j];
                t++;
            }
        }
        for(int k=0; k<c; k++){
            printf(" %d ",cift[k]);
        }
        for(int k=0; k<t; k++){
            printf("\n %d ",tek[k]);
        }
        
    }
    
    
    
    return 0;
}
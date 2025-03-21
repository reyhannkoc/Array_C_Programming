#include <stdio.h>
int main() {
    int i, k, n, a[100];
    printf("pozitif bir sayi giriniz: ");
    scanf("%d",&n);
    
    printf("sayiları giriniz: ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    k = a[n-1];
    
    for(i=n-1; i>0; i--){
        a[i] = a[i-1];
        a[0] = k;
    }
    
    for(i=0; i<n; i++){
        printf("%d  ",a[i]);
    }
    
    return 0;
}
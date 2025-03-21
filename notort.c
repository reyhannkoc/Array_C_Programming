#include <stdio.h>
int main(){
    int not1, not2, not3;
    double s;
    printf("enter 3 number: \n");
    scanf("%d%d%d" ,&not1,&not2,&not3);
    s = (not1 + not2 + not3)/3.0;
    printf("sonuc: %f",s);
    return 0;
}
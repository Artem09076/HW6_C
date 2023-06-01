#include <stdio.h>
int sumDigits(int *num){
    int summ=0;
    while (*num!=0)
    {
        summ+=(*num%10);
        *num=*num/10;
    }
    return summ;
}
int main(){
    int num;
    scanf("%d",&num);
    int result=sumDigits(&num);
    printf("%d\n",result);
    return 0;
    
}
#include <stdio.h>
int sumDigits(int *num){
    int summ=0;
    while (*num!=0)//Пока num не равн 0 прибовляем к summ остаток от деления и с помощью указателей записываем в num целочисленное деление
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

#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int x=a+((c - a % d) % d);
    while (x<=b)
    {
        printf("%d ",x);
        x+=d;
    }
    printf("\n");
    return 0;
}
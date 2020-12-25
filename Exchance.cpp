
#include<stdio.h>
int exchange(int *a,int *b)
{
    int  temp;
    temp=*a;
    *a=*b;
    *b= temp;

}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    exchange(&x,&y);
    printf("%d %d",x,y);
}

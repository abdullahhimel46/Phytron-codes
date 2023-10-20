#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    //min
    //N.B: we need to print a space after the min value
    if (a<=b && a<=c)
    {
        printf("%d ",a);
    }
    else if(b<=a && b<=c)
    {
        printf("%d ",b);
    }
    else
        printf("%d ",c);
    
    //max
    //N.B: we need to print a new line after the max value
    if (a>=b && a>=c)
    {
        printf("%d\n",a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d\n",b);
    }
    else
        printf("%d\n",c);
    }
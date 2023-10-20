#include<stdio.h>
int main(){
    char x,des_let;
    scanf("%c",&x);

    if(x>= 'a' && x<='z'){
        des_let = x -32;
        printf("%c",des_let);
    }else{
        des_let = x +32;
        printf("%c",des_let);
    }
}
#include <stdio.h>

/*
    here,
    '3'-'0'= 3
    '5'-'0'= 5
    '1'-'0'= 1
*/


int main(){
    char s[1000001];
    int sum = 0;
    scanf("%s",s);
    /*for(int i=0; i <strlen(s); i++) --> #include <string.h>
    library must be imported.
     and for(int i=0; s[i]!='\0'; i++) both are same*/

    for(int i=0; i < s[i]!='\0'; i++){
        sum += (s[i] - '0');
    }
    printf("%d",sum);
}

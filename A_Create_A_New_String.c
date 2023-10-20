#include <stdio.h>
#include <string.h>

int main(){
    char str_1[1001], str_2[1001];
    scanf("%s%s", str_1, str_2);
    printf("%d %d\n",strlen(str_1),strlen(str_2));
    printf("%s %s",str_1,str_2);
    return 0;
}

//int str_length(char str[]);

/*int str_length(char str_[])
    {
        int i, count = 0;
        for(i=0;str_[i]!=0;i++){
            count ++;
        }
        return count;
    }*/

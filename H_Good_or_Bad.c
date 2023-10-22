#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int count=0;
        char s[100006];
        scanf("%s",s);
    
        for(int i=0; s[i] != '\0'; i++){
            if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || 
            (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')){
                count = 1;
                break;
            }
    }

        if(count)
            printf("Good\n");
        else
            printf("Bad\n");
    }
    return 0;
    
}
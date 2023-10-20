#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int count_divisible_by_2 = 0;
    int count_divisible_by_3 = 0;

    for(i=0;i<n;i++){
        if(a[i] %2 ==0 && a[i] %3 ==0){
        count_divisible_by_2++;
    }else{
        if(a[i] %2 ==0){
            count_divisible_by_2++;
        }
        else if(a[i] %3 ==0){
            count_divisible_by_3++;
        }
    }
    }

    printf("%d %d", count_divisible_by_2, count_divisible_by_3);

}
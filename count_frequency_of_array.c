#include <stdio.h>
int main(){
    int n;
    printf("n :");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements of the array: ");
    // condition: we should scan until the end of the array
    // that's why here the condition: i<n
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int freq[8] = {0};
    // condition: we should count frequency until the end of the array
    // that's why here the condition: i<n
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    printf("freq : \n");
    // condition: we should print until the end of the frequency array
    // that's why here the condition: i<8
    for(int i=0; i<8; i++){
        if(freq[i] > 0)
            printf("%d -> %d\n",i,freq[i]);
    }

    return 0;
}

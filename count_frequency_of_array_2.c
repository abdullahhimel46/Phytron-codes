// count frequency of all the elements of an array when the input size is unknown!
/*
Step 1: find the maximum size of the array
Step 2: initialize freq[max+i] = {0};
Step 3: find the frequecy
*/

#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of the array, n= ");
    scanf("%d",&n);

    int a[n];
    int mx = 0;
    printf("enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        // finding the max input
        if(a[i] > mx)
            mx = a[i];
    }

    int freq[mx+1];
    // initializing all the index of the frequency array to 0
    for(int i=0; i<mx+1; i++){ 
        freq[i] = 0;
    }

    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }

    printf("freq : \n");
    for(int i=0; i<mx+1; i++){
        if(freq[i] > 0)
            printf("%d -> %d\n",i,freq[i]);
    }

    return 0;
}

#include <stdio.h>
int main(){
    int n;
    printf("n = ");
    scanf("%d",&n);
    int arr[n+1]; //creating an array with an extra index

    // taking input
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    //printing the source array
    printf("source array:   ");
    for(int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    // asking for the position and value
    int pos,val;
    printf("enter pos and val: ");
    scanf("%d%d",&pos,&val);

//** shifting values until reaching to the preferred index or position **
    for(int i=n; i>=pos+1; i--) { 
  //for(int i=6; i>=2+1; i--) [when, i=6 and pos = 2] 
              /* i>=pos+1 means this loop will iterate until reaching
               to the preferred pos, here arr[2] */
        arr[i] = arr[i-1]; //shifting values
    }

// now, arr[2] can be assigned!
    arr[pos] = val; //assigning arr[2] = 100;
    printf("replaced array: ");
    for(int i=0; i<n+1; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
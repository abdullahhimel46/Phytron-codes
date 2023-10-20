#include <stdio.h>
int main()
{
    int n,v,i;
    int pos_sum = 0;
    int neg_sum = 0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&v);

    if(v>0 && v!=0)
        pos_sum+=v;
    else
        neg_sum+=v;
    }

    printf("%d %d",pos_sum,neg_sum);



}
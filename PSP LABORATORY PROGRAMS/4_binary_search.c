#include<stdio.h>
int main()
{
    int a[10],i,n,low,high,mid,key;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the array of elements\n");
    for (i = 0; i<n; i++)
    scanf("%d",&a[i]);
    printf("enter the key elements to be searched\n");
    scanf("%d",&key);

    low=0;
    high=n-1;   
    while (low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
    {
        printf("element %d found at %d position",key,mid+1);
        return 0;
    }
    else if(key<a[mid])
    high=mid-1;
    else
    low=mid+1;
    }
        printf("element not found\n");
        return 0;
     
} 
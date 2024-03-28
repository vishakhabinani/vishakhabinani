#include<stdio.h>
int main()
{
    int a[6],val,k;
    int low=0;
    int high=5;
    int mid=(low+high)/2;
    printf("Enter elements of the array in sorted order\n");
    for(k=0;k<6;k++)
    {
      scanf("%d",&a[k]);
    }
    printf("Enter the value you want to search");
    scanf("%d",&val);
    while(low<=high)
    {
    if(a[mid]<val)
    {
        low=mid+1;
    }
    if(a[mid]==val)
    {
        printf("Element %d was found at index %d",val,mid);
        break;
    }
    else
    {
        high=mid-1;
    }
    }
    return 0;
}
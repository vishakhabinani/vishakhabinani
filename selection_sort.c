#include<stdio.h>
int main()
{
    int a[6],i,j,k;
    int min;
    int temp;
    printf("Enter elements of the array \n");
    for(k=0;k<6;k++)
    {
      scanf("%d",&a[k]);
    }
    printf("ELEMENTS OF ARRAY BEFORE SORTING \n");
    for(k=0;k<6;k++)
    {
      printf("%d \t",a[k]);
    }
    for(i=0;i<5;i++)
    {
      int min=i;
      for(j=i+1;j<6;j++)
      {
        if(a[j]<a[min])
        {
        min=j;
        }
      }  
      if(min!=i)
      {
        temp=a[min];    //swapping min to the first place of the unsorted array and then subsequently making it a part of the sorted array and inc its range.
        a[min]=a[i];
        a[i]=temp;
      }
    }
    printf("\nELEMENTS OF ARRAY AFTER SORTING \n");
    for(k=0;k<6;k++)
    {
      printf("%d \t",a[k]);
    }
    return 0;
}    
#include<stdio.h>
int main()
{
    int a[6],i,j,k;
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
    for(i=1;i<6;i++)
    {
      temp=a[i];    // insertion sort code j always stays one behind i, right shifting keeps happening as range of sorted array increases in each cycle of comparison
      j=i-1;
      while(j>=0 && a[j]>temp)
      {
        a[j+1]=a[j];
        j--;
      }
      a[j+1]=temp;
    }
    printf(" \nELEMENTS OF ARRAY AFTER SORTING \n");
    for(k=0;k<6;k++)
    {
      printf("%d \t",a[k]);
    }
   return 0;

}
#include<stdio.h>
int main()
{
    int a[6];
    printf("Enter values for array (6) \n");
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);

    }
    printf("The values entered were:");
    for(int i=0;i<6;i++){
        printf("%d \n",a[i]);


    }
    int x;
    printf("Enter value to search in the array-> ");
    scanf("%d",&x);
    int k=0;
    while(a[k]!=x)
    {
        k=k+1;
    }
    if(k==6)
    printf("WOMP WOMP");
    else
    printf("found at %d index",k);
    
    
    return 0;
}
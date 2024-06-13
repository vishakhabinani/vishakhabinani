#include<stdio.h>
int max(int x,int y){
    if(x<y){
        return y;
    }
    else
    return x;
}
int main(){
    int n,M;
    int i,j;
    printf("Enter the number of items: \n");
    scanf("%d",&n);
    printf("Enter the knapsack capacity: \n");
    scanf("%d",&M);
    int wt[n],c[n];
    int a[n+1][M+1];
    printf("Enter the weights \n");
    for(i=1;i<n+1;i++){
       scanf("%d",&wt[i]);
    }
     printf("Enter the profits \n");
    for(i=1;i<n+1;i++){
       scanf("%d",&c[i]);
    }
    //initialization of matrix
    for(i=0;i<n+1;i++){
        for(j=0;j<M+1;j++){
            a[0][j]=0;
        }
        a[i][0]=0;
    }
    for(i=1;i<n+1;i++){
        for(j=1;j<M+1;j++){
            if(wt[i]>j){
                a[i][j]=a[i-1][j];
            }
            else{
                a[i][j]=max(a[i-1][j],c[i]+a[i-1][j-wt[i]]);
            }
        }
    }
     //displaying the matrix
     for(i=0;i<n+1;i++){
        for(j=0;j<M+1;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The profit is %d \n",a[n][M]);
    return 0;

}
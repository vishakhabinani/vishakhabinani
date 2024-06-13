#include<stdio.h>
void swap(int *x, int *y){
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int A[5],int lb,int ub){
    int start=lb,end=ub;
    int pivot=A[lb];
    while(start<end){
    while(A[start]<=pivot){
        start++;
    }
    while(A[end]>pivot){
        end--;
    }
    if(start<end){
       swap(&A[start],&A[end]);
 }
    }
   swap(&A[lb],&A[end]);
   return end;
}
 void quicksort(int A[5],int lb,int ub){
    if(lb<ub){
        int loc=partition(A,lb,ub);
        quicksort(A,lb,loc-1);
        quicksort(A,loc+1,ub);
    }
}
int main(){
    int A[5]={3,2,6,1,8};
    quicksort(A,0,4);
    for(int i=0;i<5;i++){
        printf("%d\t",A[i]);
    }
    return 0;
}
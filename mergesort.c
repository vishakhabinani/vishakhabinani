#include<stdio.h>
void merge(int A[5],int lb, int mid, int ub){
    int b[5];
    int i=lb,j=mid+1,k=lb;
    while(i<=mid && j<=ub){
        if(A[i]<A[j]){
            b[k]=A[i];
            i++;
            k++;
        }
        
        else{
            b[k]=A[j];
            j++; 
            k++;
            }
    }
    if(i>mid){
        while(j<=ub){
            b[k]=A[j];
            j++;
            k++;
        }
    }
    if(j>ub){
        while(i<=mid){
            b[k]=A[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++){
        A[k]=b[k];
    }
}
void mergeSort(int A[5],int lb,int ub){
    if(lb<ub){
    int mid=((lb+ub)/2);
    mergeSort(A,lb,mid);
    mergeSort(A,mid+1,ub);
    merge(A,lb,mid,ub);
    }
}
int main(){
    int A[5]={7,4,3,1,2};
    mergeSort(A,0,4);
    printf("Sorted Array: \n");
    for(int i=0;i<5;i++){
        printf("%d\t",A[i]);
    }
    return 0;
    
}
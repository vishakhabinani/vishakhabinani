#include<stdio.h>
void merge(int a[],int lb,int mid,int ub);
 void mergesort(int a[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid); //recursive call
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(int a[],int lb,int mid,int ub){
    int p[ub+1]; //temporary array
    int i=lb,j=mid+1,k=lb;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            p[k]=a[i];
            k++;i++;
            }
     else{
        p[k]=a[j];
        j++;k++;
        }  
        if(i>mid){
            while(j<=ub){
                p[k]=a[j];
                j++;k++;
            }
        }
        if(j>ub){
            while(i<=mid){
                p[k]=a[i];
                i++;k++;
            }
        }
     }
     for(k=lb;k<=ub;k++){
        a[k]=p[k]; //copying to original array
     }
}
int main(){
    int k;
    int s[]={80,6,47,1,30,2,9,11};
    printf("sorted array: \n");
    mergesort(s,0,7);
     for(k=0;k<8;k++){
        printf("%d \t",s[k]);
     }
   return 0;
}


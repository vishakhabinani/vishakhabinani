#include<stdio.h>
int main(){
    int AT[4],P[4],BT[4],CT[4],TAT[4],WT[4],A[4];
    int i,time=0;
    for(i=0;i<4;i++){
        P[i]=i;
        printf("Enter arrival time for %d process: \n",i);
        scanf("%d",&AT[i]);
        A[i]=AT[i];   //copy array that will keep original ATs as per indices(process no.) so after AT is sorted we still have a reference order.
    }
    for(i=0;i<4;i++){
      printf("Enter Burst time for P%d: \n",i);
      scanf("%d",&BT[i]);
      }
      //sort AT[]
      int temp=0;int x=0;
      for(i=0;i<3;i++){
        for(int j=0;j<4-i-1;j++){
            if(AT[j]>AT[j+1]){
              temp=AT[j];
              AT[j]=AT[j+1];
              AT[j+1]=temp;

              x=P[j];
              P[j]=P[j+1];   //keeping track of process as per sorted ATs
              P[j+1]=x;

              }
        }
      }

        i=0;
        int track=0;    //track will keep track of how many processes have been completed out of the 4 processes
        while(track!=4){
        if(time>=A[P[i]]){
          CT[P[i]]=time+BT[P[i]];
          time=CT[P[i]];
          i++;   //i will increment only when ith process has been done. and so will track.
          track++;

        }
        else{
         time=time+1;
        }
}
      

      for(i=0;i<4;i++){
        TAT[i]=CT[i]-A[i];
      }
      for(i=0;i<4;i++){
        WT[i]=TAT[i]-BT[i];
        if(WT[i]<0){
          WT[i]=0;
        }
      }
      printf("PROCESS  AT\t BT\t CT\t TAT\t WT\t \n");
      for(i=0;i<4;i++){
        printf("P%d \t %d\t %d\t %d\t %d\t %d\t \n",i,A[i],BT[i],CT[i],TAT[i],WT[i]);
      }
}

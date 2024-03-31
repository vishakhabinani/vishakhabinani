#include<stdio.h>
int main(){
    int AT[4],BT[4],CT[4],TAT[4],WT[4];
    int i;
    for(i=0;i<4;i++){
        printf("Enter arrival time for %d process in ASC order: \n",i+1);
        scanf("%d",&AT[i]);
        printf("Enter Burst Time for %d process: \n",i+1);
        scanf("%d",&BT[i]);
    }
    int sum=AT[0];
    for(i=0;i<4;i++){
        sum+=BT[i];
        CT[i]=sum;
        
    }
    for(i=0;i<4;i++){
        TAT[i]=CT[i]-AT[i];
      }
      for(i=0;i<4;i++){
        WT[i]=TAT[i]-BT[i];
      }
      printf("PROCESS  AT\t BT\t CT\t TAT\t WT\t \n");
      for(i=0;i<4;i++){
        printf("P%d \t %d\t %d\t %d\t %d\t %d\t \n",i+1,AT[i],BT[i],CT[i],TAT[i],WT[i]);
      }
}
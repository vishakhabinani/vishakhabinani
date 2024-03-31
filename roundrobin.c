#include<stdio.h>
int main(){
    int n,count,tq,i,ct;
    int at[5],bt[5],cot[5],rt[5],tat[5],wt[5];
    printf("Enter the no. of processes \n");
    scanf("%d",&n);

    printf("Enter time quantum \n");
    scanf("%d",&tq);

    count=n; //keep track of fully executed processes
    for(i=0;i<n;i++){
        printf("Enter at for P%d ",i+1);
        scanf("%d",&at[i]);
        printf("Enter bt for P%d ",i+1);
        scanf("%d",&bt[i]);
        rt[i]=bt[i]; //initialization of remaining time with burst time

    }
      
    for(ct=0,i=0;count!=0;){
        if(rt[i]<=tq && rt[i]>0){
            ct=ct+rt[i]; //the process runs fully
            cot[i]=ct;   //so finished process completion time recording
            rt[i]=0; 
            count--;
        }
        else if(rt[i]>0){
            rt[i]=rt[i]-tq;
            ct=ct+tq;
        }
        if(i==n-1){
            i=0; // i has already looped over all processes so relooping to finish incomplete processes
        }
        else if(at[i+1]<=ct){
            i++; //i hasnt run over all processes so simply increment
        }
        else{
          i=0;   
        }
        

    }
      for(i=0;i<n;i++){
        tat[i]=cot[i]-at[i];
      }
      for(i=0;i<n;i++){
        wt[i]=tat[i]-bt[i];
      }
    printf("PROCESS\t AT\t BT\t CT\t TAT\t WT\t \n");
    for(i=0;i<n;i++){
        printf("P%d \t %d\t %d\t %d\t %d\t %d\t \n",i+1,at[i],bt[i],cot[i],tat[i],wt[i]);
      }
  return 0;  
}
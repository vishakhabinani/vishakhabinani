#include<stdio.h>
int main(){
    int i,j;
    int x,y;
    int originalprofit[6]={12,15,7,5,11,30};
    int profit[6]={12,15,7,5,11,30};
    int items[6]={0,1,2,3,4,5};
    int wt[6]={5,3,2,7,6,1};
    int M=20;
    int rwt=20;
    float profeet;
    float fraction;
    for(i=0;i<5;i++){
        for(j=0;j<5-i;j++){
            if(profit[j]<profit[j+1])
            {
                x=profit[j];
                profit[j]=profit[j+1];
                profit[j+1]=x;

                y=items[j];
                items[j]=items[j+1];
                items[j+1]=y;
            }
        }
    }
    i=0;
   while(rwt!=0){
    while(i!=6){    //i needs to traverse the entire items list
    if(wt[items[i]]<=rwt){
        printf("Selected item: i%d \n",items[i]+1);
        rwt=rwt-wt[items[i]];
        profeet=(float)profeet+originalprofit[items[i]];
        i++;
    }
    else{
        printf("Selected item: %d/%d of i%d \n",rwt,wt[items[i]],items[i]+1);
        fraction=(float)rwt / wt[items[i]];
        fraction=fraction * originalprofit[items[i]];
        profeet=(float)(profeet+fraction);
        rwt=0;  //rwt will be set to 0 as this else part implies that now only a fraction of items[i] can be chosen.
        i++;   
    }
   }
   }
    printf("The total profit is %f",profeet);
    return 0;
}
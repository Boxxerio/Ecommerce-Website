#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,sq=0,qt,temp,count=0,bt[20],wt[20],tat[20],rembt[20];
    float awt,atat;
    printf("enter the number of process");
    scanf("%d",&n);
        printf("enter the quantum time");
    scanf("%d",&qt);
     printf("enter number of process burst time");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&bt[i]);
        rembt[i]=bt[i];
    }
    while(1){
        for ( i = 0; i < n ; i++)
        {   temp=qt;
            if (rembt[i]==0)
            {
                count++;
                continue;
            }
            if(rembt[i]>qt){
                rembt[i]=rembt[i]-qt;
            }
            else
             if (rembt[i]>=0)
             {
                temp=rembt[i];
                rembt[i]=0;
             }
             sq=sq+temp;
             tat[i]=sq;
            
        }
        if (n==count)
        {
            break;
        }
        
    }
    printf("process\t burst time\t waiting time\t turn around time\t");
    for ( i = 0; i < n; i++)
    {
        wt[i]=tat[i]-bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t%d\t\t%d\t\t%d\t\n",i+1,bt[i],wt[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("average waiting time %f",awt);
    printf("average turn around time %f",atat);
    return 0;
    
}
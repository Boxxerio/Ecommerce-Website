#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n,t,p[30],bt[30],wt[30],tat[30];
    float awt,atat;
    printf("enter the number of process");
    scanf("%d",&n);
    printf("enter the process number");
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&p[i]);
    }
      printf("enter the burst time of the process");
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&bt[i]);
    }
    // applying bubble sort
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (bt[j]>bt[j+1])
            {
                t=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=t;

                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
            }
            
        }
        
    }
 
    printf("process\t burst time\t waiting time\t turn around time\t\n");
    for ( i = 0; i < n; i++)
    {
        wt[i]=0;
        tat[i]=0;
        for ( j = 0;  j< i; j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t%d\t\t%d\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("average waiting time %f",awt);
    printf("average turn around time %f",atat);
    return 0;
}
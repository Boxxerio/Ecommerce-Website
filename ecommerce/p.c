#include<stdio.h>
int main(){
    int i,j,n,pos,t,pr[20],bt[20],tat[20],wt[20];
    float awt=0,atat=0;
     printf("enter number of process");
    scanf("%d",&n);
    printf("enter number of process burst time");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&bt[i]);
    }
     printf("enter the priority");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&pr[i]);
    }
    for(i=0;i<n;i++){
        pos=i;
        for(j=n+1;j<n;j++){
            if(pr[j]<pr[pos]){
                pos=j;
            }
        }

        t=pr[i];
        pr[i]=pr[pos];
        pr[pos]=t;

        t=bt[i];
        bt[i]=bt[pos];
        bt[pos]=t;
    }
    printf("process\t burst time\t priority\t waiting time\t turn around time\n");
    for ( i = 0; i < n; i++)
    {
        wt[i]=0;
        tat[i]=0;
          for ( j = 0; j < i; j++)
          {
            wt[i]=wt[i]+bt[j];
          }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t %d\t\t %d\t\t %d\t\t  %d\t\t\n",i+1,bt[i],pr[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("average waiting time=%f\n",awt);
     printf("average turn around time=%f\n",atat);
     return 0;
}

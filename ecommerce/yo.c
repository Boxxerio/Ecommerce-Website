#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("give the three values");
    scanf("%d%d%d",n1,n2,n3);
    if(n1>=n2&&n1>=n3){
           printf("n1 greatest");
    }
     if(n2>=n1&&n2>=n3){
           printf("n2 greatest");
    }
     if(n3>=n1&&n3>=n2){
           printf("n3 greatest");
    }
   
}
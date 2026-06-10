#include<stdio.h>
int main()
{
    int t1,t2;
    printf("First room temperature;");
    scanf("%d",&t1);
    printf("Second room temperature:");
    scanf("%d",&t2);
    if(t1>t2)
    {printf("Glen must stay in second room and mark must stay in first room:%d",t1);
    }
    else{
        printf("Glen must stay in first room and mark must stay in second room:%d",t2);
    }
}
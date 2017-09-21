#include<stdio.h>
#include<sys/time.h>

int main(){
    struct timeval begin,end;
    gettimeofday(&begin,NULL);
    int i,sum=0;
    for(;i<=10000;i++)
        sum+=i;

    gettimeofday(&end,NULL);
    printf("%d",end.tv_usec - begin.tv_usec);
    printf("sum:%d\n",sum);
    return 0;
}

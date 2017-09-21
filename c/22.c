#include<stdio.h>

int find(char* a,int n){
    char candicate;
    int nTimes,i;
    for(i=nTimes=0;i<n;i++)
    {
        if(nTimes == 0){
            candicate = a[i];
            nTimes =1;
         }
        else{
              if(candicate ==a[i])
                    nTimes++;
              else
                    nTimes--;
            }

    } return candicate; 
}

int length(char*s){
    char*p = s;
    int l = 0;
    while(*p!= NULL){
        p++;
        l++;
    }
    return l;
}

int main(){
    char*a ="aaabbacdcdbsa";
    char s = find(a,length(a));
    printf("%c\n",s);

    return 0;
}

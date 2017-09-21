#include<stdio.h>
int Count(int v){
    int num=0;
    while(v){
        if(v%2==1){
        num++;
    }
    v = v/2;
    }
    return num;
}

void to2(int a){
    int s[20],i=0,rem;
    while(a){
        rem = a%2;
        a = a/2;
        s[i++] = rem;
    }
    
    while(i>0)
        printf("%d",s[--i]);
    printf("\n");
}

int Count2( int v){
    int num=0;
    while(v){
      num += v & 0x01;
      v>>=1;
    }
    return num;
}



int main(){
    int a = 124;    
  //  a<<=1;
  //  printf("%d\n",a);
    to2(a);
    to2(a-1);
    to2(a-2);
    //printf("aa\n");
    //printf("%d\n",Count2(a));
    //printf("%d\n",Count(a));
    return 0;
}

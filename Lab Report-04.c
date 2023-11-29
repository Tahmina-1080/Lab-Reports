#include<stdio.h>
#include<string.h>
int main(){
    char c[1000];
    scanf("%s",&c);

    int s,sum=0,i,d;
    s=strlen(c);
    for(i=0;i<s;i++){
        char ch=c[i];
        int d=ch-'0';
        if(d>=0 && d<=9){
            sum=sum+d;
        }
    }
    printf("sum=%d\n",sum);
return 0;
}

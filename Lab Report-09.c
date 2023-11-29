#include<stdio.h>
int lcm(int a,int b){
 int max=(a>b)? a: b;
 while(1){
    if(max%a==0 && max%b==0){
        return max;
    }
    ++max;
 }
}
int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    if(a>=0 && b>=0){
        printf("The LCM of %d and %d is:%d\n",a,b,lcm(a,b));
    }else{
        printf("Please enter non-negative integers.\n");
    }
return 0;
}

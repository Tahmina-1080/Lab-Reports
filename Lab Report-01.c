#include<stdio.h>
int add(){
int a,b;
printf("Enter two number:");
scanf("%d%d",&a,&b);
printf("Addition of a and b:%d\n",a+b);
return 0;
}
int sub(){
int c,d;
printf("Enter two number:");
scanf("%d%d",&c,&d);
printf("Subtraction of c and d:%d\n",c-d);
return 0;
}
int mul(){
int x,y;
printf("Enter two number:");
scanf("%d%d",&x,&y);
printf("Multiplication of x and y:%d\n",x*y);
return 0;
}
int div(){
int m,n;
printf("Enter two number:");
scanf("%d%d",&m,&n);
printf("Division of m and n:%d\n",m/n);
return 0;
}
int main(){
    printf("%d\n",add());
    printf("%d\n",sub());
    printf("%d\n",mul());
    printf("%d\n",div());
return 0;
}

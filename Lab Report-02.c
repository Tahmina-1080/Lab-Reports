#include<stdio.h>
//using call by value
void swapByvalue(int x,int y){
 int temp=x;
 x=y;
 y=temp;
}
//using call by reference
void swapByreference(int *x,int *y){
 int temp=*x;
  *x=*y;
  *y=temp;
}
int main(){
    int num1=5, num2=10;
    printf("Original numbers num1=%d,num2=%d\n",num1,num2);
    swapByvalue(num1,num2);
    printf("After swapByvalue: num1=%d,num2=%d\n",num1,num2);
    swapByreference(&num1,&num2);
    printf("After swapByvalue: x=%d,y=%d\n",num1,num2);
return 0;
}

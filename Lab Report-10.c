#include<stdio.h>
int n,arr[100];
int arraySum(int i){
  if(i==n)return 0;
  return arr[i]+arraySum(i+1);
}
int main(){
    printf("Enter the number n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    printf("Sum of Array:%d",arraySum(0));
return 0;
}

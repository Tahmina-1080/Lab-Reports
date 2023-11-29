#include<stdio.h>
int main(){
    int n,arr[100],cpy[100];
    printf("Enter the number n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    printf("Before Copying:");
    for(int i=0;i<n;i++)printf("%d",arr[i]);
    printf("\nAfter Copying:");
    for(int i=0;i<n;i++){
        *(cpy+i) = *(arr+i);
    }
    for(int i=0;i<n;i++)printf("%d",cpy[i]);
return 0;
}

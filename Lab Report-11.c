#include<stdio.h>
int main(){
    int n, arr[100];
    printf("Enter the number n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    for(int i=0,j=n-1;i<(n/2);i++,j--){
        int *temp = *(arr+i);
        *(arr+i) = *(arr+j);
        *(arr+j) = temp;
    }
    for(int i=0;i<n;i++)printf("%d",arr[i]);
return 0;
}

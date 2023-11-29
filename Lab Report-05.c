#include<stdio.h>
int reverse(int n,int revrs){
 if(n==0){
    return revrs;
 }else{
   int lastdigit=n%10;
   revrs=revrs*10+lastdigit;
   return reverse(n/10,revrs);
 }
}
int isPalindrome(int n){
int rev =reverse(n,0);
if(n==rev){
    return 1;
}else{
 return 0;
}
}
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(isPalindrome(num)){
        printf("%d is a palindrome.\n",num);
    }else{
        printf("%d is not a palindrome.\n",num);
    }
return 0;
}

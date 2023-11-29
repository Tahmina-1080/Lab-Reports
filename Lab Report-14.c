#include<stdio.h>
#define AP printf("You got 4.00\nYour Grade is A+\n");
#define A printf("You got 3.75\nYour Grade is A\n");
#define AM printf("You got 3.50\nYour Grade is A-\n");
#define BP printf("You got 3.25\nYour Grade is B+\n");
#define B printf("You got 3.00\nYour Grade is B\n");
#define BM printf("You got 2.75\nYour Grade is B-\n");
#define CP printf("You got 2.50\nYour Grade is C+\n");
#define C printf("You got 2.25\nYour Grade is C\n");
#define D printf("You got 2.00\nYour Grade is D\n");
#define F printf("You got 0.00\nYour Grade is F\n");

int main(){
    int mark;
    printf(" Enter Your Mark:");
    scanf("%d",&mark);
    if(mark >= 80)AP
        else if(mark >= 75 && mark < 80)A
        else if(mark >= 70 && mark < 75)AM
        else if(mark >= 65 && mark < 70)BP
        else if(mark >= 60 && mark < 65)B
        else if(mark >= 55 && mark < 60)BM
        else if(mark >= 50 && mark < 55)CP
        else if(mark >= 45 && mark < 50)C
        else if(mark >= 40 && mark < 45)D
        else F
return 0;
}

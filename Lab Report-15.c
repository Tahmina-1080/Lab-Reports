#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

    FILE *fip, *fop;
    int id[100];
    float cgpa[100];
    char name[100][30];
    fip = fopen("input.txt","r");
    fop = fopen("output.txt","w");

    if(!fip || !fop){
        printf("ERROE!\nCould Not Open The File\n");
        exit(-1);
    }
    for(int i=1;i<=5;i++){
        fscanf(fip,"%s%d%f\n",name[i],id[i],cgpa[i]);
        printf("Student Information:\n");
        printf("Name: %s\nID : %d\nCGPA: %.2f",name[i],id[i],cgpa[i]);
        fprintf(fop,"Name: %s\nID: %d\nCGPA: %.2f",name[i],id[i],cgpa[i]);
    }
    fclose(fip);
    fclose(fop);
return 0;
}

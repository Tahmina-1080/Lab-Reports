#include<stdio.h>
#include<string.h>
struct univesity{
  char name[20];
  int id;
  float cgpa;
}student[100],temp;

void roll_sort(int n){
 for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if( student[i].id > student[j].id){
            temp=student[j];
            student[j]=student[i];
            student[i]=temp;
        }
    }
 }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s%d%f",student[i].name,&student[i].id,&student[i].cgpa);
    }
    roll_sort(n);
    for(int i=0;i<n;i++){
        printf("%s %d %.2f\n",student[i].name,student[i].id,student[i].cgpa);
    }

return 0;
}

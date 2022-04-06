#include <stdio.h>

int main(){
  float a,b;
  scanf("%f%f",&a,&b);
  if(a==0||b==0){
    printf("No quadrant");
    return 0;
  }
  if(a>0){
    if(b>0){
      printf("Q1");
    }else{
      printf("Q4");
    }
  }else{
    if(b>0){
      printf("Q2");
    }else{
      printf("Q3");
    }
  }
}

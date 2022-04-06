#include <stdio.h>

int main(){
  int a,i;
  scanf("%d",&a);
  if(a>0){
    if(a%2==0){
      a=a-1;
    }
    for(i=1;i<=a;){
     printf("%d ",a);
     a=a-2;
    }
  }else{
    printf("Unable to print the sequence");
  }
}
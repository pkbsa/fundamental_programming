#include <stdio.h>

int main(){
  int a;
  scanf("%d",&a);
  if(a>=0&&a<=127){
      if(a>=48&&a<=57){
        printf("The ASCII value of %d is a Number '%c'",a,a);
        return 0;
      }
      if(a>=65&&a<=90){
        printf("The ASCII value of %d is a Uppercase Letter '%c'",a,a);
         return 0;
      }
      if(a>=97&&a<=122){
      printf("The ASCII value of %d is a Lowercase Letter '%c'",a,a);
       return 0;
      }
      printf("The ASCII value of %d is a Control character or Special character '%c'",a,a);
  } else {
    printf("Invalid ASCII value");
  }
}
  
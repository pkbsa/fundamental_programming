/* Type Your Code here */
#include <stdio.h>

int main(){
  int n,i;
  scanf("%d",&n);
  for(i=1;i<=100;i++){
    if(i%n==0){
      printf("%d ",i);
    }
  }
}
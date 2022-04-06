#include <stdio.h>

int main(){
  int sec,hr,min,s;
  scanf("%d",&sec);
  hr=sec/3600;
  min=(sec-hr*3600)/60;
  s=sec%60;
  printf("%d:%d:%d",hr,min,s);
}
#include <stdio.h>

int main(){
  char c;
  scanf("%c",&c);
  if(c>='a'&&c<='z'){
    c=c-' ';
  }
  switch(c){
    case 'M':printf("Mastery");
             break;
    case 'A':printf("Altruism");
             break;
    case 'H':printf("Harmony");
             break;
    case 'I':printf("Integrity");
             break;
    case 'D':printf("Determination");
             break;
    case 'O':printf("Originality");
             break;
    case 'L':printf("Leadership");
             break;
    default :printf("Invalid character");  
  }
}
  
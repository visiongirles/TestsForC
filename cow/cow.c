#include <stdio.h> 
int main(void){

  int n;
    printf("How many cows do you want?\n");
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
  printf("^__^\n");
  printf("(oo)\\_______\n");
  printf("(__)\\       )\\/\\\n");
  printf("%5c%c%c%c%c%c%c%c%c\n",'|','|','-','-','-','-','w',' ','|');
  printf("%5c%c%c%c%c%c%c%c%c\n",'|','|',' ',' ',' ',' ',' ','|','|');
    };
  return(0);
}
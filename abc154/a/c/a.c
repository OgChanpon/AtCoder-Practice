#include <stdio.h>
#include <string.h>

int main(void){
  char s[15], t[15], u[15];
  int a, b;

  scanf("%s %s", s, t);
  scanf("%d %d", &a, &b);
  scanf("%s", u);

  if(strcmp(s, u) == 0){
    a --;
  }
  if(strcmp(t, u) == 0){
    b --;
  }
  printf("%d %d", a, b);

  return 0;
}

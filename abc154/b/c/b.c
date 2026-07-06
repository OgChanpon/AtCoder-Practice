#include <stdio.h>
#include <string.h>

int main(){
  char s[110];

  scanf("%s", s);

  for(int i = 0; i < strlen(s); i ++){
    printf("x");
  }

  return 0;
}

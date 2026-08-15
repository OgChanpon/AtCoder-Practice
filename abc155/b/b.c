#include <stdio.h>

int main(){
  int n, a[105];
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  for(int j = 0; j < n; j++){
    if(a[j] % 2 == 0){
      if(a[j] % 3 != 0 && a[j] % 5 != 0){
        printf("DENIED\n");
        return 0;
      }
    }
  }
  printf("APPROVED\n");
  
  return 0;
}

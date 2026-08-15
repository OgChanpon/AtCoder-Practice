#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  int x = *(int *)a;
  int y = *(int *)b;
  
  if(x > y) return 1;
  if(x < y) return -1;
  return 0;
}

int main(){
  int n;
  int a[200005];

  scanf("%d", &n);
  for(int i = 0; i < n; i ++){
    scanf("%d", &a[i]);
  }
  qsort(a, n, sizeof(int), compare);

  for(int i = 0; i < n - 1; i ++){
    if(a[i] == a[i + 1]){
      printf("NO\n");
      return 0;
    }
  }
  printf("YES\n");

  return 0;
}

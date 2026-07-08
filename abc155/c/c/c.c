#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int compare(const void *a, const void *b){

  return strcmp((const char *)a, (const char *)b);
}

int main(){
  int n;
  char s[200005][15];
  int current_cnt = 1;
  int max_cnt = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%s", s[i]);
  }
  qsort(s, n, sizeof(s[0]), compare);

  for(int j = 0; j < n; j++){   
    if(j < n - 1 && strcmp(s[j], s[j + 1]) == 0){
      current_cnt++;
    }
    else{
      if(current_cnt > max_cnt){
        max_cnt = current_cnt;
      }
      current_cnt = 1;
    } 
  }
  
  current_cnt = 1;
  for(int k = 0; k < n; k++){
    if(k < n - 1 && strcmp(s[k], s[k + 1]) == 0){
      current_cnt++;
    }
    else{
      if(current_cnt == max_cnt){
        printf("%s\n", s[k]);
      }
      current_cnt = 1;
      }
  }

  return 0;
}

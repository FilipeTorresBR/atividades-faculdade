#include <stdio.h>

int main(){
  int num = 2, count = 0;
  while(num <= 20){
    count = 0;
    for(int i = 1; i<=num; i++){
      if(num % i == 0){
        count++;
      }
    }
    if(count == 2){
      printf("%d é primo\n", num);
    }
  num++;
  }

return 0;
}
#include <stdio.h>

void pattern(int count){
  for (int i = count; i > 0; i--){
      for (int j = 0; j < i; j++) {
          printf("*");
      }
      printf("\n");
  }
}

int main()
{
    int num;
    printf("Enter pattern size :");
    scanf("%d",&num);
    pattern(num);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int b;
    int num;
    int i;
  srand(time(NULL));
   num = rand() % 9 + 1;
    
    scanf("%d", &i);
    if (i == num) {printf("correct");}
    else {printf("wrong");}
    return 0;
}

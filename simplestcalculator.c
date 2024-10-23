#include <stdio.h>

int func1();

int main() {
  func1();
  return 0;
}

int func1() {
  double a, b, res;
  char op;
  int validDivision = 1;
 scanf("%lf %c %lf", &a, &op, &b);

  if (op == '*') res = a * b;
  else if (op == '/'){if (b != 0)  res = a / b;
  else printf("invalid division");
      validDivision = 0;
  }
  else if (op == '-')res = a - b;
  else if (op == '+')res = a + b;
  else {printf("error motherfucker"); }
  if (validDivision == 1){
  printf("%lf", res);}
  return 0;
}


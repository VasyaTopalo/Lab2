#include <stdio.h>

int main() {
  float a, b, c, y;
  printf("Задайте три числа:\n");

  printf("\nВведіть число a: ");
  scanf("%f", &a);

  printf("Введіть число b: ");
  scanf("%f", &b);

  printf("Введіть число c: ");
  scanf("%f", &c);

  // Обчислення
  y = ((3*a - 4*b + 5*c) / (a*b + 2*b*c + 3*a*c)) - ((a*b - c) / 4);

  //Результати
  printf("\n***Результати***\n");
  printf("Число a = %d\n", a);
  printf("Число b = %d\n", b);
  printf("Число c = %d\n\n", c);
  printf("Відповідь: ");
  printf("y = %.2f", y);
}

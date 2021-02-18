#include <stdio.h>
#include <math.h>

int main() {
  int a, z, y;
  printf("Задайте три числа:\n");

  printf("\nВведіть число a: ");
  scanf("%d", &a);

  printf("Введіть число y: ");
  scanf("%d", &y);

  printf("Введіть число z: ");
  scanf("%d", &z);

  // Обчислення
  float x = a * sqrt(pow(y, 2) - 2*a) + pow(cos(z), 2);

  //Результати
  printf("\n***Результати***\n");
  printf("Число a = %d\n", a);
  printf("Число y = %d\n", y);
  printf("Число z = %d\n\n", z);
  printf("Відповідь: ");
  printf("x = %.2f", x);


}

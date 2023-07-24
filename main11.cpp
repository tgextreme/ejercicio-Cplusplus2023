#include <iostream>


void sumar(int a, int b) {
  printf("el resultado es %d",(a+b));
}
int sumarF(int a, int b) {
  return a+b;
}
int main() {
  sumar(5,5);
  int a=sumarF(5,5);
  printf("el resultado es %d", a);
  return 0;
}
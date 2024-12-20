int main() {
  int x = 10;
  int *ptr = &x;
  *ptr = 20;
  printf("%d\n", x); // Output: 20

  int y = 30;
  ptr = &y;
  *ptr = 40;
  printf("%d\n", x); // Output: 20 (unexpected)

  return 0;
}
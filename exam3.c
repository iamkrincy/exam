#include <stdio.h>

main()
 {

  int n, reverse = 0, digit;

  printf("Enter an integer= ");
  scanf("%d", &n);

  while (n != 0) 
  {
    digit = n % 10;
    reverse = reverse * 10 + digit;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);
}
/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/

#include <iostream>

void prime_factor(long int n) {

  int i = 2;
  while (i * i <= n) {
    if (n % i == 0) {
      std::cout << i << "\n";
      n /= i;
    } else
      i++;
  }
  if (n > 1)
    std::cout << n << "\n";
}

int main(int argc, char const *argv[]) {
  prime_factor(600851475143);
  return 0;
}
/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/
#include <iostream>
#include <string>
#include <vector>

std::string reverse_string(std::string string) {
	std::string reversed_string;
	std::copy (string.rbegin(), string.rend(), std::back_inserter(reversed_string));
	return reversed_string;
}

void largest_palindrome() {
	//std::vector <std::string> palindromes_vector;
	std::string largest = "0";
	for (unsigned int i = 999; i >= 100; --i) {
		for (unsigned int j = 999; j >= i; --j) {
			std::string product = std::to_string(i * j);
			std::string reverse_product = reverse_string(product);
			if (product == reverse_product && (i * j > std::stoi(largest))) {
				std::cout << "New largest Palindrome : " << i << " * " << j << " = " << product << "\n";
				largest = product;
//				palindromes_vector.push_back(product);
			}
		}
	}
}

int main(int argc, char const *argv[]) {
	#pragma omp parallel
	{
	largest_palindrome();
	}
	return 0;
}
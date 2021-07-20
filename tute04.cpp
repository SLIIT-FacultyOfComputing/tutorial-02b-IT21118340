/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n-r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

// function to calculate factorial
long Factorial(int no){
// declaring varialbes
	int fac = 1;
	
// calculate factorial
	for (int c = no; c >= 1; c--){
		fac = fac * c;
	}
	
// output factorial
	return fac;
}

// function to calculate the function called nCr [= n!/ r!(n-r)!] 
long nCr(int n, int r){
// call function Factorial(int no)
	return (Factorial(n) / (Factorial(r) * Factorial(n - r)));
}

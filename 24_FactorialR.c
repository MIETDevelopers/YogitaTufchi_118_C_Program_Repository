//Name: Yogita Tufchi
//Program: Print factorial using recursion.	(I have doubts in this program)		

#include<stdio.h>  //Pre-process directive to include standard input and output functions header file
	long int multiplyNumbers(int n);
	int main() {
    	int n;
    	printf("Enter a positive integer: ");
    	scanf("%d",&n);
    	printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    	return 0;
	}

	long int multiplyNumbers(int n) {
    	if (n>=1)
        	return n*multiplyNumbers(n-1);
    	else
        	return 1;
}
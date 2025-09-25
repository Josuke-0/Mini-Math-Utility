#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Functions
void checkPrime();
void checkArmstrong();
void checkFactorial();
void checkDigit();
void checkSmallNum();
void checkCalci();

int main() {
	int number;
	do {
		//This is the menu
		printf("***** Mini Math Utility ***** \n");
		printf("1. Check Prime Number \n");
		printf("2. Check Armstrong Number \n");
		printf("3. Factorial of a Number \n");
		printf("4. Check if Character is Digit \n");
     	printf("5. Find Smallest Number \n");
    	printf("6. Simple Calculator \n");
	    printf("7. Exit \n");
     	printf("Enter your choice :");
	    scanf("%d", &number);
	    
	    switch(number) {
	    	case 1:
	    		checkPrime();
	    		break;
	    	case 2:
	    		checkArmstrong();
	    		break;
	    	case 3:
	    	    checkFactorial();
				break;
			case 4:
			    checkDigit();
				break;
			case 5:
			    checkSmallNum();
				break;
			case 6:
			    checkCalci();
			    break;
			case 7:
			    printf("You Exited the program, Thank you! \n");
				break;
			default:
			    printf("Invalid choice, Try again!! \n");
		}
	} while(number != 7);
	
	return 0;
}

//To check Prime numbers
void checkPrime() {
	int i;
	int n;
	
	printf("Enter a Number :");
	scanf("%d", &n);
	
	if(n <= 1) {
		printf("Not a Prime Number \n");
		return;
	}
	
	for (i = 2; i <= sqrt(n); i++) {
	   if (n % i == 0) {
       printf("The number you entered is not a prime number\n");
       return;
	   }
	}
	
	printf("The number you entered is a prime number\n");
}

//To check Armstrong numbers
void checkArmstrong() {
	int n, original, digit, sum = 0;
	printf("Enter a Number: ");
	scanf("%d", &n);
	
	original = n;
	while(n > 0) {
		digit = n % 10;
		sum += digit * digit * digit;
		n /= 10;
	}
	
	if(sum == original)
	printf("%d is an Armstrong Number \n", original);
	else 
	printf("%d is not an Armstrong Number \n", original);
}

//To check factorial numbers
void checkFactorial() {
	int n;
	int i;
	
	printf("Enter a number :");
	scanf("%d", &n);
	
	long long fact = 1;
	for(i = 1; i <= n; i++) {
		fact = fact * i;
	}
	printf("The factorial of %d is %lld \n", n, fact);
	
}

//To check Digit
void checkDigit() {
	char ch;
	
	printf("Enter a character :");
	scanf(" %c", &ch);
	
	if(ch >= '0' && ch <= '9') {
		printf("Character is a digit \n");
	} else {
		printf("Character is not a digit \n");
	}
}

//To check the smallest number
void checkSmallNum() {
	int i, n, num, smallest;
	
	printf("How many numbers do you want to enter?");
	scanf("%d", &n);
	
	if(n <= 0) {
		printf("Invalid Number");
		return;
	}
	
	printf("Enter number 1 :");
	scanf("%d", &smallest);
	
	for(i = 2; i <= n; i++) {
		printf("Enter number %d: ", i);
		scanf("%d", &num);
		if(num < smallest) {
			smallest = num;
		}
	}
	
	printf("The smallest number is: %d \n", smallest);
}

//This is a simple calculator
void checkCalci() {
	char operater;
	double num1, num2, result;
	
	printf("Enter an operator (+, -, *, /): ");
	scanf(" %c", &operater);
	
	printf("Enter the first Number: ");
	scanf("%lf", &num1);
	
	printf("Enter the second Number: ");
	scanf("%lf", &num2);
	
	switch(operater) {
		case '+':
			result = num1 + num2;
			printf("Result: %.2lf \n", result);
			break;
			
			case '-':
			result = num1 - num2;
			printf("Result: %.2lf \n", result);
			break;
			
			case '*':
			result = num1 * num2;
			printf("Result: %.2lf \n", result);
			break;
			
			case '/':
			if(num2 != 0) {
				result = num1 / num2;
				printf("Result: %.2lf \n", result);
			} else {
		printf("Error : Not defined \n");
	}
	break;
	default:
		printf("Invalid \n");
	}
}


#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>


#ifndef __CHARCODES__
#define __CHARCODES__

// Operations
#define  DIVISION  1
#define  MULTIPLICATION  2
#define  ADDITION  3
#define  SUBTRACTION  4
#define  MODULUS  5
#endif


int main() {

	//Declare and intitalize variables
	int operand1 = 0;
	int operand2 = 0;
	int Operations = -1;
	int looper = 1;	
	char cont = ' ';

	//Loops to prompt user for input for operands
	//Will continue to prompt user for either operand if out of stated bounds
	//Use of the break command prevents infinte loops as long as input is 
	//within the enforced bounds
	
	while (looper == 1) {



		while (looper == 1) {

			printf("Please enter a number for operand 1:\n");
			scanf("%d", &operand1);
			rewind(stdin);
			if (operand1 <= 1000 && operand1 >= -1000) {
				break;
			}
			else
				printf("ERROR! INVALID ENTRY, Number must be [-1000, 1000] please re-enter!\n");

		}

		while (looper == 1) {

			printf("Please enter a number for operand 2:\n");
			scanf("%d", &operand2);
			rewind(stdin);
			if (operand2 <= 1000 && operand1 >= -1000) {
				break;
			}
			else
				printf("ERROR! INVALID ENTRY, Number must be [-1000, 1000] please re-enter!\n");

		}

		printf("Please select an operation:\n1. Division\n");
		printf("2. Multiplication\n3. Addition\n4. Subtraction\n5. Modulus\n");
		scanf("%d", &Operations);
		rewind(stdin);

		//Switch statement to perform the selected operation	
		//If the user selects Division, the program will check if the second operand is 0	
		//If the user selects Modulus, the program will check if the second operand is 0
		//If the user selects any other operation, the program will perform the operation
		//If the user selects an invalid operation, the program will prompt the user to select a valid operation

			switch (Operations) {

			case DIVISION:
				if (operand2 == 0) {
					printf("ERROR! Division by zero is not allowed!\n");
					break;
				}
				else {
					printf("You've selected Division!\n");
					printf("The result of %d / %d is: %d\n", operand1, operand2, (operand1 / operand2));
					break;
				}
			case MULTIPLICATION:
				printf("You've selected Multiplication!\n");
				printf("The result of %d * %d is: %d\n", operand1, operand2, (operand1 * operand2));
				
				break;

			case ADDITION:
				printf("You've selected Addition!\n");
				printf("The result of %d + %d is: %d\n", operand1, operand2, (operand1 + operand2));
				break;
			case SUBTRACTION:
				printf("You've selected Subtraction!\n");
				printf("The result of %d - %d is: %d\n", operand1, operand2, (operand1 - operand2));
				break;
			case MODULUS:
				if (operand2 == 0) {
					printf("ERROR! Modulus by zero is not allowed!\n");
					break;
				}
				else {
					printf("You've selected Modulus!\n");
					printf("The result of %d %% %d is: %d\n", operand1, operand2, (operand1 % operand2));
					break;

				}
			default:
				printf("ERROR! INVALID ENTRY, Please select a valid operation!\n");
				break;
			}
			
		

		//Query user if they would like to continue
        //If user enters Y or y, the program will continue
		//If user enters N or n, the program will terminate
		//If user enters anything else, the program will prompt the user to enter a valid input
		
		while (looper == 1) {
			printf("Would you like to continue? (Y/N)\n");
			scanf("%c", &cont);
			rewind(stdin);
			if (cont == 'Y' || cont == 'y') {
				looper = 1;
				break;
			}
			else if (cont == 'N' || cont == 'n') {
				looper = 0;
				printf("Goodbye! Thank you for using my console calculator!\n");
			}
			else {
				printf("ERROR! INVALID ENTRY, Please enter a valid input!\n");
				looper = 1;
			}

		}
	



	}

	_getch();
	return 0;

}




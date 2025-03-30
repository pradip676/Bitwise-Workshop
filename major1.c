/*
 * Name: Pradip Sapkota (ps1093)
 * Course: CSCE 3600.004 
 * Date: 03/10/2025
 * Description: This program contains the main() function and overall menu for bitwise operations.
 *              This is responsible for handling and validating user input while calling the user's choice
 *              menu.
 */


#include "major1.h"
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int choice;  // user's menu selection
    unsigned int num; // 32-bit num for user input
    int shift;  //shifting position for rotate-right
    long user_input;  // long var to validate user's input

    do {
        // (1) Display the menu
        printf("\nEnter the menu option for the operation to perform:\n");
        printf("(1) Count Leading Zeroes\n");
        printf("(2) Endian Swap\n");
        printf("(3) Rotate-right\n");
        printf("(4) Parity\n");
        printf("(5) EXIT\n");
        printf("--> ");

        // (2) Read the user's response for menu selection
        if (scanf("%d", &choice) != 1) {
            printf("Error: Invalid input. Please enter a number.\n");
            while (getchar() != '\n');  
            continue;
        }
        while (getchar() != '\n'); 

        if (choice == 5) {
            printf("Program terminating. Goodbye...\n");
            break;
        }

        // (3) Prompt and validate the user's 2nd input of 32-bit num
        if (choice >= 1 && choice <= 4) {
            while (1) {
                printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                if (scanf("%ld", &user_input) == 1 && user_input >= 1 && user_input <= 4294967295) {
                    num = (unsigned int) user_input;
                    while (getchar() != '\n');  
                    break;
                }
                while (getchar() != '\n'); 
            }
        }

        // (4) Prompt and validate the user input for rotate right 
        if (choice == 3) {
            while (1) {
                printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
                if (scanf("%ld", &user_input) == 1 && user_input >= 0 && user_input <= 31) {
                    shift = (int) user_input;
                    while (getchar() != '\n');  
                    break;
                }
                while (getchar() != '\n');
            }
        }

        // (5) function call for specified operation (user selection)
        switch (choice) {
            case 1:  // count leading zeroes
                printf("The number of leading zeroes in %u is %d\n", num, countLeadingZeros(num));
                break;
            
            case 2:  // Endian swap
                printf("Endian swap of %u gives %u\n", num, endianSwap(num));
                break;
            
            case 3:  // Rotate right
                printf("%u rotated by %d position gives %u\n", num, shift, rotateRight(num, shift));
                break;
            
            case 4: // Parity
                printf("Parity of %u is %d\n", num, compute_parity(num));
                break;
            
            default: 
                printf("Error: Invalid option. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

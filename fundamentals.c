// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
// Declare Macros
#define BUFFER_SIZE		80
#define NUM_INPUT_SIZE  10
// Include the header file
#include "fundamentals.h"

void fundamentals(void) {
	/* Version 1 */
	
	// Display a message to indicate the start of the demo
	printf("*** Start of Indexing Strings Demo ***\n");

	// Declare Variables
	char buffer1[BUFFER_SIZE];
	char numInput[NUM_INPUT_SIZE];
	size_t position;

	// Using a do-while loop to prompt the user to input a string and a position until they enter "q" to quit
	do {
		// Prompt the user to input a non-empty string
		printf("Type not empty string (q - to quit) : \n");
		fgets(buffer1, BUFFER_SIZE, stdin);
		// Remove the newline character at the end of the string
		buffer1[strlen(buffer1) - 1] = '\0';
		// Check if the user entered "q" to quit
		if (strcmp(buffer1, "q") != 0) {
			// Prompt the user to input a position within the string
			printf("Type the character position within the string: \n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);
			// Remove the newline character at the end of the string
			numInput[strlen(numInput) - 1] = '\0';
			// Convert the position input to an integer
			position = atoi(numInput);

			// Check if the position input is valid
			if (position >= strlen(buffer1)) {
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduced to max. availbale\n");
			}
			// Print the character found at the specified position within the string
			printf("The character found at %d position is \'%c\'\n",
				(int)position, buffer1[position]);
			}	
		}while (strcmp(buffer1, "q") != 0);
	// Display a message to indicate the end of the demo
	printf("*** End of Indexing Strings Demo ***\n\n");


	/* Version 2 */

	// Display a message to indicate the start of the demo
	printf("*** Start of Measuring Strings Demo ***\n");

	// Declare Variables
	char buffer2[BUFFER_SIZE];

	// Using a do-while loop to prompt the user to input a string and a position until they enter "q" to quit
	do{
		// Prompt user to input a string
		printf("Type a string (q - to quit):\n");
		// Read the string entered by user and stores it in the "buffer2" array
		fgets(buffer2, BUFFER_SIZE, stdin);	
		// Removes the newline character at the end of the string
		buffer2[strlen(buffer2) - 1] = '\0';

		// Check if the user entered "q" to quit
		if (strcmp(buffer2, "q") != 0)
			// Display a message indicating the length of the string
			printf("The length of \'%s\' is %d characters\n",
				buffer2, (int)strlen(buffer2));		
	} while (strcmp(buffer2, "q") != 0);

	// Display a message to indicate the start of the demo
	printf("*** End of Measuring Strings Demo ***\n\n");


	/* Version 3 */
}




// include the header file
#include "converting.h"

// define a compiler flag to disable warnings related to certain functions
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80  // define a constant value for the maximum size of a string buffer

void converting(void) 
{
    // v1 - Demonstrate conversion of strings to integers using atoi()
    printf("*** Start of Converting Strings to int Demo ***\n");

    char intString[BUFFER_SIZE];  // define a character array to hold the string input from the user
    int intNumber;  // define an integer variable to hold the converted numeric value

    do {
        printf("Type an int numeric string (q - to quit):\n");
         // read a string from standard input and store it in the buffer
        fgets(intString, BUFFER_SIZE, stdin); 
        intString[strlen(intString) - 1] = '\0';  // remove the newline character at the end of the string
        // convert the string to an integer using the atoi() function
        if (strcmp(intString, "q") != 0) 
        { 
            intNumber = atoi(intString);  
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intString, "q") != 0);  // continue looping until the user inputs "q"

    printf("*** End of Converting Strings to int Demo ***\n\n");

    /* Version 2 */
    // prints a message indicating the start of the program.
    printf("*** Start of Converting Strings to double Demo ***\n");

    // The following line defines the size of the buffer.
    char doubleString[BUFFER_SIZE];
    double doubleNumber;//variable

    //The following code will loop until the user types "q".
    do
    {
        // The following line prompts the user to type a double numeric string.
        printf("Type the double numeric string (q - to quit): \n");

        // The following line reads a string from the user and stores it in doubleString.
        fgets(doubleString, BUFFER_SIZE, stdin);

        // The following line replaces the last character in doubleString with '\0'.
        doubleString[strlen(doubleString) - 1] = '\0';

        // The following lines check whether the user typed "q".
        // If not, the string is converted to a double value using the atof function and printed.
        if (strcmp(doubleString, "q") != 0) {
            doubleNumber = atof(doubleString);
            printf("Converted number is %f\n", doubleNumber);
        }
    } while (strcmp(doubleString, "q") != 0);// The following line checks whether the user typed "g".
    printf("*** End of Converting Strings to double Demo ***\n\n");

    /* Version 3 */
    // (No code is provided for Version 3)
}   
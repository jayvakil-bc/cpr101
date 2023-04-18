// include the header file
#include "converting.h"

// define a compiler flag to disable warnings related to certain functions
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80  // define a constant value for the maximum size of a string buffer

void converting(void)  // define the main function for this module
{
    // v1 - Demonstrate conversion of strings to integers using atoi()

    printf("*** Start of Converting Strings to int Demo ***\n");

    char intString[BUFFER_SIZE];  // define a character array to hold the string input from the user
    int intNumber;  // define an integer variable to hold the converted numeric value

    do {
        printf("Type an int numeric string (g - to quit):\n");
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
    // (No code is provided for Version 2)

    /* Version 3 */
    // (No code is provided for Version 3)
}   
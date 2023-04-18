#define BUFFER_SIZE 10
// MANIPULATING HEADER
#include "manipulating.h"

/**
 * Concatenates two strings taken from the standard input
 */
void manipulating(void) 
{
    printf("*** Start of Concatenating strings Demo ***\n");

    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];

    do {
        printf("Type the 1st string (q - to quit): \n");
        fgets(string1, BUFFER_SIZE, stdin); // Store characters from stdin in string1

        string1[strlen(string1) - 1] = '\0'; // Append the null character

        if((strcmp(string1, "q") != 0)) 
        {
            printf("Type the 2nd string: \n");
            fgets(string2, BUFFER_SIZE, stdin); // Store characters from stdin in string2

            string2[strlen(string2) - 1] = '\0'; // Append the null character

            strcat(string1, string2); // Join string1, string2 and store in string1
            printf("Concatenated string is \'%s\'\n", string1);
        }
    } while (strcmp(string1, "q") != 0); 

    printf("*** End of Concatenatinag strinas Demo ***\n\n");
}

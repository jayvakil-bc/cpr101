#define BUFFER_SIZE 10
// MANIPULATING HEADER
#include "manipulating.h"

/**
 * Concatenates two strings taken from the standard input
 * Compares two strings taken from the standard input
 */
void manipulating(void) {
  printf("*** Start of Concatenating strings Demo ***\n");

  char string1[BUFFER_SIZE];
  char string2[BUFFER_SIZE];

  do {
    printf("Type the 1st string (q - to quit): \n");
    fgets(string1, BUFFER_SIZE,
          stdin); // Store characters from stdin in string1

    string1[strlen(string1) - 1] = '\0'; // Append the null character

    if ((strcmp(string1, "q") != 0)) {
      printf("Type the 2nd string: \n");
      fgets(string2, BUFFER_SIZE,
            stdin); // Store characters from stdin in string2

      string2[strlen(string2) - 1] = '\0'; // Append the null character

      strcat(string1, string2); // Join string1, string2 and store in string1
      printf("Concatenated string is \'%s\'\n", string1);
    }
  } while (strcmp(string1, "q") != 0);

  printf("*** End of Concatenatinag strinas Demo ***\n\n");

  printf("*** Start of Comparing Strings Demo ***\n");

  char compare1[BUFFER_SIZE];
  char compare2[BUFFER_SIZE];
  int result;

  do {
    printf("Type the 1st string to compare (q - to quit):\n");
    fgets(compare1, BUFFER_SIZE,
          stdin); // Store characters from the stdin in compare1

    compare1[strlen(compare1) - 1] = '\0'; // Append the null character

    if (strcmp(compare1, "q") != 0) {
      printf("Type the 2nd string to compare:\n");
      fgets(compare2, BUFFER_SIZE,
            stdin); // Store the characters from stdin in compare2

      compare2[strlen(compare2) - 1] = '\0'; // Append the null character

      result = strcmp(compare1, compare2); // Store the strcmp return value

      if (result < 0) {
        printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
      } else if (result == 0) {
        printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
      } else {
        printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
      }
    }
  } while (strcmp(compare1, "q") != 0);

  printf("*** End of Comparing Strings Demo ***\n\n");
}

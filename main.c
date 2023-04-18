#define _CRT_SECURE_NO_WARNINGS
//#include "fundamentals.h"
//#include "manipulating.h"
#include "converting.h"
//#include "tokenizing.h"

// This program allows the user to choose which module to run.
int main (void)
{
    char buff [10];
    do 
    {
        // The program provides a menu of options for the user to choose from.
        printf("1 - Fundamentals\n");
        printf("2 - Manipulation\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        printf("Which module to run? \n"); 
        // The user enters a number corresponding to the module they want to run.
        fgets (buff, 10, stdin);
        // The program then executes the selected module.
        switch (buff[0])
        {
        //case '1': fundamentals () ;
            //break;
        //case '2': manipulating () ;
            //break;
        case '3': converting ();
            break;
        //case '4': tokenizing () ;
            //break;
        }
    } while (buff[0] != '0'); // The program continues to prompt the user for module selection until they choose to exit.
    return 0;
}
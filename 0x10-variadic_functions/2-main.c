#include "variadic_functions.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    print_strings(", ", 2, "Jay", "Django");
	    print_strings(", ", 2, "Mocking Bird",NULL);
	    print_strings(", ", 3, NULL, "Seven", NULL);
	    print_strings(". ", 2, "Steven", "Huntly", "Cynthia");
	    print_strings(NULL, 2, "Cady", "B");
	    return (0);
}

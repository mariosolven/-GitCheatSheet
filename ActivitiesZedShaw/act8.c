#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int areas[] = {10, 12, 13, 14, 20}; char name[] = "Zed"; //creating areas
    char full_name[] = { //
    'Z', 'e', 'd',
    ' ', 'A', '.', ' ', 
    'S', 'h', 'a', 'w', '\0'
    };

// WARNING: On some systems you may have to change the
// %ld in this code to a %u since it will use unsigned ints 

//Printing the space on memory of all the types of numbers and variables
    printf("The size of an int: %ld\n", sizeof(int)); 
    printf("The size of areas (int[]): %ld\n",
        sizeof(areas));
    printf("The number of ints in areas: %ld\n",
        sizeof(areas) / sizeof(int)); 
    printf("The first area is %d, the 2nd %d.\n",
        areas[0], areas[1]);

    printf("The size of a char: %ld\n", 
        sizeof(char)); 
    printf("The size of name (char[]): %ld\n",
        sizeof(name));
    printf("The number of chars: %ld\n",
        sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %ld\n", 
        sizeof(full_name));
    printf("The number of chars: %ld\n", 
        sizeof(full_name) / sizeof(char));

    printf("name=\"%s\" and full_name=\"%s\"\n", 
        name, full_name);
//Finally we just print out the name and full_name to prove that they actually are strings according to 'printf'.

    return 0; 
}
/* EXTRA CREDITS

NUM1: Try assigning to elements in the 'areas' array with 'areas[0] = 100;' and similar. 
    areas[0] = 100;
                ^~~
	areas[1] = 200;
                ^~~

NUM2: Try assigning to elements of 'name' and 'full_name'.

    It is ok, and prints out as a string.

NUM3: Try setting one element of areas to a character from 'name'.
    
    It prints: First area is 95.

NUM4: Go search online for the different sizes used for integers on different CPUs.
    
    The size of a word is thus CPU-specific. Many different word sizes have been used, 
    including 6-, 8-, 12-, 16-, 18-, 24-, 32-, 36-, 39-, 40-, 48-, 60-, and 64-bit.
    
*/     
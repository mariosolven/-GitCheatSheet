#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int numbers[4] = {0}; 
    char name[4] = {'a'};

    // first, print them out raw
    printf("numbers: %d %d %d %d\n", 
        numbers[0], numbers[1],
        numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n", 
        name[0], name[1],
        name[2], name[3]); 

    printf("name: %s\n", name);

    /*putting values to variables*/
        // setup the numbers
    numbers[0] = 1;  
    numbers[1] = 2; 
    numbers[2] = 3; 
    numbers[3] = 4;

        // setup the name
    name[0] = 'Z'; 
    name[1] = 'e'; 
    name[2] = 'd'; 
    name[3] = '\0'; //In this there is a null point
    // then print them out initialized
    printf("numbers: %d %d %d %d\n", 
    numbers[0], numbers[1],
    numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n", 
    name[0], name[1],
    name[2], name[3]);

    // print the name like a string
    printf("name: %s\n", name); 
    
    // another way to use name
    char *another = "Zed"; 
    
    printf("another: %s\n", another);

    printf("another each: %c %c %c %c\n", 
    another[0], another[1],
    another[2], another[3]); 
    
    return 0;
}
/* EXTRA CREDITS

NUM1: Assign the characters into numbers and then use printf to print them a character at a time. 
What kind of compiler warnings did you get?. 

    Don't get an error, i just got 0 numbers.
       
NUM2: Do the inverse for name , trying to treat it like an array of int and print it out one int at a time. 
What does Valgrind think of that?
    
    It got confused by the character that I putted.

NUM3: How many other ways can you print this out?

NUM4: Convert name to be in the style of another and see if the code keeps working.
    No, i got this warning:
        warning: incompatible integer to pointer conversion
        initializing 'char *' with an expression of type 'int'
        [-Wint-conversion]

*/
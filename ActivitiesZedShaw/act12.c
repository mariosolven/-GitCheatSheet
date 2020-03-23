#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int i = 0;

    if(argc == 1) {

    printf("You only have one argument. You suck.\n");
} else if(argc > 1 && argc < 4) { 
    printf("Here's your arguments:\n");

    for(i = 0; i < argc; i++) { 
        printf("%s ", argv[i]);
    }
    printf("\n"); 
    } else {
        printf("You have too many arguments. You suck.\n"); 
    }

    return 0; 
}

/* EXTRA CREDITS

NUM1: You were briefly introduced to && , which does an "and" comparison, 
so go research online the different "boolean operators".

    - The three basic boolean operators are: AND (&&), OR (||), and NOT (!).
       
NUM2: Write a few more test cases for this program to see what you can come up with.

    if (argc == 1) {
        			printf("You only have one argument. You suck.\n");
					}
					else if (argc > 1 && argc < 10  argc ! 4) {
        					printf("Here is your arguments:\n");
        						for (i = 0; i < argc; i++) {
            							printf("%s ", argv[i]);
        						}

NUM3: Go back to Exercises 10 and 11, and use if-statements to make the loops exit early. 
You'll need the break statement to do that. Go read about it.

   The break statement is used inside loops or switch statement, 
   it ends the loop immediately when it is encountered.

NUM4: Is the first test really saying the right thing? To you the "first argument" isn't 
the same first argument a user entered. Fix it.

    

*/
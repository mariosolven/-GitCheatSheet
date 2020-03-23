#include <stdio.h> 

int main(int argc, char *argv[]) { 
    //imaginary values declaration
    int bugs = 100; double bug_rate = 1.2; 
    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate); 

    unsigned long universe_of_defects = 1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024; 
    //%ld is used for long number of decimals
    printf("The entire universe has %ld bugs.\n", universe_of_defects); 

    double expected_bugs = bugs * bug_rate; 
    printf("You are expected to have %f bugs.\n", expected_bugs); 

    double part_of_universe = expected_bugs / universe_of_defects; 
    printf("That is only a %e portion of the universe.\n", part_of_universe); 

    // this makes no sense, just a demo of something weird 
    //here we create a  'nul byte' character, which results in number 0.
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte; printf("Which means you should care %d%%.\n", care_percentage); 
    //this will result in a percentage number thanks to the '%%'
    return 0; 
}

/* EXTRA CREDITS

NUM1:Make the number you assign to 'universe_of_defects' various sizes until you get a warning from the compiler. 
        warning: overflow in expression; result is 2570429487321710592 with type 'long' [-Winteger-overflow]
        long universe_of_defects = 1L * 1024L * 1024L * 1024L * 1024L * 30000000000L;
        1 warning generated.

NUM2: What do these really huge numbers actually print out?
        prints negative numbers.

NUM3: Change 'long' to 'unsigned long' and try to find the number that makes that one too big.
        It doesn't change anything because it helps to proceed numbers without a sign.
        Its range from that int is from 0 to 4,294,967,295.

NUM4: Go search online to find out what 'unsigned' does.
        Indicates a variable that can hold only positive numbers.
*/
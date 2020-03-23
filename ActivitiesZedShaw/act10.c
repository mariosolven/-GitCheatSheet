#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int i = 0;

    // go through each string in argv 
    // why am I skipping argv[0]? 
    for(i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]); 
    }
    
    // let's make our own array of strings
    char *states[] = { 
        "California", "Oregon", 
        "Washington", "Texas"
    };
    int num_states = 4;
    for(i = 0; i < num_states; i++) { 
        printf("state %d: %s\n", i, states[i]);
    }
    
    return 0; 
}
/* EXTRA CREDITS

NUM1: Figure out what kind of code you can put into the parts of a for-loop .

    1. Declare something to configure.
    2. Declare a conditional. 
    3. Declare an action that will happen after loops.
       
NUM2: Look up how to use the ',' (comma) character to separate multiple statements 

    The comma is used to separate parameters and functions and the semicolon to separate instructions.

NUM3: Read what a NULL is and try to use it in one of the elements of the states array to see what it'll print.

    NULL is both a value and a pointer. It prints (null):
        state 0: (null)
        state 1: Texas
        state 2: Oregon
        state 3: Washington

NUM4: See if you can assign an element from the states array to the argv array before printing both. Try the inverse.

    ./act10 prueba
    arg 1: prueba
    state 0: prueba
    state 1: Oregon
    state 2: Washington
    state 3: Texas

*/
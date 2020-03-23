#include <stdio.h>

int main(int argc, char *argv[]) 
{
    if(argc != 2) {
        printf("ERROR: You need one argument.\n"); 
        // this is how you abort a program
        return 1;
    }

    int i = 0;
    for(i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];

        switch(letter) { 
            case 'a':
            case 'A': 
                printf("%d:'A'\n", i);
                break;

            case 'e': 
            case 'E':
                printf("%d:'E'\n", i);
                break;

            case 'i': 
            case 'I':
                printf("%d:'I'\n", i);
                break;

            case 'o': 
            case 'O':
                printf("%d:'O'\n", i);
                break;

            case 'u': 
            case 'U':
                printf("%d:'U'\n", i); 
                break;
            
            case 'y':
            case 'Y':
                if(i > 2) { 
                    //it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                } 
                break;
            
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    return 0;

}

/* EXTRA CREDITS

NUM1: Write another program that uses math on the letter to convert it to lowercase,
and then remove all the extraneous uppercase letters in the switch.


NUM4: Convert this switch-statement to an if-statement . Which do you like better?.

    I ALWAYS prefer the if -statement for life.

    int i = 0;
  	for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];

   if((letter == 'a')||(letter == 'A')){
		printf("%d: 'A' \n", i);
        }
	    else if((letter == 'e')||(letter == 'E')){
		    printf("%d: 'E' \n", i);
        }
	    else if((letter == 'i')||(letter == 'I')){
		    printf("%d: 'I' \n", i);
        }
	    else if((letter == 'o')||(letter == 'O')){
		    printf("%d: 'O' \n", i);
        }
	    else if((letter == 'u')||(letter == 'U')){
		    printf("%d: 'U' \n", i);
        }
	    else if((letter == 'y')||(letter == 'Y')){
		    printf("%d: 'Y' \n", i);
            }
        }
        else {
		    printf("is not a vowel");
        }
    }
    return 0;
}

NUM 5: In the case for 'Y' I have the break outside the if-statement . What's the impact of this 
and what happens if you move it inside the if-statement . Prove to yourself that you're right.

    It will say that is not a vowel because it will break before leaving the cycle.

*/
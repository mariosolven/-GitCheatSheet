#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

int main() {

	srand(time(NULL)); //Here we are creating a random secuence of values
	
	char guess_words[][16] = { //char array
		"callaita",         //Declarating words for our game
		"tusa",
		"secreto",
		"vete",
		"amanece",
		"indeciso"	
	};
	

	int random_index = rand() % 6; //With this fuction we're generating random nums (0,1,2,3,4,5.)
	
	int num_lives = 5; //Declaring how many lives the user have
	int num_correct = 0;
	int old_correct = 0;
	
	int length_word = strlen(guess_words[random_index]); //This will return the length of letters.
	
	int letter_guessed[8] = { 0,0,0,0,0,0,0,0 }; //Declaring the max letters (digits) have our values.
	
	int loop_index = 0;
	int reguessed = 0;
	
	char guess[16];
	char letter_entered;

    /*Start of the game*/
    printf("\n\n¡Bienvenido al ahorcado! \n");
    printf("Tienes solo %d vidas. \n", num_lives);
    //Game description
    printf("\n OJO: LA TEMATICA ES REGGAETON. \n");	
	
    //Game loop	
	while ( num_correct < length_word ) {
	
		printf("\n\nNuevo turno.\nPalabra: \n");
	
		for( loop_index = 0; loop_index < length_word; loop_index++) {
		
			if(letter_guessed[loop_index] == 1) {
				printf("%c",guess_words[random_index][loop_index]);	//takes a letter from the word in game.			
			} else {
				printf("*"); //substitute each num value for an "*"
			}
		
		}	
		
		printf("\nInserta una letra: ");
		fgets(guess, 16, stdin); //max of characters to be read.
		
		letter_entered = guess[0];
		reguessed = 0; 
		
		printf("Letra:%c\n",letter_entered);
		
		old_correct = num_correct;
		
		for( loop_index = 0; loop_index < length_word; loop_index++) {
		
			if(letter_guessed[loop_index] == 1) { 
				if(guess_words[random_index][loop_index] == letter_entered) {
					reguessed = 1; 
					break;
				} 
				continue;
			}
		
			if( letter_entered == guess_words[random_index][loop_index] ) { //if you type a letter from the word in game...
				letter_guessed[loop_index] = 1;
				num_correct++; //you sum a new correct letter.			
			}		
		
		}	
		
		if( old_correct == num_correct && reguessed == 0) { //if you repeat a letter...
			num_lives--; //Now you have 1 live less.
			printf("\nLetra incorrecta. \nTe quedan %d vidas", num_lives);
			if (num_lives == 0) { //If you don't have more lives, it breaks the condition.
				break;
			}
		} else if( reguessed == 1) { //means that you alredy put that letter.
			printf("\nLetra repetida. \nTe quedan %d vidas", num_lives);
		} else {
			printf("\n¡Letra correcta!. \n");
		}
	
	} 
    
    //Last conditions
    if (num_lives == 0) {
		printf("\n\nPerdiste, la palabra era: %s\n\n",
		guess_words[random_index]);	
	} else  {	
		printf("\n\n¡Ganaste! la palabra es: %s\n\n",
        guess_words[random_index]);
	} 
	
		
	return 0;
}
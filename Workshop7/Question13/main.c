/* Write a program that uses random number generator to create sentences. The
	program should use four arrays of pointers to char called article, noun, verb
	and preposition. The program should create a sentence by selecting a word at
	random from each array in the following order: 
	 * article, noun, verb, preposition, article and noun. 
	 As each word is picked, it should be
	concatenated to the previous words in an array large enough to hold the entire
	sentence. The words should be separated by spaces. When the final sentence is
	output, it should start with a capital letter and end with a period. Your program should
	generate 20 such sentences and output them to a file.
	The arrays should be filled as follows:
	The article array should contain the articles “the”, “a”, “one”, “some” and “any”; the
	noun array should contain the nouns “boy”, “girl”, “dog”, “town” and “car”; the verb
	array should contain the verbs “drove”, “jumped”, “ran”, “walked” and “skipped”; the
	preposition array should contain the prepositions “to”, “from”, “over”, “under” and
	“on”. */
	
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define fileLocation "../../myTextFile.txt"

int main(int argc, char **argv)
{
	FILE *myFile = fopen(fileLocation, "w");
	
	if (myFile == NULL)
	{
		printf("Unable to open input file.\n");
		return 1;
	}
	
	srand(time(NULL));
	
	const char *article[5] = {"the", "a", "one", "some", "any"};
	const char *noun[5] = {"boy", "girl", "dog", "town", "car"};
	const char *verb[5] = {"drove", "jumped", "ran", "walked", "skipped"};
	const char *preposition[5] = {"to", "from", "over", "under", "on"};
	
	for(int i = 0; i < 20 ;i++){
		char *mySentence = malloc(100);
		
		strcat(mySentence, article[rand()%5]);
		strcat(mySentence, " ");
		mySentence[0] = mySentence[0] - 32;
		
		strcat(mySentence, noun[rand()%5]);
		strcat(mySentence, " ");
		
		strcat(mySentence, verb[rand()%5]);
		strcat(mySentence, " ");
		
		strcat(mySentence, preposition[rand()%5]);
		strcat(mySentence, " ");
		
		strcat(mySentence, article[rand()%5]);
		strcat(mySentence, " ");
		
		strcat(mySentence, noun[rand()%5]);
		strcat(mySentence, ".");
		
		fprintf(myFile, "%s\n", mySentence);
		mySentence[0] = '\0';
		}
		
		
		fclose(myFile);
}
/* a) Write a function called findString() to determine if one character string exists
	inside another string. The first argument to the function should be the character string
	that is to be searched, and the second argument is the string you are interested in
	finding. If the function finds the specified string, have it return the location in the
	source string where the string was found. If the function does not find the string, have
	it return -1. For example, the call
	index = findString(“a chatterbox”, “hat”);
	searches the string “a chatterbox” for the string “hat”. Because “hat” does
	exist inside the source string, the function returns 3 to indicate the starting position
	inside the source string where “hat” was found.

b) Write a function called removeString() to remove a specified number of
	characters from a character string. The function takes three arguments: the source
	string, the starting index number in the source string, and the number of characters to
	remove. So, if the character array text contains the string “the wrong son”, the
	call
	removeString(text, 4, 6);
	has the effect of removing the characters “wrong” plus the space that follows, from
	the array text. The resulting string inside text is then “the son”.
	 
c) Write a function called insertString() to insert one character string into
	another string. The arguments to the function should consist of the source string, the
	string to be inserted, and the position in the source string where the string is to be
	inserted. So the call
	insertString(text, “per”, 10);
	with text as originally defined in Part (b) above, results in the character string “per”
	being inserted inside text, beginning at text[10]. Therefore, the character string
	“the wrong person” is stored inside the text array after the function returned.
	 
d) Using the functions in Parts (a), (b), and (c) above, write a function called
	replaceString() that takes three character string arguments as follows:
	replaceString(source, s1, s2);
	which replaces s1 inside source with the character string s2. The function should
	call the findString() function to locate s1 inside source, then call the
	removeString() function to remove s1 from source, and finally call the
	insertString() function to insert s2 into source at the proper location. 

e) Write a program that reads in three inputs: a source character string, an s1
	character string, and an s2 character string. Your program will then use the
	replaceString() */
	
#include <stdio.h>

// Finds string A in B
int findString(char* a, char* b){
	int lenA = 0;
	int lenB = 0;
	//	Position of A in B where -1 = non-existant
	int aPosition = -1;
	
//	Count length of A and B
	for(int i = 0; ;i++){
		if(a[lenA] == '\0'){
			break;
			}
		lenA++;
	}
	for(int i = 0; ;i++){
		if(b[lenB] == '\0'){
			break;
			}
		lenB++;
	}
	
	//	For all indexes of b
	for(int i = 0; i < lenB; i++){
		//	If start of a = current index of b
		if(a[0] == b[i]){
			//	Loop until broken checking a[0,1,2...] against b[...i,j,k,..]
			for(int k = 0; ; k++){
				if(a[k] == '\n'){
					aPosition = i;
					break;
					}/* If end of a is reached, a's Position within b is set and loop broken*/
				if(a[k] != b[i+k]){
					break;
					}/* If not same char, break*/
			}
		}
	}
	return aPosition;
}

void removeString(char* text, int x, int y){
	char copy[50];
	int cc = 0; /* copyCount */
	for(int i = 0; i < x; i++){
		copy[i] = text[i]; 
		cc++;
		}
	for(int i = x+y; ; i++){
		if(text[i] == '\0'){
			break;
			}
		copy[cc] = text[i];
		cc++;
		}
	for(int i = 0; copy[i] != '\0' ;i++){
		text[i] = copy[i];
		text[i+1] = '\0';
		}
	}

void insertString(char* text, char* strIn, int x){
	char copy[100];
	int count = 0;
	int mark;
	
	//	Make copy up to text[x]
	for(int i = 0; i < x; i++){
		copy[i] = text[i];
		count++;
		}
	
	mark = count;
	
	//	Continue copying from strIn
	for(int i = 0; strIn[i+1] != '\0' ;i++){
		copy[count] = strIn[i];
		count++;
		}
	
	//	Replace carriage return from fgets(strIn,..,..) with a space
	copy[count] = ' ';
	count++;
	
	//	Continue copying from text[mark]
	for(int i = mark; text[i] != '\0';i++){
		copy[count] = text[i];
		count++;
		}
	
	for(int i = 0; copy[i] != '\0'; i++){
		text[i] = copy[i];
		}
	}

void replaceString(char* text, char* a, char* b){
	int loc; /* location */
	int aLen = 0;
	for(int i = 0; a[i] != '\0'; i++){
		aLen++;
		}
	loc = findString(a, text);
	removeString(text, loc, aLen);
	insertString(text, b, loc);
	}

int main()
{
	char* source[50];
	char* strA[50];
	char* strB[50];
	
	int a = 0;
	
	printf("Input three strings separated by enter. (a\\n b\\n c\\n)");
	printf("All occurences of b in a will be replaced by c\n");
	fgets(source, 50, stdin);
	fgets(strA, 50, stdin);
	fgets(strB, 50, stdin);
	
	replaceString(source, strA, strB);
	
	printf("%s", source);
	
	return 0;
}

#include <stdio.h>
#include <string.h>

int countWords(char str[]);

int main() {
	char sentence[300];
	
	printf("Enter a sentence :");
	fgets(sentence, sizeof(sentence), stdin);
	sentence[strcspn(sentence, "\n")] = '\0';
	
	int words = countWords(sentence);
	printf("The number of words in the sentence is : %d", words);
	
	return 0;
}

int countWords(char str[]) {
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
			count++;
		}
	}
	return count;
}

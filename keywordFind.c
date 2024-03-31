#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 256
#define MAX_KEYWORD_LENGTH 50

int main() {
	FILE *file;
	char keyword[MAX_KEYWORD_LENGTH];
	char line[MAX_LINE_LENGTH];
	int lineNumber = 0;

	//open file
	file = fopen("sample.txt", "r");
	//printf("Enter Keyword");
	//check exists
	if (file == NULL) {
		printf("Not found");
		return 1;
	}

	// get user input
	//printf("Enter Keyword");
	scanf("%s", keyword);

	//read each line
	while (fgets(line, sizeof(line), file)) {
		lineNumber++;
	//search for keyword in line
	if (strstr(line, keyword) != NULL) {
		printf("Line %d: %s", lineNumber, line);
	}
}


//close file
fclose(file);

return 0;

}

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100], searchStr[50];
    char *position;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter the string to search: ");
    fgets(searchStr, sizeof(searchStr), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';
    searchStr[strcspn(searchStr, "\n")] = '\0';


    position = strstr(sentence, searchStr);

    if (position != NULL) {

        printf("String found at position: %ld\n", position - sentence);
    } else {

        printf("String not found.\n");
    }

    return 0;
}



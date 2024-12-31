#include <stdio.h>
#include <string.h>

void replaceSubstring(char *str, const char *oldSub, const char *newSub) {
    char temp[1000];
    int i = 0, j = 0;
    int oldLen = strlen(oldSub);
    int newLen = strlen(newSub);


    while (str[i] != '\0') {

        if (strncmp(&str[i], oldSub, oldLen) == 0) {

            strcpy(&temp[j], newSub);
            j += newLen;
            i += oldLen;
        } else {

            temp[j++] = str[i++];
        }
    }
    temp[j] = '\0';
    strcpy(str, temp);
}

int main() {
    char str[1000], oldSub[100], newSub[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the substring to replace: ");
    fgets(oldSub, sizeof(oldSub), stdin);
    oldSub[strcspn(oldSub, "\n")] = '\0';
    printf("Enter the replacement substring: ");
    fgets(newSub, sizeof(newSub), stdin);
    newSub[strcspn(newSub, "\n")] = '\0';

    replaceSubstring(str, oldSub, newSub);

    printf("Modified string: %s\n", str);

    return 0;
}

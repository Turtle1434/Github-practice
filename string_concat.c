#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rm_newline(char* str, size_t size)
/* Removes the first newline in a string and replaces it with
 * a null terminator. 
 */
{
    int i;
    for (i = 0; i < size; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            return;
        }
    }
} 

char *concat_strs(char* str1, char* str2)
/* Concatenates two strings, returns the concatenated string. */
{
    char* new_str = malloc(200);
    strcat(new_str, str1);
    strcat(new_str, str2);
    return new_str;
}

void get_input(char* str, size_t size)
/* Gets user input and removes trailing newline. */
{
    printf("Enter a string: ");
    fgets(str, size, stdin);
    rm_newline(str, size);
    return;
}

int main()
{
    char example_str[100];
    char example_str2[100];
    get_input(example_str, 100);
    get_input(example_str2, 100);
    char* strs_together = concat_strs(example_str, example_str2);
    printf("The strings together are: %s\n", strs_together);
    return 0;
}
// C program to copy string using loops

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to copy the string
char *copyString(char s[])
{
    int i;
    char *s2;
    s2 = (char *)malloc(20);

    // Executing till null character
    // is found
    for (i = 0; s[i] != '\0'; i++)
    {

        // Copy the character one
        // by one from s1 to s2
        s2[i] = s[i];
    }

    // Return the pointer of newly
    // created string
    return (char *)s2;
}

// Driver Code
int main()
{
    char s1[20] = "GeeksforGeeks";
    char *s2;

    // Function Call
    s2 = copyString(s1);
    printf("%s", s2);
    return 0;
}

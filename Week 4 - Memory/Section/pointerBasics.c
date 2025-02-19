#include <stdio.h>

// char * represents string in C

int main(void)
{
    // word pointer stores location of "M"
    char *word = "Mostafa";

    printf("%s\n", word); // Mostafa
    printf("%p\n", word); // 00405064 'M'
    printf("%p\n", (word+1)); // 00405065 'O'
}
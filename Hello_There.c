# include <stdio.h>

void meow(void);

int main(void)
{
    // Technique #1:
    printf("Hello there!");

    // Technique #2:
    meow();
}

void meow(void)
{
    printf("Hello there!");
}
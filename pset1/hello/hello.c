// Says hello to the world

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt for users name
    string name = get_string("what is your name?\n");

    // Prints users name with greeting
    printf("hello, %s\n", name);
}
#include <stdio.h>
#include <cs50.h>

int get_required_int(void);

int main(void)
{
    // Get the height of our final pyramid.
    int height = get_required_int();
    
    // This is used to count the height of the pyramid. Starting from 1 to user provided value.
    for (int line = 1; line <= height; line++)
    {
        
        // Spaces are inverse of line number to base 8. So on whatever line we are on, subtract that number from 8 and fill the space with spaces.
        for (int spaces = (height - line); spaces > 0; spaces--)
        {         
            printf(" ");
        }
        // Start with one dash. If dashes is less or equal to line number, keep printing dashes and incrementing them as well.
        for (int dashes = 1; dashes <= line; dashes++)
        {
            printf("#");
        }
        
        // We are now done with the line and we can move on to the next line.
        printf("\n");
    }
}

int get_required_int(void)
{
    // Get desired height from user
    int answer;
    // Check that it is between 1 and 8
    do
    {
        answer = get_int("Height of pyramid between 1 and 8, inclusive? ");
    }
    while (answer < 1 || answer > 8);
    return answer;
}
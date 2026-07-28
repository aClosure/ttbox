#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int a = rand() % 100 + 1; // Random number between 1 and 100
    int guess = 0;
    int attempts = 0;

    printf("I've picked a random number between 1 and 100. Try to guess it!😍\n");
    scanf("%d", &guess);
    do{
        attempts++;
        if (guess < a)
        {
            printf("You've gussed %d! Too low!😡 Try again: ", guess);
            scanf("%d", &guess);
        }
        else if (guess > a)
        {
            printf("You've gussed %d! Too high!😡 Try again: ", guess);
            scanf("%d", &guess);
        }
    }while (guess != a);

    printf("Congratulations! You guessed the number in %d attempts! 🎉\n", attempts);
    getchar(); 

    return 0;

}
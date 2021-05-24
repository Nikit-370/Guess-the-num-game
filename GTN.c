#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    int guess, nguess = 1;
    srand(time(0));
    num = rand() % 100 + 1;
    
    printf("Guess a number between 1 to 100\n");
    
    do
    {
        scanf("%d", &guess);

        if (guess > num)
        {
            printf("Enter lesser number.\n");
        }
        else if (guess < num)
        {
            printf("Enter greater number.\n");
        }
        else
        {
            printf("Congratulations!! You got the number in %d attemps.\n", nguess);
            getch();
        }
        nguess++;
    } while (guess != num);

    return 0;
}

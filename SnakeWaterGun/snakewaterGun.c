#include <stdio.h>

int snakeWaterGun(char you, char comp)
{
    // returns 1 if you win, -1 if you lose, 0 if tie
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'g')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// use pointer of cChoice to change the value of cChoice to 's' or 'w' or 'g' through random integer
void computerChoice(char *cChoice)
{
    srand(time(0));
    int random = rand() % 3;
    if (random == 0)
    {
        *cChoice = 's';
    }
    else if (random == 1)
    {
        *cChoice = 'w';
    }
    else
    {
        *cChoice = 'g';
    }
}

int main()
{
    char uChoice, cChoice;
    printf("Enter 's' for snake, 'w' for water, 'g' for gun: ");
    scanf(" %c", &uChoice);
    computerChoice(&cChoice);
    printf("Computer chooses %c\n", cChoice);
    int result = snakeWaterGun(uChoice, cChoice);
    if (result == 1)
    {
        printf("You win!\n");
    }
    else if (result == -1)
    {
        printf("You lose!\n");
    }
    else
    {
        printf("It's a tie!\n");
    }

    return 0;
}
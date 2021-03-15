#include <stdio.h>
#include <stdlib.h>

int rounds, rounds_done, choice, random, result;

int game(void), scissors(void), paper(void), rock(void);


int main()
{
    puts("Welcome to the rock-paper-scissors game!\n");
    puts("Please define a number of rounds: ");
    scanf("%u", &rounds);

    while(rounds_done < rounds)
    {
        game();
        rounds_done++;
        if (result == 0)
            printf("\nThe computer and the player have chosen the same sign! Next round: %d/%d\n", rounds_done, rounds);
        else if (result == 1)
            printf("The player won this round! Rounds done: %d/%d\n", rounds_done, rounds);
        else
            printf("The computer won this round! Next round: %d/%d\n", rounds_done, rounds);
        system("pause");
        system("clear");
    }
    exit(EXIT_SUCCESS);
}


int game(void)
{
    random = rand() % 3 + 1;
    puts("\nPlease choose a number or a sign: ");
    scanf("%d", &choice);
    
    if (choice == random)
        result = 0;
    else if (choice == 1)
        rock();
    else if (choice == 2)
        paper();
    else
        scissors();
    return result;
}


int rock(void)
{
    if (random == 3)
        result = 1;
    else
        result = 2;
    return result;
}

int paper(void)
{
    if (random == 1)
        result = 1;
    else
        result = 2;
    return result;
}

int scissors(void)
{
    if (random == 2)
        result = 1;
    else
        result = 2;
    return result;
}
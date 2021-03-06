/*
Version v1.1 du programme en C Rock-Paper-Scissors
*/
#include <stdio.h>
#include <stdlib.h>
#if defined(_WIN32)
    #define CLEAR_COMMAND "cls"
#elif defined(__unix__)
    #define CLEAR_COMMAND "clear"
#endif

int rounds, rounds_done, choice, random, result, player_score, computer_score;

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
        {
            printf("The player won this round! Rounds done: %d/%d\n", rounds_done, rounds);
            player_score++;
        }
        else
        {
            printf("The computer won this round! Next round: %d/%d\n.", rounds_done, rounds);
            computer_score++;
        }
        printf("\nThe score is %d to %d\n", player_score, computer_score);
        system("pause");
    }

    if (player_score > computer_score)
        printf("The player won this game!\n");
    else if (player_score > computer_score)
        printf("The computer won this game!\n");
    else
        printf("No one won the game!\n");
    system("pause");
    exit(EXIT_SUCCESS);
}


int game(void)
{
    system(CLEAR_COMMAND);
    random = rand() % 3 + 1;
    puts("1: Rock");
    puts("2: Paper");
    puts("3: Scissors");
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
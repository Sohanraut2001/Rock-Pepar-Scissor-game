#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

char player1[20];
char player2[] = "Computer";
int p1rps, p2rps;
int score1 = 0, score2 = 0;

int generatedrand()
{
    srand(time(NULL));
    return rand() % 3;
}
int input1(int p1rps)
{
    if (p1rps == 0)
    {
        printf("%s Choosen = Rock\n", player1);
    }
    else if (p1rps == 1)
    {
        printf("%s Choosen = Paper\n", player1);
    }
    else if (p1rps == 2)
    {
        printf("%s Choosen = Scissor\n", player1);
    }
}
int input2(int p2prp)
{
    if (p2prp == 0)
    {
        printf("%s Choosen = Rock\n", player2);
    }
    else if (p2prp == 1)
    {
        printf("%s Choosen = Paper\n", player2);
    }
    else if (p2prp == 2)
    {
        printf("%s Choosen = Scissor\n", player2);
    }
}
int winner(int p1rps, int p2rps)
{

    if (p1rps == 1 && p2rps == 0)
    {
        score1 += 1;
        printf("%s won this round\n", player1);
    }
    else if (p1rps == 0 && p2rps == 2)
    {
        score1 += 1;
        printf("%s won this round\n", player1);
    }
    else if (p1rps == 2 && p2rps == 1)
    {
        score1 += 1;
        printf("%s won this round\n", player1);
    }
    else if (p1rps == 0 && p2rps == 1)
    {
        score2 += 1;
        printf("%s won this round\n", player2);
    }
    else if (p1rps == 2 && p2rps == 0)
    {
        score2 += 1;
        printf("%s won this round\n", player2);
    }
    else if (p1rps == 1 && p2rps == 2)
    {
        score2 += 1;
        printf("%s won this round\n", player2);
    }
}
void decide()
{
    if (score1 > score2)
    {
        printf("%s won this game !!!", player1);
    }
    else if (score1 < score2)
    {
        printf("%s won this game !!!", player2);
    }
}

int main()
{

    printf("Enter the name of player=\n");
    scanf("%s", &player1);
    getchar();
    printf("####### %s VS %s #######\n", player1, player2);

    for (int i = 0; i < 3; i++)
    {
        if ( i >=1 )
        {
            getchar();
            
        }
        printf("############ SCORE ##############\n");
        printf("%s : %d     &     %s : %d\n", player1, score1, player2, score2);
        printf("Choose 0,1,2 :\n0.Rock\n1.Paper\n2.Scissor\n");
        scanf("%d", &p1rps);
        getchar();
        if (p1rps != 0 && p1rps != 1 && p1rps != 2)
        {
            printf("%s you have entered wrong input !!!\n", player1);
            i--;
            continue;
        }
        input1(p1rps);
        p2rps = generatedrand();
        input2(p2rps);
        if (p1rps == p2rps)
        {
            printf("Ohh it's draw\n");
            i--;
            continue;
        }
        winner(p1rps, p2rps);
    }
    decide();
    return 0;
}

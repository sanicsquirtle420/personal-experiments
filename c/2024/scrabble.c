#include <ctype.h>
#include <stdio.h>
#include <string.h>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10} ;
int computeScore(char* word) ;

int main(void)
{
    char word1[26] ;
    char word2[26] ;
    // Prompt the user for two words
    printf("Player 1: ") ;
    scanf("%20s" , word1) ;
    printf("Player 2: ") ;
    scanf("%20s" , word2) ;
    int i = 0 , j = 0;
    while(word1[i] != '\0')
    {
        if(word1[i] >= 'A' && word1[i] <= 'Z' || word1[i] >= 'a' && word1[i] <= 'z')
        {
            word1[i] = tolower(word1[i]);
        }
        else
        {
            word1[i] = '\0' ; // yes I know this ends the string but oh well
        }
        i++ ;
    }
    while(word2[j] != '\0')
    {
        if(word2[j] >= 'A' && word2[j] <= 'Z' || word2[j] >= 'a' && word2[j] <= 'z')
        {
            word2[j] = tolower(word2[j]);
        }
        else
        {
            word2[j] = '\0' ;
        }
        j++ ;
    }

    // Compute the score of each word
    // DEBUGGING: printf("One: %s, Two: %s\n" , word1 , word2) ;
    int score1 = computeScore(word1) ;
    int score2 = computeScore(word2) ;

    // Print the winner
    if(score1 > score2)
    {
        printf("Player 1 wins!\n") ;
    }
    else if(score1 < score2)
    {
        printf("Player 2 wins!\n") ;
    }
    else
    {
        printf("Tie!\n") ;
    }
    return 0 ;
}

int computeScore(char* word)
{
    int score = 0 ;
    for(int i = 0 ; i < strlen(word) ; i++)
    {
        score += points[word[i] - 'a'] ;
    }
    return score ;
}

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int countLetters(char* text) ;
int countWords(char* text) ;
int countSentences(char* text) ;

int main()
{
    char text[415] ;
    // Prompt the user for some text
    printf("Text: ") ;
    scanf("%[^\n]400s" , text) ;

    // Count the number of letters, words, and sentences in the text
    int let = countLetters(text) ;
    int wor = countWords(text) ;
    int sen = countSentences(text) ;

    // Compute the Coleman-Liau index
    float let_i = ((float)let / wor) * 100 ;
    float sen_i = ((float)sen / wor) * 100 ;
    float index = 0.0588 * let_i - 0.296 * sen_i - 15.8 ;
    int i = round(index) ;

    // Print the grade level
    // DEBUGGING: printf("%s\n" , text) ;
    // printf("LETTERS: %d\n" , countLetters(text)) ; 
    // printf("WORDS: %d\n" , countWords(text)) ; 
    // printf("SENTENCES: %d\n" , countSentences(text)) ;
    // printf("LEVEL: %d\n" , i) ;

    if(i < 1)
    {
        printf("Before Grade 1\n") ;
    }
    else if(i >= 1 || i <= 16)
    {
        printf("Grade %d\n" , i) ;
    }
    else
    {
        printf("Grade 16+\n") ;
    }
    
    return(0);
}

int countLetters(char* text) 
{
    int count = 0 , i = 0;
    while(text[i] != '\0')
    {
        if(text[i] >= 'A' && text[i] <= 'Z' || text[i] >= 'a' && text[i] <= 'z')
        {
            count++ ; 
        }
        else
        {
            count += 0 ;
        }
        i++ ;
    }

    return count ;
}

int countWords(char* text) 
{
    int count = 0 , i = 0;
    while(text[i] != '\0')
    {
        if(text[i] == 32)
        {
            count++ ; 
        }
        else
        {
            count += 0 ;
        }
        i++ ;
    }

    return count + 1;
}

int countSentences(char* text) 
{
    int count = 0 , i = 0;
    while(text[i] != '\0')
    {
        if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++ ; 
        }
        else
        {
            count += 0 ;
        }
        i++ ;
    }

    return count ;
}

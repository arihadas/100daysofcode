#include<stdio.h>
int main()
{
    char character;

    printf("Enter a character: ");
    scanf("%c",&character);

    if(character>=65 && character<=90)
    {
        printf("%c is an uppercase letter\n",character);
    }
    else if(character>=97 && character<=122)
    {
        printf("%c is a lowercase letter\n",character);
    }
    else if(character>=48 && character<=57)
    {
        printf("%c is a digit\n",character);
    }
    else
    {
        printf("%c is a special character\n",character);
    }

    return 0;
}
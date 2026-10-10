#include <stdio.h>
int main ()
{
    int age;
    char citizen;

    printf ("Enter your age :");
    scanf ("%d", &age);

    printf ("Are you a citizen ? (y/n) :");
    scanf ("%c", &citizen);

    if (age >= 18)
    {
        if (citizen == 'y')
        {
            printf ("You can vote")
        }
    }
    
    return 0;
}
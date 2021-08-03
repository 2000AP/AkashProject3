#include <stdio.h>
int main()
{
    int marks = 0;
    printf("Enter Marks: \n");
    scanf("%d", &marks);
    if (marks >= 40 && marks <= 100)
    {
        if (marks >= 85 && marks <= 100)
        {
            printf("Grade A");
        }
        if (marks >= 70 && marks <= 84)
        {
            printf("Grade B");
        }
        if (marks >= 55 && marks <= 69)
        {
            printf("Grade C");
        }
        else if (marks >= 40 && marks <= 54)
        {
            printf("Grade D");
        }
        
    }
    else if (marks >= 0 && marks <= 39)
    {
        printf("Grade F");
    }
    
    else
    {
        printf("You have entered incorrect marks");
    }
    return 0;
}

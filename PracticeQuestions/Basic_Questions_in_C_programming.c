//Q1. Find the smallest number between 1 and 50 that is divisible by 7.

#include<stdio.h>
int main()
{
    int smallest = 50;
    
    for(int i = 1; i<50; i++)
    {
        if(i % 7==0 && i < smallest)
        {
            smallest = i;
        }
    }

    printf("The smallest is : %d", smallest);

    return 0;

}


//Q2. Find the sum of all odd numbers between 1 to 50 that are divisible by 3.

#include<stdio.h>

int main()
{
    int sum = 0;

    for(int i=1; i<50; i++)
    {
        if(i%2!=0 && i%3==0)
        {
            sum = sum + i;
        }
    }

    printf("Sum = %d", sum);
    return 0;
    
}


//Q3. Take an input from the user and find the sum of its digit.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter n :");
    scanf("%d", &n);

    int sum = 0;

    while(n>0)
    {
        int digit = n%10;
        sum = sum + digit;
        n = n/10;
    }

    printf("Sum is %d", sum);

    return 0;

}


//Q4. Print the numbers from 10 down to 1 using a while loop.

#include<stdio.h>

int main()
{
    int i = 10;

    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }

    return 0;

}

//Q5. Find the sum of numbers from 1 to 10 using while loop.

#include<stdio.h>
int main()
{
    int sum = 0;
    int i = 1;

    while(i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum is %d",sum);
    return 0;

}


//Q6. Find the sum of all even numbers between 1 to 20 using a while loop.

#include<stdio.h>
int main()
{
    int sum = 0;
    int i = 1;

    while(i <= 20)
    {
        if(i%2==0)
        {
            sum = sum + i;
        }

        i++;
    }

    printf(" Sum is %d", sum);

    return 0;

}


//Q7. Count how many numbers between 1 and 50 are divisible by both 3 and 5.

#include<stdio.h>
int main()
{
    int count = 0;
    int i = 1;

    while(i <= 50)
    {
        if(i%3==0 && i%5==0)
        {
            count++;
        }

        i++;
    }

    printf("%d", count);

    return 0;
}


//Q8. Take an integer 'n' as input and print its reverse using the while loop.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d", &n);

    int reverse = 0;
    while (n>0)
    {
        int digit = n%10;
        reverse = reverse*10 + digit;
        n = n/10;
    }

    printf("Reverse = %d", reverse);
    return 0;
    
}


//Q9. Take an integer 'n' and count the number of digits in it using a while loop.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int count = 0;

    while(n>0)
    {
        int digit = n%10;
        count++;
        n = n/10;
    
    }

    printf(" The number of digits in the number is : %d", count);

    return 0;


}


// Q10. take an integer 'n' and print the sum of its digits and count the number of digits using a while loop.


#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int sum = 0;
    int count = 0;

    while(n>0)
    {
        int digit = n%10;
        sum = sum + digit;
        count++;
        n = n/10;
    }

    printf("The sum of the digits is : %d\n", sum);
    printf("The number of digits in the number is : %d",count);

    return 0;

}


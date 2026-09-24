//Q1. Take an integer 'n' and count the digits which are even and odd using a while loop.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d", &n);
    int is_even = 0;
    int is_odd = 0;

    while(n>0)
    {
        int digit = n%10;

        if(digit%2 == 0)
        {
            is_even++;
        }
        else
        {
            is_odd++;
        }

        n = n/10;
    }

    printf("The number of Even digits in the number is n: %d\n", is_even);
    printf("The number of Odd digits in the number is : %d", is_odd);

    return 0;

}

//Q2. Take an integer 'n' and print the largest and smallest digit in it using a while loop.

#include<stdio.h>
int main()
{
    long long n;
    printf("Enter n : ");
    scanf("%lld", &n);

    int is_largest = 0;
    int is_smallest = 9;

    while(n>0)
    {
        int digit = n%10;

        if(digit>is_largest)
        {
            is_largest = digit;
        }
        if(digit<is_smallest)
        {
            is_smallest = digit;
        }

        n = n/10;
    }

    printf("The largest digit in the number is : %d\n", is_largest);
    printf("The smallest digit in the number is : %d", is_smallest);

    return 0;

}

//Q3. Take an integer 'n' and find "difference = largest digit - smallest digit" in it using a while loop.

#include<stdio.h>
int main()
{
    long long n;
    printf("Enter n : ");
    scanf("%lld", &n);

    int is_largest = 0;
    int is_smallest = 9;

    while(n>0)
    {
        int digit = n%10;

        if(digit>is_largest)
        {
            is_largest = digit;
        }
        if(digit<is_smallest)
        {
            is_smallest = digit;
        }

        n = n/10;
    }

    int difference = is_largest - is_smallest;

    printf("The difference between the largest and smallest digit in the number is : %d", difference);

    return 0;

}

//Q4. Take an integer 'n' and check whwther it is a palindrome or not using a while loop.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int reverse = 0;
    int original = n;

    while(n>0)
    {
        int digit = n%10;
        reverse = reverse*10 + digit;
        n = n/10;
    }

    if(original == reverse)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;

}

//Q5. Take an integer 'n' and check whether the number is an Armstrong Number or not.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int original = n;
    int sum = 0;

    while(n>0)
    {
        int digit = n%10;
        sum = sum + digit*digit*digit;
        n = n/10;
    }

    if(original == sum)
    {
        printf("Armstrong Number.");
    }
    else
    {
        printf("Not an Armstrong Number.");
    }

    return 0;
}

//Q6. Take an integer 'n' and determine whether it is prime or not.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int is_prime = 1;
    int i = 2;

    while(i<n)
    {
        if(n%i==0)
        {
            is_prime = 0;
            break;
        }

        i++;
    }

    if(is_prime = 1)
    {
        printf("Prime number.");
    }
    else
    {
        printf("Not a Prime number.");
    }

    return 0;

}
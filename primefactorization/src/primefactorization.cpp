/**
 * @file: primefactorization.cpp
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/** 
 * @brief 
 * 
 * @param pnum
 * 
 * @return BOOL
 */
bool CheckForPrime (long pnum)
{
          
         bool           notprime = false;
         unsigned int   rootnum;
         unsigned int   prime = 3;

    rootnum = sqrt((float)pnum);
    //we don't have to make this chk as all the ip num are odd
    if (pnum % 2 == 0) {
        //if dvisible by 2
        //printf ("%d - Not prime\t",pnum);
        notprime = true;
        return false;
    } 

    while (prime <= rootnum && notprime == false) {
        //divide the number by all the odd numbers 
        if (pnum % prime == 0) {
           // printf("%d -Not prime\t", pnum);
            notprime = true;
            return false;
        }
        //increment by 2, only odd numbers
        prime += 2;       
    }
   
   //if it is a prime
    return true;
      
}
/** 
 * @brief To factorize a given number into its prime factors 
 *        with list of prime numbers generated
 * 
 * @param num
 */
void Factorize (__int64 pnum)
{
     unsigned long	factor= 0;       ///<input number     
     unsigned int	counter = 1;
     long long      sqrtnum =  sqrtl (pnum);
       
    //printf("Enter the number\n");
    //scanf ("%d",&num);
    //find the root of the num

    while (factor <= sqrtnum) {
        //generate the prime numbers
        factor = 6 * (counter) - 1;

        if (CheckForPrime(factor)) {
            if ((long long)pnum % factor == 0) {
            // if the number is divisible by the prime factor
            printf("%ll",factor);
            }
        }

        

        //generate a new number
        factor = 6 * (counter) + 1;
        
        if (CheckForPrime(factor)) {
            if (pnum % factor == 0) {
            // if the number is divisible by the prime factor
            printf("%l",factor);
            }
        }

        
        
        ++counter;
    }
}
int __cdecl main ()
{
        __int64 num;         ///< to store the number to factorize

    printf("Please enter the number\n");
    //read the number from the user
    scanf ("%I64d", &num);


    // 600851475143
    //factorize the number
    Factorize (num);
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

unsigned int gprimecount = 2;

bool CheckForPrime (unsigned int pnum)
{
          
         unsigned int rootnum;
         unsigned int prime = 3;

    rootnum = sqrt((double)pnum);
    //we don't have to make this chk as all the ip num are odd
    if (pnum % 2 == 0) {
        //if dvisible by 2
        //printf ("%d - Not prime\t",pnum);
       return false;
        
    } 

    while (prime <= rootnum) {
        //divide the number by all the odd numbers 
        if (pnum % prime == 0) {
           // printf("%d -Not prime\t", pnum);
            return false;
        }
        //increment by 2,  only odd numbers
        prime += 2;       
    }

   
   ++gprimecount;
   return true;
    
}

int __cdecl main ()
{
        unsigned int num = 0;       ///<input number     
        unsigned int counter = 1;
        unsigned int sum = 0;      

        sum = 2 + 3;        ///< sum of first 2 primes
    //printf("Enter the number\n");
    //scanf ("%d",&num);
    //find the root of the num

    while (1) {
		//while value of prime less than 2 million
        //generate the prime numbers
        num = 6 * (counter) - 1;
        if (num > 2000000) {
			break;
		}

        if (CheckForPrime(num)) {
            sum+=num;
            		
        }
        
        num = 6 * (counter) + 1;
		if (num > 2000000) {
			break;
		}
        
		if (CheckForPrime(num)) {
            sum+=num;            			
        }
        
        ++counter;
    }

    
}



// End-of-File



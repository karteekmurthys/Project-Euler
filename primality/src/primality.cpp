
// Sri Ganeshji : Sri Balaji : Sri Pitreshwarji : Sri Durgaji : Sri Venkateshwara

/**
 * @file <filename>.<extension>
 *
 * @brief This is the brief description of this module. 
 *
 * This continues into the more detailed description of the module.
 *
 * @author  Current Owner
 *
 * <ul>
 *     <li>A list of the services provided by this module
 *     <li>along with the intention of this module.
 * </ul>
 *
 * @note
 * <ul>
 *     <li>Additional notes on this function.
 * </ul>
 *
 * @see AnotherClass#AnotherFunction    ShortName
 * @see AnotherClass
 *
 * @warning
 * <ul>
 *     <li>Unexpected thing to keep in mind in this module.
 * </ul>
 * 
 * @todo
 * <ul>
 *     <li>Left to do in this module.
 * </ul>
 */


#include <stdio.h>
#include <math.h>

/** 
 * @brief Check for primality
 * 
 * 
 * @return int
 */

unsigned int gprimecount = 2;

void CheckForPrime (unsigned int pnum)
{
          
         bool         flag = false;
         unsigned int rootnum;
         unsigned int prime = 3;

    rootnum = sqrt((float)pnum);
    //we don't have to make this chk as all the ip num are odd
    if (pnum % 2 == 0) {
        //if dvisible by 2
        //printf ("%d - Not prime\t",pnum);
        flag = true;
        
    } 

    while (prime <= rootnum && flag == false) {
        //divide the number by all the odd numbers 
        if (pnum % prime == 0) {
           // printf("%d -Not prime\t", pnum);
            flag = true;
        }
        //increment by 2, only odd numbers
        prime += 2;       
    }
    if (flag == false) {
        ++gprimecount;
        printf("%d, %d\t", pnum, gprimecount);
    }
   
  
    
}

int main ()
{
        unsigned int num = 0;       ///<input number     
        unsigned int counter = 1;

       
    //printf("Enter the number\n");
    //scanf ("%d",&num);
    //find the root of the num

    while (gprimecount <= 10000) {
        //generate the prime numbers
        num = 6 * (counter) - 1;
        
        CheckForPrime(num);
        
        num = 6 * (counter) + 1;
        
        CheckForPrime(num);
        
        ++counter;
    }

    
}



// End-of-File

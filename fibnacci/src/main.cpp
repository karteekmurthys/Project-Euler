/**
 * @file main.CPP
 *
 * @brief To find the sum of even fibonacci numbers 
 */

#include <stdio.h>
#include <math.h>

/** 
 * @brief Genrates the fibonacci series and sums up all the even 
 *        numbers in the series
 * 
 * 
 * @return int
 */
int main ()
{
        unsigned int    n = 4000000, counter = 1;        ///< for n = 4 million
        double          goldenratio = (1 + sqrt (5.0))/2; ///< this is a root of the equation x^2 = x + 1
        double          conjugate = (1 - sqrt (5.0))/2;
        unsigned int    evensum = 0;                    ///< sum of even fib numbers
        unsigned int    fibn1 = 1, fibn2 = 2, fibnum = 0;                                /// < a fib number
    while (fibnum <= n) {
        //for 4 million numbers
        //find the nth fib number
        //relation between fibonacci and the golden ratio
        //fibnum =((powf (goldenratio, (float)counter) - powf (conjugate, (float)counter))/ sqrt (5.0));
       if (counter == 1) {
            fibnum = fibn1;
        } else if (counter == 2) {
            fibnum = fibn2;
        } else {
            fibnum = fibn2 + fibn1;
            fibn1= fibn2;
            fibn2 = fibnum;
        }

        if (fibnum % 2 == 0) {
            //case: if the num is even'
            //add
            evensum += fibnum;
        }
        ++counter;
    }

     printf("%u",evensum); 
}

// End-of-File

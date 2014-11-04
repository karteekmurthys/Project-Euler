/**
 * @file <filename>.CPP
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
#include <string.h>
#include <stdlib.h>
int main ()
{
        int     num = 0;
        char    numstr [7];
        char    revnum [7];
        int     len;
        int     j;
    for (int loopindexi = 800; loopindexi < 1000; ++loopindexi) {
        //for all the three-digit numbers from 100 to 999
        for (int loopindexj = 800; loopindexj < 1000; ++loopindexj) {

            num = loopindexi * loopindexj;			
           
            _itoa_s(num, numstr, 7,10); 
            //get the length of the string
           
            len = strlen (numstr);
           for (j = 0; j < len; ++j) {
               //reverse the string
               revnum [j] = numstr [len - j- 1];
            }
		   revnum [j] = 0;
            if (!strcmp (revnum, numstr)){
                //if the string is palindrome
                printf("%d\t", num);
            }
        }
        
    }
}




// End-of-File

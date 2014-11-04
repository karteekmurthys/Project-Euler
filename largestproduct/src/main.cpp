#include <stdio.h>
#include <stdlib.h>

int __cdecl main ()
{
        FILE *          numsrc;                 ///< file descriptor to the file that contains the 1000 digit number
        unsigned short  numarray [10001];           ///< array to store the 1000 digit number
        unsigned short  indexi = 0, indexj= 0;
        char *          numstr = (char *)malloc (1100); ///< to store the 1000 digits read from the file
        size_t          numofbytesread;         ///< number of bytes read

        int             maxvalue = 0, product = 0;
    //open the file for reading
    numsrc = fopen ("numsrc.txt", "r");

    if (numsrc == NULL) {
        //case: fopen failed
        printf("fopen failed!!");
        exit (0);
    }
    
	//read the new line characters too..there are 20 lines
    numofbytesread = fread (numstr,1, 1020, numsrc);
    while (indexi <= numofbytesread){
		if (numstr [indexi] == '\n') {
            //if the char is a new line char
			++indexi;
			continue;
		}
        //convert the char num into integer
        numarray [indexj] = numstr [indexi] - '0';
        ++indexi;
		++indexj;
    }

    indexj = 0;

    while (indexj <= 995) {

        product = numarray [indexj] * numarray [indexj + 1] * numarray [indexj + 2] * numarray[indexj +3] * numarray [indexj + 4];

        if (product > maxvalue) {
            //if the product is greater than the max value
            maxvalue = product;
			indexi = indexj;
        }
        ++indexj;
    }

    printf("Maxvalue = %d", maxvalue);

    free (numstr);
}

// End-of-File

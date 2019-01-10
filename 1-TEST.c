/*
TEST - Life, the Universe, and Everything
Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.
*/

#include <stdio.h>
 
main(int argc, char const *argv[])
{
    int input;
    while(1){
        scanf("%d",&input);
        if(input == 42)
            break;
        printf("%d\n",input);
    }
    
    return 0;
}

/*
PRIME1 - Prime Generator
Peter wants to generate some prime numbers for his cryptosystem. Help him! Your task is to generate all prime numbers between two given numbers!

Input
The input begins with the number t of test cases in a single line (t<=10). In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

Output
For every test case print all prime numbers p such that m <= p <= n, one number per line, test cases separated by an empty line.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
 
int main(int argc, char const *argv[])
{
    int number_of_tests;
    char raw_input[100];
 
 
    char *ptr;
 
    scanf(" %d",&number_of_tests);
    getchar();
 
    for(int i = 0; i < number_of_tests; i++){
        fgets(raw_input, 100, stdin);
        ptr = strtok(raw_input, " ");
    	int min = atoi(ptr);
    	ptr = strtok(NULL, " ");
        int max = atoi(ptr);
        
        for(int p = min; p <= max; p++){
            int prime = 1;
 
            for(int j = 0; j <= sqrt(p); j++){
                if(p < 2 || j > 1 && p%j == 0 &&  p != j){
                    prime = 0;
                    break;
                }
            }
            if(prime == 1)
                printf("%d\n",p);
        }
        if(i < number_of_tests - 1)
            printf("\n");
 
    }
    
 
    
    return 0;
}

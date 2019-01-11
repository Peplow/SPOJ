/*
ADDREV - Adding Reversed Numbers

The Antique Comedians of Malidinesia prefer comedies to tragedies. Unfortunately, most of the ancient plays are tragedies. Therefore the dramatic advisor of ACM has decided to transfigure some tragedies into comedies. Obviously, this work is very hard because the basic sense of the play must be kept intact, although all the things change to their opposites. For example the numbers: if any number appears in the tragedy, it must be converted to its reversed form before being accepted into the comedy play.

Reversed number is a number written in arabic numerals but the order of digits is reversed. The first digit becomes last and vice versa. For example, if the main hero had 1245 strawberries in the tragedy, he has 5421 of them now. Note that all the leading zeros are omitted. That means if the number ends with a zero, the zero is lost by reversing (e.g. 1200 gives 21). Also note that the reversed number never has any trailing zeros.

ACM needs to calculate with reversed numbers. Your task is to add two reversed numbers and output their reversed sum. Of course, the result is not unique because any particular number is a reversed form of several numbers (e.g. 21 could be 12, 120 or 1200 before reversing). Thus we must assume that no zeros were lost by reversing (e.g. assume that the original number was 12).

Input
The input consists of N cases (equal to about 10000). The first line of the input contains only positive integer N. Then follow the cases. Each case consists of exactly one line with two positive integers separated by space. These are the reversed numbers you are to add.

Output
For each case, print exactly one line containing only one integer - the reversed sum of two reversed numbers. Omit any leading zeros in the output.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
	int n; //number of inputs
	char raw[100];
	char first[100];
	char second[100];
	
    scanf(" %d",&n);
    getchar();
    
    char * reverse(char *s){
    	char *r = malloc(sizeof(s));

    	for(int i = 0; i <= strlen(s)-1; i++){
    		r[i] = s[strlen(s)-1-i];
    	}
    	r[strlen(s)+1] = '\0';

    	return r;
    }
    
	for(int i = 0; i < n; i++){
		fgets(raw, 99, stdin);
        strcpy(first,strtok(raw, " "));
    	strcpy(second,strtok(NULL, " "));
    	
    	// remove newline from second
    	if(second[strlen(second)-1] == '\n'){
    		second[strlen(second)-1] = '\0';
    	}
    	char * first_rev = reverse(first);
    	char * second_rev = reverse(second);
    	int result_rev = atoi(first_rev) + atoi(second_rev);
    	char result_reverse[100];
    	sprintf(result_reverse, "%d", result_rev);
    	char *result = reverse(result_reverse);
    	printf("%d\n",atoi(result));
    	

	}
	return 0;
}

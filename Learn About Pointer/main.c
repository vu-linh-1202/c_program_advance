#include <stdio.h>
#include <stdlib.h>

/***************** POINTER ****************/

void main_pointer() {
	/*Define a local variable*/
	int a = 1;
	/* define a pointer variable, and point it to a using the & operator */
	int* pointer_to_a = &a;
	a+=1;
	*pointer_to_a +=1;
	printf("The value a is %d\n", a);
	//printf("The value of a is also %d\n", *pointer_to_a);
	/*         a = *pointer_to_a        */
}

void  main_pointer_in_array()
{
	char vowels[] = {'A', 'E', 'I', 'O', 'U'};
	char* pointer_vowels = vowels;
	int i;

	/*Print address*/
	for( i = 0; i < 5; i++)
	{
		printf("&vowels[%d]: %p, pointer_vowels + %d: %p, vowels + %d: %p\n",i, &vowels[i], i, pointer_vowels + i, i, vowels + i);
	}

	/*print the values*/
	for (i = 0; i < 5; i++) 
	{
    	printf("vowels[%d]: %c, *(pointer_vowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pointer_vowels + i), i, *(vowels + i));
	}
}

int main()
{
	main_pointer();
	main_pointer_in_array();
	int n = 5;
	char* pointer_vowels = (char*)malloc(n*sizeof(char));
	int i;
	pointer_vowels[0]     = 'A';
	pointer_vowels[1]     = 'E';
	*(pointer_vowels + 2) = 'I';
	//pointer_vowels[2] = 'I';
    pointer_vowels[3]     = 'O';
	*(pointer_vowels+4)   = 'U';

	for( i = 0; i < n; i++)
	{
		printf("%c", pointer_vowels[i]);
	}
	printf("\n");
	free(pointer_vowels);
	return 0;
}

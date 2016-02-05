#include <stdio.h>

void inc_count(int *count_ptr)
{
	(*count_ptr)++;
}

void copy_string(char *dest, char *source)
{
	while(1)
	{
		*dest = *source;
		if(*dest == '\0')
		   return;
		++dest;
		++source;
	}
}
int main(void)
{
	int count = 0;
	int thing = 5;
	int *thing_ptr;
	char character1[] = {'z','y','x','w','v','u','t'};
	char *dest_ptr;
	char *source_ptr;
	int other;
	int index1;

	thing_ptr = &thing;
	source_ptr = &character1[0];
	other = *thing_ptr;
	*thing_ptr = 6;

	char array1[] = {'a','b','c','d','e','f','g','h','i','j'};
	char *array1_ptr = &array1[0];

	printf("The integers address is : %p \n", &thing);
	printf("The pointers address is : %p \n", thing_ptr);
	printf("The value of thing is : %d \n", thing);
	printf("The value of the thing_ptr: %p \n",&thing_ptr);
	printf("The value on other is : %d \n", other);

	while (count < 10)
	   inc_count(&count);

	printf("The value of count is: %d \n", count);

	printf("The pointer source_ptr, is equal to %c \n", *source_ptr);

	for(index1 = 0; index1 < 10; index1++)
	{
		printf("The char array value of index location = %i, is : %c \n",index1, (*array1_ptr + index1));
	}
	
	copy_string(dest_ptr,source_ptr);

	printf("The pointers address of the source pointer is : %p \n", thing_ptr);

	printf("The pointers address of destination pointer is : %p \n", dest_ptr);

	return 0;
}

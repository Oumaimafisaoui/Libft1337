#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int , char))
{
	char *array;
	size_t	i;


	if(!s || !f)
		return (NULL);
	i = 0;
	array = ft_strdup(s);
	if(array == NULL)
		return (NULL);
	while(array[i] != 0)
	{
		array[i] = f(i, array[i]);
		i++;
	}
	return (array);
}



/*char my_func(unsigned int i, char str)
{ 	
	printf("My inner function: index = %d and %c\n", i, str); 		return str - 32;
}
int main() 
{
	char str[10] = "hello.";
	printf("The result is %s\n", str);
	char *result = ft_strmapi(str, my_func);
 	printf("The result is %s\n", result);
 	return 0;
 }
 */

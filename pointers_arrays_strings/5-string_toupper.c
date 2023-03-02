#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * string_toupper - change lowercase to uppercase
 *
 *
 *
 *
 */

char *string_toupper(char *str)
{
  	size_t len = strlen(str);
  	size_t i;

  	for (i = 0; i < len; i++) 
	{
    	
		if (str[i] >= 'a' && str[i] <= 'z') 
		{
      
			str[i] = str[i] - 'a' + 'A'; 
		}
  }
  return str;
}

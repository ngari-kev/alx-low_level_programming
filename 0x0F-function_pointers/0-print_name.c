#include "function_pointers.h"
/**
  *print_name - prints name as per the name entered and the function passed
  *@name: pointer to name
  *@f: pointer to a function
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}

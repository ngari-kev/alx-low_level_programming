/**
*string_toupper - converts elements of an array to uppercase
*@_: pointer to string to be converted
*
*
*
*Return: pointer to string after conversion
*/
char *string_toupper(char *_)
{
	int i = 0, j = 0;/*counters*/

	while (_[i] != '\0')/* to get size of string*/
		i++;
	i--;/*size of string without null byte*/
	for (j = 0; j < i; j++)/*looping through the elements*/
	{
		if ((_[j] <= 90) && (_[j] >= 65))/*check if already uppercase*/
		{
			/*If already uppercase, do nothing*/
		}
		else if ((_[j] <= 122) && (_[j] >= 97))/* To check if lowercase*/
		{
			_[j] -= 32;/* change to upper*/
		}
		else/* if element is not a char, do nothing*/
		{}
	}
	return (_);
}

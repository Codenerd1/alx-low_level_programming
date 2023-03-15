/**
 * _isalpha - To check for alphabetic charachter
 * @c: The character to be checked
 * Return: either 1 or 0 for alphabetic character or anything else respectively
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

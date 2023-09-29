/**
 * _strncpy - Copies at most an inputted number
 * of bytes from string src into dest
 * @dest: The buffer storing the string copy
 * @src: The string to be copied
 * @n: The maximum number of bytes to be copied from src
 *
 * Description: This function copies at most 'n' bytes from the 'src' string
 * into the 'dest' buffer. If 'src' is shorter than 'n', it pads 'dest' with
 * null bytes ('\0') to reach 'n' bytes.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
int index = 0, src_len = 0;
while (src[index++])
src_len++;
for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];
for (index = src_len; index < n; index++)
dest[index] = '\0';
return (dest);
}

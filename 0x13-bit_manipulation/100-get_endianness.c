/**
 * get_endianness - checks whether the lsb starts or ends the fn
 *
 * Return: 0 for big endian, 1 for little
 */
int get_endianness(void)
{
	int check = 1;

	return ((int) (((char *)&check)[0]));
}

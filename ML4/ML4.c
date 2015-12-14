#define	ML4IN	0x600
#define	ML4OUT	0x400

#define	ML4READ		*((char *)	ML4IN)
#define	ML4WRITE	*((char *)	ML4OUT)

int main ( void )
{
	while(1)
	{
		char c = ML4READ;
		c = c >> 1;
		ML4WRITE = c;
	}

	return 0;
}
int add(int x, int y)
{
	return (x+y) ;
}

int fact(int x)
{
	if (x==0)
		return 1 ;
	else
		return x*fact(x-1) ;
}
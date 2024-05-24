int add(int i, int j)
{
	return i + j ;
}

int main(void)
{
	int j = 0;
	int i = 7;
	j = i;
	i = add(i,j);

	return 0;
}

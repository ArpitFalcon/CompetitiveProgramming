/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Harwork is the key to success. *
******************************************/


int fact(int x, int ar[], int ar_size)
{
	int c = 0; 
	for (int i=0; i< ar_size; i++)
	{   int p = ar[i] * x + c;
		ar[i] = p % 10; 
		c = p/10; 
	}

	while (c)
	{
		ar[ar_size] = c%10;
		c = c/10;
		ar_size++;
	}
	return ar_size;
	
}

void factorial(int n)
{
	int ar[10000];
	ar[0] = 1;
	int ar_size = 1;
	
	for (int x=2; x<=n; x++)
		ar_size = fact(x, ar, ar_size);
	
	for (int i=ar_size-1; i>=0; i--)
		cout << ar[i];	

	cout<<endl;
}

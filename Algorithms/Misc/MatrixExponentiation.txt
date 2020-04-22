/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
******************************************/

// Matrix Exponentiation to calculate Fibonacci Series.
// Time - O(lg N)
// Custom base case

void multi(long long int F[2][2], long long int M[2][2]);
void power(long long int F[2][2], long long int n);
 
int fib(long long int n)
{
	long long int F[2][2]  = {{1,1},{1,0}};
	if(n == 0)
		return 0;
	power(F, n-1);
 
	return F[0][0];
}
 
void multi(long long int F[2][2], long long int M[2][2])
{
	long long int x = ((F[0][0])%MOD *(M[0][0])%MOD + (F[0][1])%MOD*(M[1][0])%MOD )%MOD;
	long long int y = ((F[0][0])%MOD *(M[0][1])%MOD + (F[0][1])%MOD*(M[1][1])%MOD )%MOD;
	long long int z = ((F[1][0])%MOD *(M[0][0])%MOD + (F[1][1])%MOD*(M[1][0])%MOD )%MOD;
	long long int w = ((F[1][0])%MOD *(M[0][1])%MOD + (F[1][1])%MOD*(M[1][1])%MOD )%MOD;
 
	F[0][0] = (int)(x%MOD);
	F[0][1] = (int)(y%MOD);
	F[1][0] = (int)(z%MOD);
	F[1][1] = (int)(w%MOD);
}
 
void power(long long int F[2][2], long long int n)
{
	if(n == 0 || n == 1)
		return;
 
	long long int M[2][2] = {{1,1}, {1,0}};
 
	power(F, n/2);
	multi(F, F);
 
	if( n%2 != 0)
		multi(F, M);
 
}

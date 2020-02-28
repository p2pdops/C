long fact(int n)
{
    long result = 1;

    for(int i = 1 ; i <= n ; i++ ) result = result * i;

    return result;
}

long ncr(int n, int r) {
	return fact(n) / ( fact(r)*fact(n-r) )  ; 
}
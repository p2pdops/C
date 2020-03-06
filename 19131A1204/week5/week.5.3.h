int isPrime(int num) {

	int count = 0;

	for (int i = 1; i < num + 1; i++) if (num % i == 0) count += 1;
	
	if (count == 2) printf("Prime check: %d is a prime number.\n", num);
	
	return (count);
}

int factorial(int num) {
	
	int fac = 1;

	for(int i = 1; i <= num; i++ ) fac = fac * i ;

	return fac;
}

int factorial_rec(int num) { 
	return (num != 0) ? num * factorial_rec(num - 1) : 1;
}

int calcLcmWithGcd(int a, int b, int gcd) { return (a * b) / gcd; }

int calcLcm(int a, int b) {

	int	multiple = (a > b) ? a : b;

	while(1) {
		if(multiple % a == 0 && multiple % b == 0)
		 break;
		multiple++;
	}

	return multiple;
}

int calcGcd(int a, int b) {

	int	rem;

	if( a < b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}

	while(rem != 0) {
		rem = a % b;
		a = b;
		b = rem;
	}
	
	return a;
}
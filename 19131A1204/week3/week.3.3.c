#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, det, alpha , beta;
	
	printf("Enter a b c: ");
	
	scanf("%f %f %f", &a, &b, &c);
	
	det = b*b - 4*a*c;

	if (det == 0) {
		alpha = beta = -b/(2*a);
		printf("Nature of roots are real and equal, roots are %.2f & %.2f", alpha, beta);
	} else if (det > 0) {
		alpha = (-b + sqrt(det) )/(2*a);
		beta = (-b - sqrt(det) )/(2*a);
		printf("Nature of roots are real and distint, roots are %.2f & %.2f", alpha, beta);
	} else {
		alpha = (-b)/(2*a);
		beta = (sqrt(-det))/(2*a);
		printf("Nature of roots are imaginary and distint, root1 = (%.2f+%.2fi) and root2 = (%.2f-%.2fi)", alpha, beta, alpha, beta);
	}
	
	printf("\n");
	
	return 0;
}

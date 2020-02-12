#include <stdio.h>

int main()
{

	float a, b, c, det, x, sqrt_det, alpha , beta;

    printf("Enter a b c: ");

    scanf("%f %f %f", &a, &b, &c);

	det = b*b - 4*a*c;

	if (det == 0)
	{
		alpha = beta = -b/(2*a);
	    printf("Nature of roots are real and equal, roots are %.2f & %.2f", alpha, beta);
	}
	else
	{
		float num = ( (det>0) ? det : -1*det);
		sqrt_det =  num / 2; x = 0;
    	while(sqrt_det != x) {
        	x = sqrt_det;
        	sqrt_det = ( num /x + x) / 2;		
    	}

		if (det > 0)
		{
			alpha = (-b + sqrt_det)/(2*a); beta = (-b - sqrt_det)/(2*a);
			printf("Nature of roots are real and distint, roots are %.2f & %.2f", alpha, beta);
		}
		else 
		{
			char s11,s12,s21,s22;
			alpha = (-b)/(2*a);
			beta = (-b)/(2*a);

			float imaginary = sqrt_det/2*a;

			if(imaginary > 0 ) {
				s11 = '\0';
				s12 = '+';
				if(beta < 0) {
					beta = -beta;
					s21 = '-';
					s22 = '+';
				} else {
					s21 = '\0';
					s22 = '-';
				}
			} else {
				imaginary = -imaginary;
				if(alpha<0) {
					alpha = -alpha;
					s11 = '-';
					s12 = '+';
				} else {
					s11 = '\0';
					s12 = '-';
				}
				s21 = '\0';
				s22 = '+';
				
			}

			printf("Nature of roots are imaginary and distint, roots are %c(%.2f%c%.2fi) & %c(%.2f%c%.2fi)",
						s11,alpha,s12,imaginary,s21,beta, s22,imaginary);	
		}
	}

	printf("\n");
	return 0;
}

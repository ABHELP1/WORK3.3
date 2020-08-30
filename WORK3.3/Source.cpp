#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int n, n2, n3, s, s2, s3;
int max = 0;
int DV;
int an = 1;
int l = 1;
int ans,ans2;
int x = 1;
int GD();
int LC();
int main() {
	printf("Enter first number :");
	scanf("%d", &s);
	printf("Enter secound number :");
	scanf("%d", &s2);
	printf("Enter Third number :");
	scanf("%d", &s3);
	n = abs(s);
	n2 = abs(s2);
	n3 = abs(s3);
	ans2 = n * n2 * n3;
	GD();
	LC();
	ans = max * an;
	if (ans2 == ans) {
		printf("Absolutely yes");
	}
	else {
		printf("meybe no");
	}

}
int GD() {

	if (n > n2 && n > n3) {
		DV = n;
	}
	else if (n2 > n && n > n3) {
		DV = n2;
	}
	else if (n3 > n && n3 > n2) {
		DV = n3;
	}
	else {
		max = n;
	}
	while (max == 0) {
		if (n % DV == 0 && n2 % DV == 0 && n3 % DV == 0) {
			max = DV;

		}
		else {

			DV = DV - 1;
		}
	}
	return max;
}
int LC() {
	while (l == 1)
	{
		if (n % x == 0 || n2 % x == 0 || n3 % x == 0) {
			an = an * x;
		}
		else if (n % x != 0 && n2 % x != 0 && n3 % x != 0) {
			an = an * n * n2 * n3;
			l = 0;
		}
		if (n % x == 0) {
			n = n / x;

		}
		if (n2 % x == 0) {
			n2 = n2 / x;
		}
		if (n3 % x == 0) {
			n3 = n3 / x;
		}
		x = x + 1;
	}
	return an;
}
	

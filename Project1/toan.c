#include "toan.h"

int sum(int a) {
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		sum = sum + i;
	}
	return sum;
}

int giaithua(int c) {
	int giaithua = 1;
	for (int i = 1;i <= c;i++) {
		giaithua = giaithua * i;
	}
	return giaithua;
}

int tongchan(int m) {
	int tongchan = 0;
	for (int i = 0;i <= m; i +=2) {
		tongchan = tongchan + i;
	}
	return tongchan;
}
int ucln(int a, int b) {
	if (a == 0 || b == 0) {
		return a + b;
	}
	
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else{
			b = b - a;
		}
		
		if (a - b == 1 || b - a == 1) {
			return 1;
		}

	}
	return a;
}
int atm(int a) {
	if (a % 50000 == 0) {
		if(a)

		}

	}
	
}
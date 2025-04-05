#include <stdio.h>
#include "toan.h"
#include <math.h>
//Bai 1
/*
int main() {
    printf("Hay nhap so can tinh tong: ");
    int d;
    scanf_s("%d", &d);
    printf("\n");

    printf("Hay nhap so can tinh tong cac so chan: ");
    int m;
    scanf_s("%d", &m);
    printf("\n");

    printf("Hay nhap so can tinh giai thua: ");
    int b;
    scanf_s("%d", &b);
    printf("\n");

    int c = giaithua(b);
    int a = sum(d);
    int s = tongchan(m);

    printf("Tong can tinh la: ");
    printf("%d", a);
    printf("\n");

    printf("Tong cac so chan la: ");
    printf("%d", s);
    printf("\n");

    printf("Giai thua can tinh la: ");
    printf("%d", c);
}
*/
//Bai 2

/*
int main() {
	int f;
	while (1) {
		printf("Nhap 1 so neu la 0 se dung lai: ");
		scanf_s("%d", &f);
		if (f == 0) {
			break;
		}
	}


	return 0;
}
*/

//Bai 4
/*
int main() {
    printf("nhap vao so cua bang cuu chuong: ");
    int a;
    int c;
    scanf_s("%d", &a);
    int b = 10;
    for (int i = 1; i <= b; i++) {
        c = a * i;
        printf(" %d * %d = % d\n", a, i, c);
    }

}
*/


//Bai 4.2
/*
int main() {
    double tienGoc, r;
    int n;

    printf("Nhap vao so tien gui ban dau: ");
    scanf_s("%lf", &tienGoc);

    r = 8.2 / 100;

    printf("Nhap vao so nam gui: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        double tongTien = tienGoc * pow(1 + r, i);
        printf("Nam %d: %.lf VND\n", i, tongTien);
    }

    return 0;
}
*/

//Bai 5
/*
int main() {
    int n;
    printf("Nhap vao so n:");
    scanf_s("%d", &n);
    for ( int i = 2; i < n; i++){
        int count = 0;
        for (int x = 2;x <= i / 2;x++) {
            if (i % x == 0) {
                count++;
                break;
            }
        }
        if (count == 0) {
            printf("%d\n", i);
        }
    }
    
}
*/
//Bai 6
/*
int main() {
    int a, b;
    printf("Nhap 2 so can tim UCLN: ");
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    printf("%d", ucln(a, b));

}
*/

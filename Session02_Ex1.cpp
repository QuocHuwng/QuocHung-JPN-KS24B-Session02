#include<stdio.h>

int main() {
	int x = 10; // Kieu so nguyen(Integer): Luu tru so nguyen, nhu int, short, long.
	float PI = 3.14; // Kieu so thuc(Floating-point): Luu tru so co dau thap phan, nhu float, double.
	char grade = 'A'; // Kieu ky tu (Character): Luu tru mot ky tu duy nhat, nhu char.
	bool chan = true; // Bien nay dai dien cho viec la so chan. 
	bool le = false; // Bien nay dai dien cho viec la so le.
	 
	printf("So nay la %d\n", x);
	printf("Ban kinh la %f\n", PI);
	printf("Grade: %c\n", grade );
	printf("chan: %s", chan ? "true" : "false");
}

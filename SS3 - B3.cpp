#include<stdio.h>

int main(){
	
	//Khai bao bien sau do nhap gia tri
	int pi=3.14;
	float r;
	scanf("%f", &r);
	
	//Thay gia tri vao cong thuc sau do in ra ket qua
	
	float Chuvi= r*2*pi;
	float Dientich= r*r*pi;
	printf("Chu vi hinh tron la %.2f\n", Chuvi);
	printf("Dien tich hinh tron la %.2f ", Dientich);
	
	return 0;
}

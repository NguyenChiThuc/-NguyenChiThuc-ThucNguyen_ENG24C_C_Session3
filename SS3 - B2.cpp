#include<stdio.h>

int main(){
	
	//khai bao sau do yeu cau nhap gia tri
	
	float C;
	scanf("%f", &C);
	
	// Thay gia tri vao cong thuc roi in ra dap an
	float F= (C*9/5)+32;
	printf("Ket qua la %.2f", F);
	
	return 0;
}

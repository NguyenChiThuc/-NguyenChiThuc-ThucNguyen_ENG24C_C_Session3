#include<stdio.h>

int main(){
	
	//Khai bao ten bien va cho nhap gia tri
	
	float Toan;
	float Van;
	float Anh;
	printf("Moi nhap lan luot diem 3 mon Toan Van Anh");
	scanf("%f %f %f", &Toan, &Van, &Anh);
	
	
	//Thay bien vua nhap vao cong thuc roi tinh ket qua sau do in ra
	
	float Tongdiem = Toan+Van+Anh;
	float Diemtrungbinh = (Toan+Van+Anh)/3;
	printf("Tong diem 3 mon cua ban la %.2f\n,", Tongdiem);
	printf("Diem trung binh 3 mon cua ban la %.2f", Diemtrungbinh);
	
	return 0;

	
}

#include<stdio.h>

int main(){
	
	//Khai bao bien va cho nhap do dai canh va chieu cao cua tam giac
	
	float bottomEdge;
	float height;
	printf("Moi ban nhap canh day cua tam giac va chieu cao");
	scanf("%f %f", &bottomEdge, &height);
	
	//Thay bien vua nhap vao cong thuc roi tinh ket qua sau do in ra
	
	float dientich= (bottomEdge+height)/2;
	printf("Dien tich cua tam giac la %.2f", dientich);
	
	return 0;
	
}

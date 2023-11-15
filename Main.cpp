#include "Header.h"

int main()
{
	int a[MAX];
	nhap(a, 10);
	//Goi ham tinh tong cac phan tu co trong mang

	cout<<"Ket qua tong cua mang la "<<tong(a,10)<<endl;
	return 0;
}
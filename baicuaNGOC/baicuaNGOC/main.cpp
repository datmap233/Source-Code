#include "Header.h"
int main()
{
	node head = input();
	int n;
	cout << "Nhap phan tu can xoa: ";
	cin >> n;
	head = del_val(head, n);
	printList(head);
}
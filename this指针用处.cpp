#include<iostream>
using namespace std;

class A {
public:
	int get() {
		return i;
	}

	void set(int x) {
		this->i = x;
		cout << "thisָ�뱣����ڴ��ַΪ��" << this << endl;
	}

private:
	int i;
};


int main() {

	A a;
	a.set(10);
	cout << "����a���ڴ��ַΪ��" << &a << endl;
	cout << "����a�������ֵΪ��" << a.get() << endl;


	A b;
	b.set(100);
	cout << "����b���ڴ��ַΪ��" << &b << endl;
	cout << "����b�������ֵΪ��" << b.get() << endl;
}
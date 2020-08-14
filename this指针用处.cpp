#include<iostream>
using namespace std;

class A {
public:
	int get() {
		return i;
	}

	void set(int x) {
		this->i = x;
		cout << "this指针保存的内存地址为：" << this << endl;
	}

private:
	int i;
};


int main() {

	A a;
	a.set(10);
	cout << "对象a的内存地址为：" << &a << endl;
	cout << "对象a所保存的值为：" << a.get() << endl;


	A b;
	b.set(100);
	cout << "对象b的内存地址为：" << &b << endl;
	cout << "对象b所保存的值为：" << b.get() << endl;
}
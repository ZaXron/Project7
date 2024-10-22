//#include <iostream>
//#include <random>
//using namespace std;
//class Drob {
//	float denominator;
//	float numeral;
//public:
//	Drob(int a, int b) {
//		denominator = b;
//		numeral = a;
//
//		if (b == 0) {
//			cout << "знаменитель не ноль!";
//		}
//	Drob() {
//		denominator = 1;
//		numeral = 0;
//	}
//
//	void Rand() {
//		srand(time(0));
//		numeral = rand() % 100 + 3;
//		numeral = rand() % 100 + 3;
//	}
//	void Show() {
//		cout << numeral << "/" << denominator << " = " << numeral / denominator <<endl;
//	}
//	Drob operator+(int x) {
//		denominator = denominator + x;
//		numeral = numeral + x;
//
//	}
//	Drob operator+(Drob * obj) {
//		denominator = denominator + obj->denominator;
//		numeral = numeral + obj->numeral;
//	}
//	Drob operator-(int x) {
//		denominator = denominator - x;
//		numeral = numeral - x;
//
//	}
//	Drob operator-(Drob* obj) {
//		denominator = denominator - obj->denominator;
//		numeral = numeral - obj->numeral;
//	}
//	Drob operator/(int x) {
//		denominator = denominator / x;
//		numeral = numeral / x;
//
//	}
//	Drob operator/(Drob* obj) {
//		denominator = denominator / obj->denominator;
//		numeral = numeral / obj->numeral;
//	}
//	Drob operator*(int x) {
//		denominator = denominator * x;
//		numeral = numeral * x;
//
//	}
//	Drob operator*(Drob* obj) {
//		denominator = denominator * obj->denominator;
//		numeral = numeral * obj->numeral;
//	}
//	Drob operator--(int) {
//		Drob temp(*this);
//		denominator -= 1;
//		numeral -= 1;
//		return temp;
//	}
//	Drob& operator++() {
//		denominator += 1;
//		numeral += 1;
//		return *this;
//	}
//
//	Drob& operator--() {
//		denominator -= 1;
//		numeral -= 1;
//		return *this
//	}
//};
//int main()
//{
//	srand(time(0));
//	Drob f(5,5);
//	Drob c = f--;
//	f.Show();
//	c.Show();
//}
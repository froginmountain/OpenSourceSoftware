#include <iostream>

using namespace std;

int main() {

	int num1, num2;

	cout << "Enter the first number : ";
	cin >> num1;

	cout << "Enter the second number : ";
	cin >> num2;

	if (num1 > num2) {
		cout << num1 << ">" << num2 << endl;
	}
	else if (num1 == num2) {
		cout << num1 << "=" << num2 << endl;
	}
	else if (num1 < num2) {
		cout << num1 << "<" << num2 << endl;
	}

	return 0;
}

//25세 이상 100세 이하 고객만 차량 렌트 가능
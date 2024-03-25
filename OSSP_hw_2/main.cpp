#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	string code;

	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "학번을 입력하세요: ";
	cin >> code;

	cout << "<출력>" << endl;
	cout << "이름: " << name << endl;
	cout << "학번: " << code << endl;
	return 0;
}
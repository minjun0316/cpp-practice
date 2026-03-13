#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "hello world";
	string start;

	cout << "문자열 입력: ";
	getline(cin, start);
	for (int i = 0; i < start.length(); i++) {
		for (int j = 0; j <= i; j++) {
			cout << start[j];
		}
		cout << '\n';
	}
}

#include <iostream>
#include <list>
using namespace std;

int main() {
	int N;
	cin >> N;
	list<char> pwd;
	list<char>::iterator it;
	string input;

	for (int i = 0; i < N; i++) {
		cin >> input;
		it = pwd.end();
		for (char c : input) {
			if (c == '-') {
				if (!(pwd.empty())&&it!=pwd.begin()) {
					it--;
					it = pwd.erase(it);
				}
			}
			else if (c == '<') {
				if (it != pwd.begin()) {
					it--;
				}
			}
			else if (c == '>') {
				if (it != pwd.end()) {
					it++;
				}
			}
			else {
				pwd.insert(it, c);
			}
		}
		for (auto k : pwd) {
			cout << k;
		}
		cout << "\n";
		pwd.clear();
	}
	return 0;
}

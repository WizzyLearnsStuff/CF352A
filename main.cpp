#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int f = 0, z = 0;
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		f += (j == 5);
		z += (j == 0);
	}

	if (z == 0) {
		cout << -1;
		return 0;
	}

	if (f == 0 || f < 9) {
		cout << 0;
		return 0;
	}

	for (int i = 0; i < (f / 9); i++) {
		cout << "555555555";
	}

	for(int i = 0; i < z; i++) {
		cout << '0';
	}

	return 0;;
}

#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int array[100000];
	for (int i = m; i < m + n; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < m; i++) {
		array[i] = array[n + i];
	}
	for (int i = 0; i < n; i++) {
		cout << array[i] << ' ';
	}
	cout << endl;
	return 0;
}

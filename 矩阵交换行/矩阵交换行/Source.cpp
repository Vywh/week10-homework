#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int matrix[5][5];
	//行用column，列用row表示
	for (int column = 0; column < 5; column++) {
		for (int row = 0; row < 5; row++) {
			cin >> matrix[column][row];
		}
	}
	int m, n;
	cin >> n >> m;
	int tmp;
	if (0 <= m && m <= 4 && 0 <= n && n <= 4) {
		for (int i = 0; i < 5; i++) {
			tmp = matrix[m][i];
			matrix[m][i] = matrix[n][i];
			matrix[n][i] = tmp;
		}
		for (int column = 0; column < 5; column++) {
			for (int row = 0; row < 5; row++) {
				cout << setw(4) << matrix[column][row];
			}
			cout << endl;
		}
	}
	else {
		cout << "error" << endl;
	}
	return 0;
}

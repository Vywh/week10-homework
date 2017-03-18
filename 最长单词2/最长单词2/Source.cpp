#include <iostream>
using namespace std;

int main() {
	int i = -1, first = 0, last = 0, currentfirst = 0, currentlast = 0, count = 0, maxlength = 0;
	char sentence[500];
	cin.getline(sentence, 500);
	while (sentence[i] != '.') {
		i++;
		currentfirst = i;
		count = 0;
		while (sentence[i] != ' ' && sentence[i] != '.') {
			count++;
			i++;
		}
		currentlast = i - 1;
		if (count > maxlength) {
			first = currentfirst;
			last = currentlast;
			maxlength = count;
		}
	}
	for (int j = first; j <= last; j++) {
		cout << sentence[j];
	}
	return 0;
}
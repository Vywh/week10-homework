#include<iostream>

using namespace std;

int main() {
	char words[80];
	cin.getline(words, 80);
	int count[5] = { 0 };
	//count��������a��e��i��o��u���ִ�������0-5�ֱ�˳���Ӧ
	for (int i = 0; i < 80; i++) {
		switch (words[i])
		{
		case 'a':
			count[0]++;
			break;
		case 'e':
			count[1]++;
			break;
		case 'i':
			count[2]++;
			break;
		case 'o':
			count[3]++;
			break;
		case 'u':
			count[4]++;
			break;
		default:
			break;
		}
	}
	cout << count[0] << ' ' << count[1] << ' ' << count[2] << ' ' << count[3] << ' ' << count[4] << endl;
	return 0;
}

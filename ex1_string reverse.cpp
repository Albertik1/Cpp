#include <iostream>
using namespace std;
int main()
{
	int c, x = 0, i;
	cin >> c;
	while (x < c) {
		char text[50] = {};
		cin >> text;

		for (i = 50 - 1; i >= 0; i--) {
			if (text[i] == 0) {
				continue;
			}
			else {
				cout << text[i];
			}
		}
		cout << endl;
		x++;
	}


	return 0;
}

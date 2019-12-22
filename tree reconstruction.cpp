#include <iostream>
#include <string>
using namespace std;

void compute(string a, string in) {
	int c;
	for (c = 0; c < in.length() && in[c] != a[0]; ++c);
	if (c > 0)
		compute(a.substr(1, c), in.substr(0, c));
	if (c+1 < a.length())
		compute(a.substr(1+c), in.substr(1+c));
	cout << a[0];
}

int main() {
	string a, in;
	while (cin >>a >> in) {
		compute(a, in);
		cout << endl;
	}
	return 0;
}

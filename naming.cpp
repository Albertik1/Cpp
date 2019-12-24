#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

int main() {
    string str;
    bool first_char = true;
    while( getline(cin, str) ) {
        for(int i = 0, j = -1 ; i < str.size() ; i++) {
            if( !isalpha(str[i]) ) {
                first_char = true;
                continue;
            }
            if( first_char ) {
                cout << (char)toupper(str[i]);
                first_char = false;
            }
            else {
                if( isupper(str[i]) )
                    cout << (char)tolower(str[i]);
                else
                    cout << str[i];
            }
        }
        cout << endl;
        first_char = true;
    }
    return 0;
}


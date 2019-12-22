#include <iostream>
using namespace std;

int main(){
    int reader_num, book_num;
    while(cin >> reader_num >> book_num){
        int reader[200];
        int *book = new int [book_num];

        for (int i = 0; i < book_num; i++){
            book[i] = 0;
        }

        for (int i = 0; i < reader_num; i++){
            cin >> reader[i];
            book[reader[i] - 1]++;
        }

        for (int i = 0; i < reader_num; i++){
            if (book [reader[i] - 1] > 1){
                cout << book[reader[i] - 1] - 1 << endl;
            }
            else {
                cout << "BeiJu" << endl;
            }
        }
    }
    return 0;
}


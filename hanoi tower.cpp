#include <iostream>
using namespace std;

static int Counter = 1;
void Move(int n , char x, char z) {
    cout << Counter++ << ". Move disk " << n << " from " << x << " to " << z << endl;
}

void hanoi(int n, char x, char y, char z){
    if (n == 1){
        Move( 1, x, z);
    }
    else{
        hanoi(n-1, x, z, y);
        Move( n, x, z);
        hanoi(n-1, y, x, z);
    }
}

int main()
{
    int num_disk;
    while( cin >> num_disk ) {
        hanoi( num_disk , 'X', 'Y', 'Z');
        cout << endl;
        Counter = 1;
    }
    return 0;
}



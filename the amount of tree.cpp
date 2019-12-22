#include <iostream>
using namespace std;

int main()
{
    int node_size, edge_size;
    int node[100], n_1 , n_2;
    while( cin >> node_size >> edge_size) {
        int Count = 0;
        for(int i = 0 ; i < node_size + 1 ; i++ )
            node[i] = 0;
        for(int i = 0 ; i < edge_size ; i++ ) {
            cin >> n_1 >> n_2;
            for(int j = 1 ; j < node_size + 1 ; j++ ) {
                if( n_1 == j && node[n_1] != 2 )
                    node[j] = 1;
                if( n_2 == j )
                    node[j] = 2;
            }
        }
        for(int i = node_size ; i > 0; i-- )
            if( node[i] == 1 )
                Count++;
        cout << Count << endl;
        for(int i = 1 ; i < node_size + 1 ; i++ )
            if( node[i] == 1 )
                cout << i << " ";
        cout << endl;
    }

    return 0;
}



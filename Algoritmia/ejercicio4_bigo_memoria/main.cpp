#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    for(int e = 0; e <= 100; e += 5){

        int N, i, j, *a, usedMemory = 0;


        N = e;

        usedMemory += sizeof(N) + sizeof(i) + sizeof(j) + sizeof(a);

        for (i = 0; i < N; i++) {
            a = new int[N];

            usedMemory += sizeof(a[i]);

            for (j = 0; j < N; j++) {
                a[j] = j * i;
            }

            delete[]a;
        }

        cout<<usedMemory<<endl;
    }


    return 0;
}

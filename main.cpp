#include <iostream>
#include<vector>
using namespace std;
    
int main() {
    srand(time(0)); 
    
    int n, i, j, t;

    cout << "quante cifre bisogna inserire?" << endl;
    cin >> n;
    int r[n];
    

    i = 0;
    while (i < n) {
        r[i] = rand() % (n * 10 + 1);
        i = i + 1;
    }
    i = 0;
    t = 0;
    j = 0;
    while (i < n) {
        j = 0;
        while (j < n - 1) {
            if (r[j] > r[j + 1]) {
                t = r[j];
                r[j] = r[j + 1];
                r[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << r[i] << endl;
        i = i + 1;
    }
    
}



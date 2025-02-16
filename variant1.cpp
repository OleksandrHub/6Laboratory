include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i;
    cout << "n = "; 
    cin >> n;
    float m, A[n];
    for (i = 0; i < n; i++) { 
        cout << "A[" << i << "] = "; 
        cin >> A[i]; 
    }
    m = A[0];
    for (i = 1; i < n; i++) {
        if (A[i] > m && A[i] != 0) 
            m = A[i];
    }
    for (i = 0; i < n; i++) {
        cout << "A[" << i << "] = " << A[i] / m << endl;
    }
    return 0;
}

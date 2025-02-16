#include <iostream>
#include <cmath>
using namespace std;
const int n = 15;
int main()
{
    int  i;
    float m, A[n]= {-12,7,0,-25,4,18,-9,0,33,-6,15,-8,21,0,-5 } ;

    m = *A;

    for (i = 1; i < n; i++) {
        if (*(A+i) > m && *(A+i) != 0) 
            m = *(A+i);
    }

    for (i = 0; i < n; i++) {
        cout << "A[" << i << "] = " << *(A+i) / m << endl;
    }


    return 0;
}

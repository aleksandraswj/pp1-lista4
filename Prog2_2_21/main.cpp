#include <iostream>

using namespace std;

//2.2.21 Napisz rekurencyjną funkcję zwracającą dla otrzymanej w argumencie
//nieujemnej liczby całkowitej n wartość elementu o indeksie n ciągu
//zdefiniowanego w następujący sposób:
//a0 = 1
//an = 2 ∗ an−1 + 5 dla n > 0.

unsigned int rek(unsigned int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return 2*rek(n-1)+5;
    }
}

int main()
{
    unsigned int n;
    cin >> n ;
    cout << rek(n) << endl;
    return 0;
}

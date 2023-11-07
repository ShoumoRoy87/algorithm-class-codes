#include <bits/stdc++.h>
using namespace std;

long long int fib(int n) {
    long long int F[100000];
    F[0] = 0, F[1] = 1;
    for (int i = 2; i <= n; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n];
}
long long int F[100000];
long long int fib2(int n) 
{
    if (n == 0 || n == 1) {
        F[n] = n;
        return n;
    }

    if (F[n] == 0) {
        F[n] = fib2(n - 1) + fib2(n - 2);
    }

    return F[n];
}

int main() {
    int n;
    cin >> n;
    long long int nfib = fib(n);
    long long int nfib2 = fib2(n);
    cout << n << "th fibo: " << nfib2 << endl;
}

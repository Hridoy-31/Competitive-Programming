#include <bits/stdc++.h>
#define MAX 32000
using namespace std;

vector<int> isPrime;

void sieve () {
    bool prime[MAX];
    memset(prime, true, sizeof(prime));

    for (int i=3; i*i<=MAX; i+=2) {
        if (prime[i]) {
            for (int j = i*i; j <=MAX; j+=i) {
                prime[j] = false;
            }
        }
    }

    isPrime.push_back(2);

    for (int i=3; i<MAX; i+=2) {
        if (prime[i]) {
            isPrime.push_back(i);
        }
    }
}

void segSieve (long long l, long long r) {
    bool prime[r-l+1];
    memset(prime, true, sizeof(prime));

    if (l==1) {
        prime[0] = false;
    }

    for (int i=0; isPrime[i]*isPrime[i]<=r; i++) {
        int currPrime = isPrime[i];
        long long base = (l/currPrime) * currPrime;

        if (base < l) {
            base = base + currPrime;
        }

        for (long long j=base; j<=r; j+=currPrime) {
            prime[j-l] = false;
        }
        if (base == currPrime) {
            prime[base - l] = true; 
        }
    }
    
    for (int i=0; i<r-l+1; i++) {
        if (prime[i]) {
            cout << i+l << endl;
        }
    }
    //cout << endl;
}

int main()
{
    int t;
    cin >> t;
    long long m,n;

    while(t--) {
        cin >> m >> n;
        sieve();
        segSieve(m,n);
        cout << endl;
    }

    return 0;
}                   

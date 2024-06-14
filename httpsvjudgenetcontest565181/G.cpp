#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, A;
        cin >> N >> A;
            N=N-A;
            cout<<min(N,A )<<endl;
    }
    return 0;
}

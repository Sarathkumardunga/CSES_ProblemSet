//Problem link: https://cses.fi/problemset/task/1068/

//Solution link: https://cses.fi/paste/0db6d815d09826dd8d8b45/

/*
Time Complexity: O(k), where 'k' is the number of iterations until 'n' becomes 1. In practice, it's often O(log n).
                 worst case: O(n)
Space Complexity: O(1), constant space usage.

*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void simulate(ll n) {
    while(true) {
        cout<<n<<" ";
        if(n == 1) break;

        if(n&1) { //is last bit is 1, i.e n is odd
            n = 3*n + 1;
        }
        else { // it is even
            n = n >> 1;
            //n /= 2;
        }
    }
}

int main() {
    ll n;
    cin>>n;

    simulate(n);
    cout << "\n";
    return 0;
}
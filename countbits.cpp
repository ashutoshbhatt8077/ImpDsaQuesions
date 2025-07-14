#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()// Function to count bits in an integer
{
    ll n;// Number till which we have to count bits
    cin>>n;
    ll count = 0;
    ll i = 0;
    while ((1LL << i) <= n) {
        ll totalPairs = (n + 1) / (1LL << (i + 1));// Count of complete pairs of 0s and 1s
        count += totalPairs * (1LL << i);// Each pair contributes i bits

        ll remainder = (n + 1) % (1LL << (i + 1));// Remainder after counting complete pairs
        count += max(0LL, remainder - (1LL << i));// Count bits in the remainder
        i++;
    }
    cout<<count<<endl; // Return the total count of bits
}
int main()
{
    solve(); // Call the solve function
    return 0; // Return 0 to indicate successful execution
}
#include<iostream>
#include<utility>
#include<math.h>
#include<vector>
using namespace std;

// primes
const int MAX_LIMIT = 10000;
vector<bool> sieve(MAX_LIMIT + 1, true);

void generate_primes() {
    sieve[0] = sieve[1] = false; // 0 and 1 are not primes
    for (int i = 2; i * i <= MAX_LIMIT; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= MAX_LIMIT; j += i) {
                sieve[j] = false;
            }
        }
    }
}

bool is_prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}

pair<int,int> Goldbach_conjecture(int n){
    pair<int,int> nums;
    for(int i=2;i<=n/2;i++){
        if(is_prime(i) && is_prime(n-i)){
            nums.first=i;
            nums.second=n-i;
            return nums;
        }
    }
}


int main(){
    int n;
    while(cin >> n && n!=0){
        if(n%2 || n==2)cout << "No answer!\n";
        else if(n>10000)cout << "Out of scope!\n";
        else{
            pair<int,int> nums = Goldbach_conjecture(n);
            cout << nums.first << " " << nums.second << "\n";
        }
    }
}
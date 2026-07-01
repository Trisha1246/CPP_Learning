#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int temp = i;
        int digits = 0;
        while(temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = i;
        int sum = 0;
        while(temp > 0) {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if(sum == i) {
            cout << i << " ";
        }
    }

    return 0;
}

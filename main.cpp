#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num;
    cin >> num;
    bitset<8>bits(num);
    cout << bits << endl;
    return 0;
}

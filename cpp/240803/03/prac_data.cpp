#include <iostream>

using namespace std;

int main() {

    char a = 'A';
    cout << a << " / " << (int) a << " / " << int(a) << " / " << static_cast<int>(a) << endl;
    
    return 0;
}
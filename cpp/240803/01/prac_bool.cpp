#include <iostream>

using namespace std;

int main() {
    bool a = true;

    // bool값 true/false로 출력되게 하기
    cout << boolalpha << a << endl;
    cout << noboolalpha << a << endl;

    return 0;
}
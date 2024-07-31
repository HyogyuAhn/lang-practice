#include <iostream>

using namespace std;

int main() {

    /*
    1. 숫자 X
    2. cpp 예약어
    3. white space X

    1. int 123abc;
    2. int return;
    3. int 1 2 3;
    */

   // 정수형
   int a = 1;  // 4 byte
   short b = 2;  // 2 byte
   long c = 3L;  // 4 byte
   long long d = 4LL;  // 8 byte

   cout << "int a : " << a << " / 크기 : " << sizeof a << "Byte" << endl;
   cout << "short b : " << b << " / 크기 : " << sizeof b << "Byte" << endl;
   cout << "long c : " << c << " / 크기 : " << sizeof c << "Byte" << endl;
   cout << "long long : " << d << " / 크기 : " << sizeof d << "Byte" << endl;

    // 실수형
    float e = 3.14f;  // 4 byte

    cout << "float e : " << e << " / 크기 : " << sizeof e << "Byte" << endl;
 

    char f = 'f';
    cout << "char f : " << f << endl;

    // 참, 거짓
    bool g = true;
    cout << "boolean g : " << g << endl;

   return 0;
}
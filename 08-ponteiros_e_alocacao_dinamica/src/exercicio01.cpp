#include <iostream>
using namespace std;

int a;     // &a = 0xf180
int b;     // &b = 0xf184
int *ptr;  // &c = 0xf188
int v[4];  // &v[0] = 0xf190 / &v[1] = 0xf194 / &v[2] = 0xf198 / &v[3] = 0xf19c

int main() {
  a=4; b=4;
  ptr = &v[3];
  cout << ptr << endl;
  *ptr = b;
  ptr = ptr-1;
  *ptr = 9;
  ptr[a-5] = 12;
  v[0] = *(ptr+1);
  cout << *ptr << endl;
  ptr = &v[0];
  ptr[1] = 3;
  for (int i=0; i<4; i++) {
      cout << *ptr << endl;
      ptr++;
  }
  return 0;
}

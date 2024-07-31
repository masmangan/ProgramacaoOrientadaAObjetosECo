#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {
  double mediaIndPares, v[100], *ptr = v;

  srand(time(NULL));
  for (int i=0; i<100; ++i)
    *(ptr+i) = (rand() % 100)/10.0;

  mediaIndPares=0.0;
  for (int i=0; i<50; ++i, ptr+=2) // Atenção: ptr é modificado...
    mediaIndPares += *ptr;
  mediaIndPares /= 50.0;

  cout << fixed << setprecision(2) << mediaIndPares << endl;
  return 0;
}

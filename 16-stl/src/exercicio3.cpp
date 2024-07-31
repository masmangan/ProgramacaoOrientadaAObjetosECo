#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
  vector<int> vetor;
  int n;
  while (true) {
    cin >> n;
    if ( n < 0 ) break;
    vetor.push_back(n);
  }

  cout << "Vetor lido: " << endl;
  for (int i=0; i<vetor.size(); ++i)
      cout << vetor[i] << endl;

  cout << "Vetor lido: (usando um iterador)" << endl;
  for (vector<int>::const_iterator it = vetor.begin(); it != vetor.end(); ++it)
      cout << *it << endl;

  return 0;
}

#include <iostream>

using namespace std;

template <typename T>
void selection_sort(T v[], int N){
  for(int i=0; i<N-1; i++){
     int menor = i;
     for(int j=i+1; j<N; j++)
        if (v[j]<v[menor]) menor = j;
     if (menor!=i) {
        T aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
     }
  }
}

int main() {
  int v1[] = { 10, 2, 9, 3, 1, 5, 6, 4, 7, 8};
  int t1 = sizeof(v1) / sizeof(v1[0]);
  selection_sort(v1,t1);
  for (int i=0; i<t1; ++i) {
  	if (i>0) cout << " ";
  	cout << v1[i];
  }
  cout << endl;

  double v2[] = { 3.3, 2.2, 5.5, 4.4, 1.1, 6.6};
  int t2 = sizeof(v2) / sizeof(v2[0]);
  selection_sort(v2,t2);
  for (int i=0; i<t2; ++i) {
  	if (i>0) cout << " ";
  	cout << v2[i];
  }
  cout << endl;

  return 0;
}


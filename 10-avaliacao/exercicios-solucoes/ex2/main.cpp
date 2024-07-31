#include "data.h"

int main(){
  data d1, d2, d3;

	d1.setData("18/08");
	cout << d1.toString() << endl;

	d2.setData("20/06");
	cout << d2.toString() << endl;

  d3 = d1 + d2;
  cout << d3.toString() << endl;

  d3 = d1 - d2;
  cout << d3.toString() << endl;
	
	d3.setData("04/05");
	cout << d3.toString() << endl;
	
  return 0;
}
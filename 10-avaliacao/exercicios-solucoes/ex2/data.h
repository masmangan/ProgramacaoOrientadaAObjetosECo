#ifndef _DATA_H
#define _DATA_H

#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

class data{
  private:
    int dia;
		int mes;

  public:
    data();
		~data();

    void setD(int d);
		void setM(int m);
		void setData(string d);
    int getD();
		int getM();
    string toString();
		
    data operator+(data &d);
		data operator-(data &d);
};

#endif
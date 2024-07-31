#ifndef _BINARIO_H
#define _BINARIO_H

#include <string>
#include <sstream>
#include <iostream>
#include <cmath>

using namespace std;

class binario{
  private:
    string value;
    void init(string _val);
    bool ehBinario(string _val);
    string paraBinario(int _val);
		
  public:
    binario();
    binario(int _valor);
    binario(string _binval);

    string getValue();

    void operator=(int &_val);
    void operator=(string &_val);
    void operator=(const char* _val);
    binario operator+(binario &_val);

    operator int();
};

#endif
#include "binario.h"

void binario::init(string _val){
  value=_val;
}

bool binario::ehBinario(string _val){
  for(int i=0; i<_val.length(); i++){
    if((_val[i]!='0') && (_val[i]!='1')) return false;
  }
  return true;
}

string binario::paraBinario(int _val){
  stringstream ss;
  string tmp;
  int aux=_val;
  while(aux){
    ss << (char)((aux%2)+'0');
    aux>>=1;
  }
  tmp=ss.str();

  if(tmp.length()==0)
    tmp="0";
  else
    reverse(tmp.begin(), tmp.end());

  return tmp;
}

binario::binario(){
  init("0");
}

binario::binario(int _valor){
  init(paraBinario(_valor));
}

binario::binario(string _binval){
  if(ehBinario(_binval)) init(_binval);
  else{
   cout << "valor binário inválido" << endl;
   init("0");
  }
}

void binario::operator=(int &_val){
  value=paraBinario(_val);
}

void binario::operator=(string &_val){
  if(ehBinario(_val)) value=_val;
  else
    cout << "Valor binário inválido" << endl;
}

void binario::operator=(const char* _val){
  string tmp=_val;
  if(ehBinario(tmp)){
    value=tmp;
  }
  else
    cout << "Valor binário inválido" << endl;
}

binario binario::operator+(binario &_val){
  string oper1=_val.getValue(), oper2=value, sum;
  binario bin;
  char comput,aux;

  if(oper1.length()>oper2.length())
    while(oper1.length()!=oper2.length())
      oper2="0"+oper2;
  else
    while(oper1.length()!=oper2.length())
      oper1="0"+oper1;

  while(sum.length()!=oper1.length())
    sum+="0";
  
  aux='0';
  
  for(int i=oper2.length()-1; i>=0; i--){
    comput=(oper2[i]-'0')+(oper1[i]-'0')+(aux-'0');

    sum[i]=(comput%2)+'0';
    aux='0'+((comput>1)?1:0);
    
    if((i==0)&&(aux-'0')) sum="1"+sum;
  }
 
  bin.value=sum;

  return bin;
}

string binario::getValue(){
  return value;
}

binario::operator int(){
  int val=0;
  for(int i=0;i<value.length();i++)
    val+=pow(2,value.length()-(i+1))*(value[i]-'0');
  return val;
}
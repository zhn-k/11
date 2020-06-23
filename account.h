#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include<iostream>
using namespace std;
#include<string.h>
class account
{ private:
    string surname;
    int nomer;
    int stavka;
    int sum;
  public:
    account();
    void print();
    void smena(string);
    void snytie(int );
    void CIN();
void dobavlenie(int );
    void procent( int , int );
    int getSum()const;
    int getStavka()const;
    int getNomer()const;
    string getSurname()const;
    ~account();

};


#endif // ACCOUNT_H_INCLUDED

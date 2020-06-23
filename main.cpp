#include <iostream>
#include<iostream>
#include "account.h"
#include<string.h>
using namespace std;

int main()
{
  account obj;
  string surname;
  int sum, stavka, nomer,i;
  obj.CIN();
  while(1)
  {
     cin>>i;
      if (i==1)
      {
          obj.print();
      }
      if(i==2)
      {
          obj.smena( surname);
      }
      if(i==3)
      {
          obj.dobavlenie(sum);
      }
      if(i==4)
      {
          obj.snytie( sum);
      }
      if(i==5)
      {
          obj.procent(stavka,sum);
      }
      if(i==6)
      {
          break;
      }
  }
    return 0;
}

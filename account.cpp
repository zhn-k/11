#include "account.h"
account::account(){};
void account::CIN()
{     setlocale(LC_ALL, "Russian");

    cout<<"������� ����� �����\t";
    cin>>nomer;
    cout<<"������� �������\t";
    cin>>surname;
    cout<<"������� ���������� ������\t";
    cin>>stavka;
    cout<<"������� ����� �� �����\t";
    cin>>sum;

}
void account::smena(string surname)
{setlocale(LC_ALL, "Russian");

    surname="";
    cout<<"������� ������� ������ ���������\n";
    cin>>surname;
}
void account::snytie(int sum)
{setlocale(LC_ALL, "Russian");
  int newsum;
  cout<<"������� ����� ��� ������\n";
  cin>>newsum;
  sum= sum-newsum;
  cout <<sum;
}
void account::dobavlenie(int sum)
{setlocale(LC_ALL, "Russian");
  int newsum;
  cout<<"������� ����� ��� ����������\n";
  cin>>newsum;
  sum= sum+newsum;
  cout <<sum;
}
void account::procent( int stavka, int sum)
{
  sum=stavka/100*sum +sum;
  cout <<sum;
}
 int account::getSum()const
{
    return sum;
}
 int account::getStavka()const
{
    return stavka;
}
 int account::getNomer()const
{
    return nomer;
}
 string account::getSurname()const
{
    return surname;
}
void account:: print()
{    setlocale(LC_ALL, "Russian");

    cout<<endl<<"����������\n "<<"������� "<<this->getSurname()<<" ����� ����� "<<this->getNomer()<<" ���������� ������ "<<this->getStavka()<<" ����� �� ����� "<<this->getSum()<<endl;
}
account::~account(){};

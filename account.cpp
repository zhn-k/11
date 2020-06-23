#include "account.h"
account::account(){};
void account::CIN()
{     setlocale(LC_ALL, "Russian");

    cout<<"введите номер счета\t";
    cin>>nomer;
    cout<<"введите фамилию\t";
    cin>>surname;
    cout<<"введите процентную ставку\t";
    cin>>stavka;
    cout<<"введите сумму на счете\t";
    cin>>sum;

}
void account::smena(string surname)
{setlocale(LC_ALL, "Russian");

    surname="";
    cout<<"введите фамилию нового владельца\n";
    cin>>surname;
}
void account::snytie(int sum)
{setlocale(LC_ALL, "Russian");
  int newsum;
  cout<<"введите сумму для снятия\n";
  cin>>newsum;
  sum= sum-newsum;
  cout <<sum;
}
void account::dobavlenie(int sum)
{setlocale(LC_ALL, "Russian");
  int newsum;
  cout<<"введите сумму для добавления\n";
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

    cout<<endl<<"информация\n "<<"фамилия "<<this->getSurname()<<" номер счета "<<this->getNomer()<<" процентная ставка "<<this->getStavka()<<" сумма на счете "<<this->getSum()<<endl;
}
account::~account(){};

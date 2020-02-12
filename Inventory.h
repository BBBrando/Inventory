#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

class Inventory    // this class acts as a holder for the values and allows the values of an item in stock to be edited
{
  private: //private variables for use by class
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();//sells an item and changes quantity
    friend ostream& operator<<(ostream&, const Inventory&);//output
};

#endif

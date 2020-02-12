#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

Inventory::Inventory(string name, float price, int count)//constructor
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

void Inventory::sell()//sells an item and updates quantity accordingly, if there is no inventory, displays a message
{if (m_in_stock == 0) {
  cout<<"Sorry, that item is out of stock"<<end;//error message no quantity
}else{  m_in_stock--;}//decrease in stock number
}

ostream& operator<<(ostream& stream, const Inventory& item)//streams quantities and prices
{
  stream << item.m_name
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;

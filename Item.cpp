#include "Item.h"
#include <iostream>
using namespace std;

Item::Item(){
  itemCode = 0;
  unitPrice = 0;
  discount = 0;
}

Item::Item(int iCode, int uPrice){
  itemCode = iCode;
  unitPrice = uPrice;
}
Item::~Item(){
  cout<<"Destructor Called";
}

void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}

#include <iostream>
using namespace std;
double price_original();
void choose_Option();
void price_afterTax(double);

int main() {
    choose_Option();
    double price=price_original();
    price_afterTax(price);
    return 0;
}
void choose_Option() {
   char option;
   do{
   cout<<"Please choose the book category:"<<endl;
   cout<<"A -> Encyclopedia"<<endl;
   cout<<"B -> Textbook"<<endl;
   cout<<"C -> Novel"<<endl;
   cout<<"D -> Magazine"<<endl;
   cout<<"Book category (A,B,C,D):";
   cin>>option;}while(option!='A' && option!='B' && option!='C' && option!='D');
}
double price_original() {
    double price;
    do{
    cout << "Please insert the book price (RM): ";
    cin >> price;}while(price<=0);
    cout << "Original book price before tax =RM " << price << endl;
    return price;
}
void price_afterTax(double price) {
    double taxRate, finalPrice;
    cin>>taxRate;
    finalPrice = price + (price * taxRate);
    cout << "Final book price after tax =RM " << finalPrice << endl;
} 

#include <iostream>
using namespace std;
int main ()
{
    int profit, sellingPrice, buyingPrice;
    cout<< "Enter sellingPrice";
    cin>> sellingPrice;
    cout<<"Enter buyingPrice";
    cin>> buyingPrice;
    profit = sellingPrice-buyingPrice;
    cout<<"The profit of a motor vehicle whose buying price is " <<buyingPrice<< " and selling price is " <<sellingPrice<< " is = " <<profit;
    return 0;


}
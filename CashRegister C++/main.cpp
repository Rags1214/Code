#include <iostream>
#include <iomanip>

using namespace std;

const float taxRate = .07;

int main() 
{
    int i;
    float itemPrice[5];
    float itemTax1, itemTax2, itemTax3, itemTax4, itemTax5;
    float subTotal1, subTotal2, subTotal3, subTotal4, subTotal5;
    float itemPriceTotal, itemTaxTotal, itemSubTotal;
    
    for (i = 0; i < 5; i++)
    {
        cout << "Enter price of the item: " << endl;
    cin >> itemPrice[i];
    }
    
    itemTax1 = itemPrice[0] * taxRate;
    itemTax2 = itemPrice[1] * taxRate;
    itemTax3 = itemPrice[2] * taxRate;
    itemTax4 = itemPrice[3] * taxRate;
    itemTax5 = itemPrice[4] * taxRate;
    
    subTotal1 = itemPrice[0] + itemTax1;
    subTotal2 = itemPrice[1]+ itemTax2;
    subTotal3 = itemPrice[2] + itemTax3;
    subTotal4 = itemPrice[3] + itemTax4;
    subTotal5 = itemPrice[4] + itemTax5;
    
    itemPriceTotal = itemPrice[0] + itemPrice[1] + itemPrice[2] + itemPrice[3] + itemPrice[4];
    itemTaxTotal = itemTax1 + itemTax2 + itemTax3 + itemTax4 + itemTax5;
    itemSubTotal = subTotal1+ subTotal2 + subTotal3 + subTotal4 + subTotal5;
   
    
    cout << "\n" << endl;
    cout << "Item Cost \t Item Tax \t Item Subtotal" << endl;
    cout << "----------------------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "\t" << itemPrice[0] << "\t\t" << itemTax1 << "\t\t" << subTotal1 << endl;
    cout << "\t" << itemPrice[1] << "\t\t" << itemTax2 << "\t\t" << subTotal2 << endl;
    cout << "\t" << itemPrice[2] << "\t\t" << itemTax3 << "\t\t" << subTotal3 << endl;
    cout << "\t" << itemPrice[3] << "\t\t" << itemTax4 << "\t\t" << subTotal4 << endl;
    cout << "\t" << itemPrice[4] << "\t\t" << itemTax5 << "\t\t" << subTotal5 << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Item Total \t Tax Total \t Total Due" << endl;
    cout << "\t" << itemPriceTotal << "\t\t" << itemTaxTotal << "\t\t" << itemSubTotal << endl;
  
    return 0;
}


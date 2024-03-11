#pragma once
#include "Seller.h"


using namespace std;

Seller::Seller() = default;

bool Seller::chekProduct(int id, vector<Product> v1) {
    for (int i = 0; i < v1.size(); i++)
    {
        if ((v1[i].ID == id)) {
            cout << "this id exist" << endl;
            cout << "please enter another id " << endl;
            return false;
        }

    }
    return true;
}

void Seller::readdata(Product & prod, vector<Product> &v1) {

    cout << "Enter product id: "; cin >> prod.ID;
    if (chekProduct(prod.ID, v1)) {
        cout << "Enter product name: "; cin >> prod.proName;
        cout << "Enter product price: "; cin >> prod.ProdPrice;
        cout << "Enter product categorey: "; cin >> prod.Category;
        cout << "Enter product quantity: "; cin >> prod.Quantity;

    }
    else
        readdata(prod, v1);
}


void Seller::AddProduct(Product & prod, vector<Product> &v1) {
    cout << "ENTER THE DATA FOR YOUR PRODUCT\n";
    readdata(prod, v1);
    v1.push_back(prod);
};
Seller::~Seller(void)
{
}
;
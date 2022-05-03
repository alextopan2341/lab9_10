//
// Created by Alex on 4/19/2022.
//

#ifndef LAB9_10_PRODUCT_H
#define LAB9_10_PRODUCT_H
#include <string>
#include <ostream>

using namespace std;
class Product {
private:
    int id;
    int cod;
    string name;
    int pret;
public:
    Product();
    Product(const Product& prod);
    Product(int i,int c,string name1,int p);
    int getCod() const;
    void setCod(int c);
    bool operator ==(const Product &prod);
    Product operator =(const Product &prod);

    friend ostream &operator<<(ostream &os, const Product &product);

    int getId();

    void setId(int id);

    string getName();

    void setName(string name1);

    int getPret() const;

    void setPret(int p);
};


#endif //LAB9_10_PRODUCT_H

//
// Created by Alex on 4/19/2022.
//

#include <cstring>
#include "Product.h"

using namespace std;
int Product::getCod() const {
    return this->cod;
}

void Product::setCod(int c) {
    this->cod = c;
}

string Product::getName()  {
    return this->name;
}

void Product::setName(string name1) {
    this->name = move(name1);
}

int Product::getPret() const {
    return this->pret;
}

void Product::setPret(int p) {
    Product::pret = p;
}

Product::Product(){
    this->name = "";
    this->cod = 0;
    this->pret = 0;
}

Product::Product(const Product &prod) {
    this->id = prod.id;
    this->name = prod.name;
    this->cod = prod.cod;
    this->pret = prod.pret;
}

int Product::getId() {
    return this->id;
}

void Product::setId(int i) {
    this->id = i;
}

Product::Product(int i, int c, string name1, int p) {
    this->id = i;
    this->name = move(name1);
    this->cod = c;
    this->pret = p;
}

bool Product::operator==(const Product &prod) {
    return this->cod==prod.cod && this->name==prod.name && this->pret== prod.pret && this->id==prod.id;
}

Product Product::operator=(const Product &prod) {
    this->setPret(prod.pret);
    this->setId(prod.id);
    this->setCod(prod.cod);
    this->setName(prod.name);
    return *this;
}

ostream &operator<<(ostream &os, const Product &product) {
    os << "id: " << product.id << " cod: " << product.cod << " name: " << product.name << " pret: " << product.pret;
    return os;
}

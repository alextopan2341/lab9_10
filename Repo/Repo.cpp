//
// Created by Alex on 4/19/2022.
//

#include "Repo.h"
#include <vector>
#include <stdexcept>

Repo::Repo() = default;

void Repo::addProduct(Product pro) {
    this->v.push_back(pro);
}

int Repo::getSize(){
    return v.size();
}

vector<Product> Repo::getAll() {
    return v;
}

Product Repo::getById(int i) {
    for (Product &p: v) {
        if (p.getId() == i) {
            return p;
        }
    }
    throw runtime_error("No entity with specified id found");

}

void Repo::deleteProduct(Product product) {
    Product toDelete = getById(product.getId());
    for (int i = 0; i< v.size(); i++) {
        if (v[i].getId() == product.getId()) {
            v.erase(v.begin()+i);
        }
    }

}

void Repo::updateProduct(Product oldProd, Product newProd) {
    for(auto & i : v)
        if(i.getId() == oldProd.getId()){
            i = newProd;
        }
}

Repo::~Repo() = default;

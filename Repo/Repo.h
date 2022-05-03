//
// Created by Alex on 4/19/2022.
//

#ifndef LAB9_10_REPO_H
#define LAB9_10_REPO_H


#include "../Product/Product.h"
#include <vector>
using namespace std;
class Repo {
protected:
    vector<Product> v;
public:
    Repo();
    ~Repo();
    void addProduct(Product pro);
    int getSize();
    vector<Product> getAll();
    Product getById(int i);
    void deleteProduct(Product product);
    void updateProduct(Product oldProd, Product newProd);
};


#endif //LAB9_10_REPO_H

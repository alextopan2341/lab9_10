//
// Created by Alex on 5/2/2022.
//

#include "RepoFile.h"

RepoFile::RepoFile() = default;

RepoFile::RepoFile(string filename1) {
    this->filename = filename1;
    ifstream f(filename1);
    while(f.eof())
    {
        int cod,id,pret;
        string name;
        f>>id>>cod>>name>>pret;
        if(name!="")
        {
            Product prod(id,cod,name,pret);
            this->v.push_back(prod);
        }
    }
    f.close();
}

RepoFile::~RepoFile() {
    fstream f(filename);
    if(f.is_open())
        f.close();
}

void RepoFile::addProductToRepo(Product &prod) {
    this->addProduct(prod);
    this->saveToFile();
}

void RepoFile::deleteProductFromRepo(Product &prod) {
    this->deleteProduct(prod);
    this->saveToFile();
}

void RepoFile::updateProductFromRepo(Product &oldProd, Product &newProd) {
    this->updateProduct(oldProd,newProd);
    this->saveToFile();
}

void RepoFile::saveToFile() {
    ofstream g(this->filename);
    for(Product prod : v){
        g<<prod<<endl;
    }
    g.close();
}

vector<Product> RepoFile::getAllFromRepo() {
    return v;
}

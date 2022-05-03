//
// Created by Alex on 5/2/2022.
//

#ifndef LAB9_10_REPOFILE_H
#define LAB9_10_REPOFILE_H
#include <string>
#include <fstream>
#pragma once
#include "../Repo/Repo.h"
using namespace std;

class RepoFile: public Repo {
private:
    string filename;
public:
    RepoFile();
    RepoFile(string filename1);
    ~RepoFile();
    void addProductToRepo(Product &prod);
    void deleteProductFromRepo(Product &prod);
    void updateProductFromRepo(Product &oldProd, Product &newProd);
    void saveToFile();
    vector<Product> getAllFromRepo();
};


#endif //LAB9_10_REPOFILE_H

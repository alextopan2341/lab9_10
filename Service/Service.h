//
// Created by Alex on 5/2/2022.
//

#ifndef LAB9_10_SERVICE_H
#define LAB9_10_SERVICE_H


#include "../Repo/Repo.h"
#include "../RepoFile/RepoFile.h"

class Service {
private:
    RepoFile repo;
public:
    Service();

    Service(RepoFile &r);

    ~Service();

    void create(Product prod);

    void update(Product oldProd, Product newProd);

    void deleteProd(Product prod);

    std::vector <Product> getAll();

    Product getById(int id);

};

#endif //LAB9_10_SERVICE_H

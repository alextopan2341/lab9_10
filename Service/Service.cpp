//
// Created by Alex on 5/2/2022.
//

#include "Service.h"

Service::Service() = default;

Service::Service(RepoFile &r) {
    this->repo = r;
}

void Service::create(Product prod) {
    repo.addProductToRepo(prod);
}

void Service::update(Product oldProd, Product newProd) {
    repo.updateProductFromRepo(oldProd,newProd);
}

void Service::deleteProd(Product prod) {
    repo.deleteProductFromRepo(prod);
}

std::vector<Product> Service::getAll() {
    return repo.getAllFromRepo();
}

Product Service::getById(int id) {
    return repo.getById(id);
}

Service::~Service() = default;
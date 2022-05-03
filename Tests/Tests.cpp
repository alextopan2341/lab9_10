//
// Created by Alex on 4/19/2022.
//

#include <cassert>
#include "Tests.h"
#include "../Repo/Repo.h"
#include "../Service/Service.h"

void testSetterAndGetter(){
    Product p1;
    p1.setId(1);
    p1.setCod(1);
    p1.setName("briosa");
    p1.setPret(10);
    assert(p1.getName()=="briosa");
    assert(p1.getCod() == 1);
    assert(p1.getPret() == 10);
    assert(p1.getId() == 1);

}

void testRepoGetAll() {
    Repo repo1;
    Product product(1, 10, "cioco", 15);
    Product product2(2, 20, "twix", 10);
    Product product3(3, 30, "7days", 5);
    Product product4(4, 40, "bomboana", 7);

    repo1.addProduct(product);
    repo1.addProduct(product2);
    repo1.addProduct(product3);
    repo1.addProduct(product4);

    assert(repo1.getSize() == 4);
    assert(repo1.getAll().size() == 4);

}

void testAddRepo() {
    Repo repo1;
    Product product(1, 10, "cioco", 15);
    Product product2(2, 20, "twix", 10);
    Product product3(3, 30, "7days", 5);
    Product product4(4, 40, "bomboana", 7);

    repo1.addProduct(product);
    repo1.addProduct(product2);
    repo1.addProduct(product3);
    repo1.addProduct(product4);

    assert(repo1.getById(1) == product);
    assert(repo1.getById(2) == product2);
    assert(repo1.getById(3) == product3);
    assert(repo1.getById(4) == product4);
}

void testRepoDelete() {
    Repo repo2;
    Product product(1, 10, "cioco", 15);
    Product product2(2, 20, "twix", 10);
    Product product3(3, 30, "7days", 5);
    Product product4(4, 40, "bomboana", 7);

    repo2.addProduct(product);
    repo2.addProduct(product2);
    repo2.addProduct(product3);
    repo2.addProduct(product4);

    assert(repo2.getSize() == 4);
    assert(repo2.getAll().size() == 4);

    repo2.deleteProduct(product2);
    assert(repo2.getSize() == 3);
    assert(repo2.getAll().size() == 3);
    assert(repo2.getById(1) == product);
    assert(repo2.getById(3) == product3);
    assert(repo2.getById(4) == product4);
}

void testRepoUpdate() {
    Repo repo2;
    Product product(1, 10, "cioco", 15);
    Product product2(2, 20, "twix", 10);
    Product product3(3, 30, "7days", 5);
    Product product4(4, 40, "bomboana", 7);

    repo2.addProduct(product);
    repo2.addProduct(product2);
    repo2.addProduct(product3);

    assert(repo2.getSize() == 3);
    assert(repo2.getAll().size() == 3);

    repo2.updateProduct(product2, product4);
    assert(repo2.getById(4) == product4);
}

void testServiceAdd() {
    Service service;

    Product product(1, 10, "cioco", 15);
    Product product2(2, 20, "twix", 10);
    Product product3(3, 30, "7days", 5);
    Product product4(4, 40, "bomboana", 7);

    service.create(product);
    service.create(product2);
    service.create(product3);
    service.create(product4);

    assert(service.getAll().size() == 4);
    assert(service.getById(1) == product);
    assert(service.getById(2) == product2);
    assert(service.getById(3) == product3);
    assert(service.getById(4) == product4);

}

void testServiceDelete(){
    Service service;

    Product product(1, 10, "cioco", 15);
    Product product2(2, 20, "twix", 10);
    Product product3(3, 30, "7days", 5);
    Product product4(4, 40, "bomboana", 7);

    service.create(product);
    service.create(product2);
    service.create(product3);
    service.create(product4);

    service.deleteProd(product3);
    assert(service.getAll().size() == 3);
    assert(service.getById(1) == product);
    assert(service.getById(2) == product2);
    assert(service.getById(4) == product4);
}

void testServiceUpdate(){
    Service service;

    Product product(1, 10, "cioco", 15);
    Product product2(2, 20, "twix", 10);
    Product product3(3, 30, "7days", 5);
    Product product4(4, 40, "bomboana", 7);

    service.create(product);
    service.create(product2);
    service.create(product3);

    service.update(product, product4);
    assert(service.getById(4) == product4);
}

void testServiceGetAll(){
    Service service;

    Product product(1, 10, "cioco", 15);
    Product product2(2, 20, "twix", 10);
    Product product3(3, 30, "7days", 5);

    service.create(product);
    service.create(product2);
    service.create(product3);

    assert(service.getAll().size() == 3);

}

void tests(){
    testSetterAndGetter();
    testServiceGetAll();
    testServiceUpdate();
    testServiceDelete();
    testServiceAdd();
    testRepoUpdate();
    testRepoDelete();
    testAddRepo();
    testRepoGetAll();
}
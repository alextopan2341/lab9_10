//
// Created by Alex on 5/3/2022.
//

#include "UI.h"
#include <iostream>

using namespace std;
UI::UI() = default;

UI::UI(Service &ser) {
    this->service = ser;
}

void UI::run_menu() {
    bool ok = true;
    while (ok) {
        cout << endl;
        cout << "s. Show products." << endl;
        cout << "1. Add a product." << endl;
        cout << "2. Delete a product." << endl;
        cout << "3. Update a product." << endl;
        cout << "x. Close" << endl;
        char option;
        cout << "Give option: ";
        cin >> option;
        cout << endl;
        switch (option) {
            case '1': {
                addProduct();
                break;
            }
            case '2': {
                deleteProduct();
                break;
            }
            case '3': {
                updateProduct();
                break;
            }
            case 's': {
                showAll();
                break;
            }
            case 'x':
                ok = false;
                break;
            default:
                cout << "Wrong! Try again!" << endl;
        }
    }
}

void UI::addProduct() {
    int id, cod, pret;
    string name;
    cout << "Give id:";
    cin >> id;
    cout << "Give the code of the product:";
    cin >> cod;
    cout << "Give the name of the product:";
    cin >> name;
    cout << "Give the price of the product:";
    cin >> pret;

    Product product(id, cod, name, pret);
    service.create(product);
}

void UI::showAll() {
    for (auto &pr: service.getAll()) {
        cout << pr.getId() << " " << pr.getCod() << " " << pr.getName() << " " << pr.getPret() << endl;
    }
}

void UI::deleteProduct() {
    int id;
    cout << "Give the id of yhe product you want to delete:";
    cin >> id;
    for (auto &pr: service.getAll()) {
        if (id == pr.getId()) {
            service.deleteProd(pr);
        }

    }
}

void UI::updateProduct() {
    int id;
    cout << "Give the id of the product you want to update: ";
    cin >> id;
    int i, cod, price;
    string name;
    cout << "Give the new id: ";
    cin >> i;
    cout << "Give the new code of the product: ";
    cin >> cod;
    cout << "Give the new name of the product: ";
    cin >> name;
    cout << "Give the new price of the product: ";
    cin >> price;
    Product newProd(i, cod, name, price);
    for (auto &pr: service.getAll()) {
        if (id == pr.getId()) {
            service.update(pr, newProd);
        }
    }
}

UI::~UI() = default;
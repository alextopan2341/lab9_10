//
// Created by Alex on 5/3/2022.
//

#ifndef LAB9_10_UI_H
#define LAB9_10_UI_H


#include "../Service/Service.h"

class UI {
private:
    Service service;
public:
    UI();

    UI(Service &ser);

    ~UI();

    void run_menu();

    void addProduct();

    void showAll();

    void deleteProduct();

    void updateProduct();



};


#endif //LAB9_10_UI_H

#include "ProductManager.h"

void ProductManager::removeProduct(Product *p, std::string name) {
    for(int i = 0; i < currentProducts.size(); i++) {
        if(p->getName() == name){
            currentProducts.erase(currentProducts.begin()+i);
            break;
        }
    }
}
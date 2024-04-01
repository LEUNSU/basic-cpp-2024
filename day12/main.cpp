#include <iostream>
#include <string>
#include <vector>
#include "header.h"

using namespace std;

int main() {
    vector<Product*> products;  // 제품 보관하는 벡터

    int choice;
    while (true) {
        cout << "상품관리 프로그램" << endl;
        cout << "1. 상품추가 2. 상품출력 3. 상품검색 0. 종료" << endl;
        cout << "선택: ";
        cin >> choice;

        switch (choice) {
        case 0:
            for (auto& product : products) {
                delete product;
            }
            return 0;
        case 1:
            addProduct(products);       
            break;
        case 2:
            printProducts(products);    
            break;
        case 3:
            searchProduct(products);   
            break;
        default:
            cout << "잘못된 선택입니다." << endl;
            break;
        }
    }

    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include "header.h"

using namespace std;

int main() {
    vector<Product*> products;  // ��ǰ �����ϴ� ����

    int choice;
    while (true) {
        cout << "��ǰ���� ���α׷�" << endl;
        cout << "1. ��ǰ�߰� 2. ��ǰ��� 3. ��ǰ�˻� 0. ����" << endl;
        cout << "����: ";
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
            cout << "�߸��� �����Դϴ�." << endl;
            break;
        }
    }

    return 0;
}
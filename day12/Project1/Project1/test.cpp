#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
class Product
{
	int id;
	int price;
	string producer;
public:
    Product(int id, int price, string producer)
        : id(id), price(price), producer(producer)
    {}
    virtual void printInfo() const {
        cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << endl;
    }
};

class Book : public Product
{
private:
    string ISBN;
    string author;
    string title;
public: 
    Book(int id, int price, string producer, string ISBN, string author, string title)
        : Product(id, price, producer), ISBN(ISBN), author(author), title(title)
    {}

    void printInfo() const
    {
        Product::printInfo();
        cout << "ISBN: " << ISBN << " Author : " << author << " Title : " << title << endl;
    }
};
class Handphone : public Product
{
private:
    string model;
    string RAM;
public:
    Handphone(int id, int price, string producer, string model, string RAM)
        : Product(id, price, producer)
    {
        this->model = model;  
        this->RAM = RAM; 
    }
    void printInfo() const
    {
        cout << "model: " << model << " RAM: " << RAM << endl;
    }
}; 
class Computer : public Product
{
private:
    string model;
    string cpu;
    string RAM;
public:
    Computer(int id, int price, string producer, string model, string cpu, string RAM)
        : Product(id, price, producer)
    {
        this->model = model;
        this->cpu = cpu; 
        this->RAM = RAM;
    }
    void printInfo();

    string getModel()
    {
        return model;
    }
    string getCPU()
    {
        return cpu;
    }
    string getRAM()
    {
        return RAM;
    }
};
void Computer::printInfo() 
{   
    cout << getId() << getPrice() << getProducer() <<  endl;
    cout << "model: " << model << " cpu: " << cpu << " RAM: " << RAM << endl;
}

int main(void)
{
    vector<Product*> products;

    int menu;
   
    while (true)
    {
        cout << "��ǰ���� ���α׷�" << endl;
        cout << "1. ��ǰ�߰� 2. ��ǰ��� 3. ��ǰ�˻� 0. ����" << endl;
        cout << "����: ";
        cin >> menu;
   
        if (menu == 1)
        {   
            int choice;
            cout << "1. å 2. �ڵ��� 3. ��ǻ��" << endl;
            cout << "����: ";
            cin >> choice;

            int id; 
            int price;
            string producer; 
            cout << "ID: ";
            cin >> id; 
            cout << "Price: ";
            cin >> price;
            cout << "Producer: ";
            cin >> producer;

            if (choice == 1)
            {
                string ISBN, author, title;
                cout << "ISBN: ";
                cin >> ISBN;
                cout << "Author: : ";
                cin >> author;
                cout << "Title: : ";
                cin >> title;
                products.push_back(new Book(id, price, producer, ISBN, author, title));               
            }
            else if (choice == 2)
            {
                string model, RAM;
                cout << "Model: ";
                cin >> model;
                cout << "RAM: ";
                cin >> RAM;
                products.push_back(new Handphone(id, price, producer, model, RAM));
               
            }
            else if (choice ==3)
            {
                string model, cpu, RAM;
                cout << "Model: ";
                cin >> model;
                cout << "CPU: ";
                cin >> cpu; 
                cout << "RAM: ";
                cin >> RAM;
                products.push_back(new Computer(id, price, producer, model, cpu, RAM));

            }
        }
        else if (menu == 2)
        {
            cout << "��ǰ���" << endl;
            for (Product* p : products)
            {
                p->printInfo();
            }
           
        }
        else if (menu == 3)
        {

        }
        else if (menu == 0)
        {
            cout << "���α׷� ����" << endl;
            
            for (Product* p : products) // ���� �Ҵ�� �޸� ����
            {
                delete p;
            }

            break;
        }



    }
    return 0;
}
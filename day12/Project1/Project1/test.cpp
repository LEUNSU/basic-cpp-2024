#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstring>

using namespace std;
class Product
{
	int id;
	int price;
	string producer;
public:
    Product(int id, int price, string producer)
    {
        this->id = id;
        this->price = price;
        this->producer = producer; 
    }
    virtual void printInfo()= 0;

    int getId() 
    { 
        return id; 
    }
    int getPrice()
    { 
        return price; 
    }
    string getProducer() 
    { 
        return producer; 
    }

};

//class Book : public Product
//{
//private:
//    string ISBN;
//    string author;
//    string title;
//public: 
//    Book(int id, int price, string producer, string ISBN, string author, string title)
//        : Product(id, price, producer)
//    {
//        this->ISBN = ISBN;
//        this->author = author;
//        this->title = title;
//    }
//    void printInfo() const
//    {
//        cout << "ISBN: " << ISBN << " Author : " << author << " Title : " << title << endl;
//    }
//};
//class Handphone : public Product
//{
//private:
//    string model;
//    string RAM;
//public:
//    Handphone(int id, int price, string producer, string model, string RAM)
//        : Product(id, price, producer)
//    {
//        this->model = model;  
//        this->RAM = RAM; 
//    }
//    void printInfo() const
//    {
//        cout << "model: " << model << " RAM: " << RAM << endl;
//    }
//}; 
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
    Product* product[100];

    int id;
    int price;
    string producer;
    int menu;
   
    while (true)
    {
        cout << "상품관리 프로그램" << endl;
        cout << "1. 상품추가 2. 상품출력 3. 상품검색 0. 종료" << endl;
        cout << "선택: ";
        cin >> menu;
   
        if (menu == 1)
        {   
            int choice;
            cout << "1. 책 2. 핸드폰 3. 컴퓨터" << endl;
            cout << "선택: ";
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

            /*if (choice == 1)
            {
                string ISBN, author, title;
                cout << "ISBN: ";
                cin >> ISBN;
                cout << "Author: : ";
                cin >> author;
                cout << "Title: : ";
                cin >> title;
                Book* b = new Book(id, price, producer, ISBN, author, title);
                product[100] = b;
            }
            if (choice == 2)
            {
                string model, RAM;
                cout << "Model: ";
                cin >> model;
                cout << "RAM: ";
                cin >> RAM;
                Handphone* h = new Handphone(id, price, producer, model, RAM);
                product[100] = h;

            }*/
            if (choice ==3)
            {
                string model, cpu, RAM;
                cout << "Model: ";
                cin >> model;
                cout << "CPU: ";
                cin >> cpu; 
                cout << "RAM: ";
                cin >> RAM;
                Computer* c = new Computer(id, price, producer, model, cpu, RAM);
                product[100] = c;
                
            }
        }
        else if (menu == 2)
        {
            cout << "상품출력" << endl;
            for (int i = 0; i < 100; i++)
            {
                product[100]->printInfo();
            }
           
        }
        /*else if (menu == 3)
        {

        }
        else if (menu == 0)
        {
            cout << "프로그램 종료" << endl;
            break;
        }*/



    }
    return 0;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product {
protected:
    int id;
    double price;
    string producer;
public:
 
    Product(int _id, double _price, string _producer);

    virtual void printInfo() const;

    int getID() const;

    virtual ~Product(); // °¡»ó ¼Ò¸êÀÚ 
};

class Book : public Product {
private:
    string ISBN;
    string author;
    string title;
public:
    Book(int _id, double _price, string _producer, string _ISBN, string _author, string _title);

    void printInfo() const override;
};

class Handphone : public Product {
private:
    string model;
    int ram;
public:
    Handphone(int _id, double _price, string _producer, string _model, int _ram);

    void printInfo() const override;
};

class Computer : public Product {
private:
    string model;
    string cpu;
    int ram;
public:
    Computer(int _id, double _price, string _producer, string _model, string _cpu, int _ram);

    void printInfo() const override;
};

void addProduct(vector<Product*>& products);
void printProducts(const vector<Product*>& products);
void searchProduct(const vector<Product*>& products);
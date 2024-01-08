#define _CRT_SECURE_NO_WARNINGS 

#include "car.h"
#include <iostream>

using namespace std;

Car::Car() : year(0), price(0.0) 
{
    brand[0] = '\0';
    model[0] = '\0';
}

Car::Car(const char* brand, const char* model, int year, double price) : year(year), price(price) 
{
    strncpy(this->brand, brand, sizeof(this->brand));
    strncpy(this->model, model, sizeof(this->model));
}

Car::~Car() 
{
    cout << "���������� ������ ��� " << brand << " " << model << endl;
}

void Car::setBrand(const char* brand) 
{
    strncpy(this->brand, brand, sizeof(this->brand));
}

const char* Car::getBrand() const 
{
    return brand;
}

void Car::setModel(const char* model) 
{
    strncpy(this->model, model, sizeof(this->model));
}

const char* Car::getModel() const 
{
    return model;
}

void Car::setYear(int year) 
{
    this->year = year;
}

int Car::getYear() const 
{
    return year;
}

void Car::setPrice(double price) 
{
    this->price = price;
}

double Car::getPrice() const 
{
    return price;
}

void Car::input() 
{
    cout << "������� �����: ";
    cin.getline(brand, sizeof(brand));

    cout << "������� ������: ";
    cin.getline(model, sizeof(model));

    cout << "������� ��� �������: ";
    cin >> year;

    cout << "������� ����: ";
    cin >> price;

    cin.ignore(); 
} 

void Car::display() const 
{
    cout << "�����: " << brand << ", ������: " << model << ", ��� �������: " << year << ", ����: " << price << endl;
}

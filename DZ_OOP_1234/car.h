#pragma once

class Car 
{
char brand[50];
char model[50];
int year;
double price;

public:
    Car();
    Car(const char* brand, const char* model, int year, double price);

    ~Car();

    void setBrand(const char* brand);
    const char* getBrand() const;

    void setModel(const char* model);
    const char* getModel() const;

    void setYear(int year);
    int getYear() const;

    void setPrice(double price);
    double getPrice() const;

    void input();
    void display() const;
};


#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Pokupatel {
protected:
    string FIO;
    int money;
    string VsePokupki;
public:
    Pokupatel(string Fio, int mon) {
        FIO = Fio;
        money = mon;
    }

    Pokupatel() : FIO{ "no value" }, money{ 0 }{}

    string GetName() {
        return FIO;
    }
    int Sale(int price, char* name) {
        if (money >= price) {
            money -= price;
            VsePokupki += name; 
            }
        else {
            return 0;
        }
        
        
    }
    void Converter(int value) {
        double m2 = 0; // временное хранение переведенных денег
        if (value >= 1 and value <= 3) {
            switch (value) {
            case 1: //rub
                m2 = money;
                break;
            case 2: //eur
                m2 = money * 76.70;
                break;
            case 3: //dol
                m2 = money * 70.59;
                break;
            }
        }
        money = m2;
    }

    string ShowSaleProduct() {
        return VsePokupki;
        
    }
    int showMyMoney() {
        return money;
    }
    

};
#include "ClassGeomh.h"
#include <iostream>
#include <cmath>
#include <math.h>
#include <exception>

using namespace std;

void Trapezoid::set_a(float x) {                                        // устанавливаем а

    if (x > 0)
        this->a = x;
    else throw invalid_argument("Ошибка! Значение не может быть меньше 0... \n ");
}

void Trapezoid::set_b(float y) {                                        // устанавливаем b

    if (y > 0)
        this->b = y;
    else throw invalid_argument("Ошибка! Значение не может быть меньше 0... \n ");

}

void Trapezoid::set_h(float z) {                                        // устанавливаем h
    if (z > 0)
        this->h = z;
    else throw invalid_argument("Ошибка! Значение не может быть меньше 0... \n ");
}

///////////////////////////////////////

float Trapezoid::get_a() const {                                       //возвращение а

    return this-> a;
}

float Trapezoid::get_b() const {                                      //возвращение b

    return this->b;
}

float Trapezoid::get_h() const {                                      //возвращение h

    return this -> h;
}

float Trapezoid:: get_area()const             //получение площади
{
    return ((a + b) / 2) * h;
}

float Trapezoid:: get_perem()const            //получение периметра
{
    float BokStors = ((b - a) / 2) + h;                            // поиск длины боковых сторон
    return a + b + BokStors * 2;
}

Trapezoid::Trapezoid()
{
    a = 1;
    b = 1;
    h = 1;
}

Trapezoid::Trapezoid(float x, float y, float z)              //конструктор с параметрами
{
    set_fields(x, y, z);
}

void Trapezoid:: set_fields(float x, float y, float z)        //устанавливаем поля
{

    set_a(x);           
    set_b(y);             
    set_h(z);               
}


bool Trapezoid::check(float x, float y, float z)
{
    if (  (x>0) && (y>0) && (z>0)       )                    //(x > y > z) || (x > y < z) || (y > x < z) || (y > x > z)
    {
        cout << "Трапеция существует \n";
        return 0;
    }
    
}


































//void Trapezoid::set(float x, float y, float z)               // общий ввод 
//{
//
//        set_a (x);
//        set_b (y);
//        set_h(z);
//}
//
//
//double Trapezoid::get_area()                                              // поиск площади
//{
//    return ((a + b) / 2) * h;
//}
//
//
//double Trapezoid::get_perem()                                             // поиск периметра 
//{
//    double BokStors = ((b - a) / 2) + h;                            // поиск длины боковых сторон
//    return a + b + BokStors * 2;
//}



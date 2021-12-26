#pragma once
#include<iostream>
#include<string>

using namespace std;

 class Trapezoid  //равно-я трапеция
 {
private:
    float a; // врехня сторона трапеции
    float b;  // нижнея сторона трапеции
    float h;  // высота трапеции 
public:
    void set_a(float x);               // устанавливаем а
    void set_b(float y);               // устанавливаем b
    void set_h(float z);               // устанавливаем h

    float get_a() const;              // вовращаем a
    float get_b() const;              // вовращаем b
    float get_h() const;              // вовращаем h
    float get_area()const;             //получение площади
    float get_perem()const;            //получение периметра
    Trapezoid();                                       //конструктор
    Trapezoid(float x, float y, float z);              //конструктор с параметрами
    void set_fields(float x, float y, float z);        //устанавливаем поля 
    bool check(float x, float y, float z);             //проверка
 };
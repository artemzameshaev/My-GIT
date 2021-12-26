#include "ClassGeomh.h"
#include <iostream>
#include <cmath>
#include <math.h>
#include <exception>

using namespace std;

void Trapezoid::set_a(float x) {                                        // ������������� �

    if (x > 0)
        this->a = x;
    else throw invalid_argument("������! �������� �� ����� ���� ������ 0... \n ");
}

void Trapezoid::set_b(float y) {                                        // ������������� b

    if (y > 0)
        this->b = y;
    else throw invalid_argument("������! �������� �� ����� ���� ������ 0... \n ");

}

void Trapezoid::set_h(float z) {                                        // ������������� h
    if (z > 0)
        this->h = z;
    else throw invalid_argument("������! �������� �� ����� ���� ������ 0... \n ");
}

///////////////////////////////////////

float Trapezoid::get_a() const {                                       //����������� �

    return this-> a;
}

float Trapezoid::get_b() const {                                      //����������� b

    return this->b;
}

float Trapezoid::get_h() const {                                      //����������� h

    return this -> h;
}

float Trapezoid:: get_area()const             //��������� �������
{
    return ((a + b) / 2) * h;
}

float Trapezoid:: get_perem()const            //��������� ���������
{
    float BokStors = ((b - a) / 2) + h;                            // ����� ����� ������� ������
    return a + b + BokStors * 2;
}

Trapezoid::Trapezoid()
{
    a = 1;
    b = 1;
    h = 1;
}

Trapezoid::Trapezoid(float x, float y, float z)              //����������� � �����������
{
    set_fields(x, y, z);
}

void Trapezoid:: set_fields(float x, float y, float z)        //������������� ����
{

    set_a(x);           
    set_b(y);             
    set_h(z);               
}


bool Trapezoid::check(float x, float y, float z)
{
    if (  (x>0) && (y>0) && (z>0)       )                    //(x > y > z) || (x > y < z) || (y > x < z) || (y > x > z)
    {
        cout << "�������� ���������� \n";
        return 0;
    }
    
}


































//void Trapezoid::set(float x, float y, float z)               // ����� ���� 
//{
//
//        set_a (x);
//        set_b (y);
//        set_h(z);
//}
//
//
//double Trapezoid::get_area()                                              // ����� �������
//{
//    return ((a + b) / 2) * h;
//}
//
//
//double Trapezoid::get_perem()                                             // ����� ��������� 
//{
//    double BokStors = ((b - a) / 2) + h;                            // ����� ����� ������� ������
//    return a + b + BokStors * 2;
//}



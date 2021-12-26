#pragma once
#include<iostream>
#include<string>

using namespace std;

 class Trapezoid  //�����-� ��������
 {
private:
    float a; // ������ ������� ��������
    float b;  // ������ ������� ��������
    float h;  // ������ �������� 
public:
    void set_a(float x);               // ������������� �
    void set_b(float y);               // ������������� b
    void set_h(float z);               // ������������� h

    float get_a() const;              // ��������� a
    float get_b() const;              // ��������� b
    float get_h() const;              // ��������� h
    float get_area()const;             //��������� �������
    float get_perem()const;            //��������� ���������
    Trapezoid();                                       //�����������
    Trapezoid(float x, float y, float z);              //����������� � �����������
    void set_fields(float x, float y, float z);        //������������� ���� 
    bool check(float x, float y, float z);             //��������
 };
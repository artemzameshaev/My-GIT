// выполнил Замешаев Артем группа ИВТ-20
#include <iostream>
#include <cmath>
#include "ClassGeomh.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    float a, b, h;
    Trapezoid tra;
    cout << "Введите длины сторон ";
    cout << "\n a = ";
    cin >> a;                                                        //ввод верхней стороны трапеции
    cout << " b = ";
    cin >> b;                                                        //ввод нижней стороны трапеции
    cout << "Введите высоту ";
    cout << "\n h = ";
    cin >> h;
    try 
    {      
        tra.set_fields(a,b,h);
    }
    catch (exception txt)
    {
        cout<< "Произошла ошибка" << txt.what();
    }
  
    tra.check(a, b, h);                                              //проверка
    cout << "Площать равна: " <<tra.get_area() << endl;
    cout << "Периметр равен: " <<tra.get_perem() << endl;




    return 0;
}











// динамическое
// юнит тест
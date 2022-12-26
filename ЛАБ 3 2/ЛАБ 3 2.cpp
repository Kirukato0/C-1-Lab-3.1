// ЛАБ 3 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <clocale>
#include <random>

void  f1(int* a, int N1, int n1)
{
    int* c;
    int* d;
    int min1 = 11;
    c = new int[n1];
    d = new int[N1 - n1];
    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i];
        std::cout << "c[" << i << "]= " << c[i] << "\n";
        if (c[i] < min1)
            min1 = c[i];
    }
    std::cout << "Minimal number of 1 part of 1 massive = " << min1 << "\n";
    //int size_d=0; 
    for (int i = n1; i < N1; i++)
    {
        d[i - n1] = a[i];
        std::cout << "d[" << i - n1 << "]= " << d[i - n1] << "\n";
        // size_d ++;
    }
    /*for (int i = 0; i < size_d; i++)
    {
        std::cout << "d[" << i << "]= " << d[i] << "\n";
    }*/

}

int main()
{
    srand(time(NULL));
    const int N1 = 5, N2 = 6;
    int* a;
    int* b;
    a = new int[N1];
    b = new int[N2];
    int pos1=0, pos2 = 0, n1, n2;
    for (int i = 0;i < N1;i++) 
    {
        a[i] = rand() % 21 - 10;
        std::cout << "a[" << i << "]= " << a[i]<< "\n";
        
    }

    for (int i = N1;i > 0; i--) 
    {
        if (a[i] > 0) 
        {
            pos1 = a[i];
            n1 = i;
            break;
        }
    }
    std::cout << "\n";
    std::cout << "Last positive number of 1st massive = "<<pos1;
    std::cout<<"\n";
    std::cout << "Position of last positive number of 1st massive = " << n1;
    std::cout << "\n";
    for (int j = 0;j < N2;j++)
    {
        b[j] = rand() % 21 - 10;
        std::cout << "b[" << j << "]= " << b[j]<< "\n";
        if (b[j] > 0)
        {
            pos2 = b[j];
            n2 = j;
        }
    }
    std::cout << "\n";
    std::cout << "Last positive number of 2nd massive = " << pos2;
    std::cout << "\n";
    std::cout << "Position of last positive number of 2nd massive = " << n2;
    std::cout << "\n";
    f1(a,N1,n1);
    std::cout << "\n";
    f1(b, N2, n2);
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

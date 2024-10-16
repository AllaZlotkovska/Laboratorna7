#include <iostream>
#include <stack> 
#include "Windows.h"
using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));

    stack<int> s; // створення стеку цілих чисел
    int n, count = 0;
    cout << "Введіть розмір стеку: ";
    cin >> n;
    cout << "Введіть " << n << " цілих чисел : " << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        s.push(num); //додавання числа до стеку
    }
    
    int minElement = s.top();
    s.pop();

    // Знаходження найменшого елемента у стеку
    while (!s.empty()) {
        if (s.top() < minElement) {
            minElement = s.top();
        }
        s.pop();
    }

    cout << "Найменший елемент стеку: " << minElement << endl;
    return 0;
   
}


// Создаем массив из 10 массивов случайных длин от 1 до 10 элементов
// Размеры храним в массиве n[10]

#include <iostream>
using namespace std;

int main()
{
    
    int* A[10];
    int n[10];
    for(int i=0;i<10;i++)
    {
        n[i] = rand()%10 + 1;
        A[i] = new int[n[i]];
        for(int j=0;j<n[i];j++){
            A[i][j] = rand()%20;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    for(int k=0;k<n[3];k++) cout << A[3][k] << " ";
    cout << endl;
    
    for(int i=0;i<10;i++) cout << n[i] << " ";
    cout << endl;
    
}

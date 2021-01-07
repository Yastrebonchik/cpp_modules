#include <iostream>
 
using namespace std;
 
void setData(char *s, int &n) //функция для принятия данных
{
    cout << "Введите строку: ";
    cin.getline(s, 128);
    cout << "Введите целое число: ";
    cin >> n;    
}
 
void getData(char s[], int n) //отображение данных
{
    cout << "\n" << s << n << endl << endl;  
}
 
int main()
{
    setlocale(LC_ALL, "rus");
 
    char str[128] = ""; //объявляем и инициализируем переменные для очистки от мусора
    int number = 0;
 
    setData(str, number); //вызов функций
    //    system("cls"); //очистка экрана перед выводом данных на экран
    getData(str, number);
 
return 0;
}
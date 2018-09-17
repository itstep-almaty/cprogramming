//Пример с массивом строк (или указателей на char)
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char* s[2]; // создали массив указателей
  
  s[0] = new char[strlen("hello")+1]; // выделили память для "hello"
  strcpy(s[0],"hello");               // скопировали "hello" в s[0]
  
  s[1] = new char[strlen("world")+1]; // выделили память для "world" 
  strcpy(s[1],"world");               // скопировали "world" в s[1]
  
  s[0][0] = 'H'; // поменяли первую букву
  cout << s[0] << endl;
  cout << s[1] << endl;
  
  // delete [] s[0];
  // delete [] s[1];
  
}

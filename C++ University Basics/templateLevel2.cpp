#include <iostream>
using namespace std;

template <typename T>
T Average(T array[], int size)
{
  T sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += array[i];
  }
  return sum / size;
}

int main()
{
  int arrayInt[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  long arrayLong[5] = {1L, 2L, 3L, 4L, 5L};
  double arrayDouble[4] = {1.5, 2.5, 3.0, 4.5};
  char arrayChar[5] = {'A', 'A'};
  cout << Average(arrayInt, 10) << endl;
  cout << Average(arrayLong, 5) << endl;
  cout << Average(arrayDouble, 4) << endl;
  cout << Average(arrayChar, 2) << endl;
}
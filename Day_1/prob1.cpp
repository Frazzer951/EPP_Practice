#include <iostream>
#include <string>

using namespace std;

// Implement printArray here
void printArray( int arr[], int size )
{
  for( int i = 0; i < size; i++ )
  {
    cout << arr[i] << ' ';
  }
  cout << endl;
}

// Implement getElement here
int getElement( int arr[], int size )
{
  int largest        = arr[0];
  int second_largest = arr[0];

  for( int i = 0; i < size; i++ )
  {
    if( arr[i] > largest )
    {
      largest = arr[i];
    }
  }

  for( int i = 0; i < size; i++ )
  {
    if( second_largest == largest ) second_largest = arr[i];
    if( arr[i] != largest && arr[i] > second_largest )
    {
      second_largest = arr[i];
    }
  }
  return second_largest;
}

// EDIT CODE BELOW ONLY FOR TESTING (YOUR CODE WILL BE GRADED WITH DIFFERENT TESTS)

int main()
{
  {
    int myarray[100] = { 30, 20, 5, 10, 24 };
    int n            = 5;
    cout << "Contents of array : ";
    printArray( myarray, n );
    if( getElement( myarray, n ) == 24 )
      cout << "PASSED" << endl;
    else
      cout << "Result did not match expected answer: 24" << endl;
  }
  {
    int myarray[100] = { 15, 24, 30, 10, 5 };
    int n            = 5;
    cout << "Contents of array : ";
    printArray( myarray, n );
    if( getElement( myarray, n ) == 24 )
      cout << "PASSED" << endl;
    else
      cout << "Result did not match expected answer: 24" << endl;
  }
  return 0;
}

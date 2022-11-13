#include <iostream>
using namespace std;
void insertionSort(int Array_Set[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = Array_Set[i];
        j = i -1;
        while (j >= 0 && Array_Set[j] > key)
        {
            Array_Set[j + 1] = Array_Set[j];
            j = j - 1;
        }
        Array_Set[j + 1] = key;
    }
}
void printArray(int Array_Set[], int n)
{
    cout << "Data Sets are: " ;
    for (int i {0}; i < n; i++)
        cout << Array_Set[i] << " ";
       
    cout << endl;
    
}
void Sum_numbers( int Sum, int Array_set[]){
cout << Sum ;

}
int Summation( int Array_Set[], int n)
{
     int Sum{} ; 
    for (int i {0}; i < n; i++)
    Sum += Array_Set[i];
    cout << "The Sum is:" << Sum << endl; 
    return Sum;
}
int main() {
int Array_Set[]{ 22,17,4, 2,8,17};
int Size = sizeof(Array_Set)/ sizeof(Array_Set[0]);
//cout << "enter  Number of inputs" ;
//cin >> numbers ;
Summation ( Array_Set,  Size);
insertionSort( Array_Set,  Size);
printArray( Array_Set,  Size);
for (int C : Array_Set){
    cout << C ;
    cout << endl;
}
//Summation( Array_Set, Size);
//Sum_numbers(Array_Set, Size);
}

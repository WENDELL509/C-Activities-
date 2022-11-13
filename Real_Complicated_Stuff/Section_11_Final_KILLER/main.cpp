#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
#include <algorithm>
using namespace std;
//<<=========================================================================>>//
void main_menu(char); //
void Quit(); //
void Enter_Numbers(); //
void Print_Instructions(); //
void Enter_Numbers(vector <double>&);//
void Storage(vector <double>&); //
void Clear( vector <double>&); //
void Do_You_Agree();//
void Add_Numbers(); //
void Print_Numbers(); //
void Display_Numbers(); //
void Display_Smallest(vector <double>&); //
void Display_Largest(vector <double>&); //
void Calculate_Mean(vector <double>&);  //
void Main_Body();//
void Test();//
//<<=========================================================================>>//

size_t x{};
int main() {
cout << "This Program is Use to Check the Number's List\n " << endl;
Main_Body();
return 0;
}
//<<=========================================================================>>//
//<<=========================================================================>>//
//<<=========================================================================>>//
void Print_Instructions(){
cout << "\n<---------------------------------------------->\n" <<endl;
cout << "P- Print numbers  " << endl;
cout << "A- Add a number  "<< endl ;
cout << "M - Display mean of the numbers  "<< endl ;
cout << "S - Display the smallest number  "<< endl ;
cout << "L - Display the largest number  "<< endl ;
cout << "Q - Quit " <<endl;
cout << "C - Clear " <<endl;
cout << "<---------------------------------------------->\n" ;
cout << "What is your Choice? " ;
}
//<<=========================================================================>>//
//<<=========================================================================>>//
//<<=========================================================================>>//
void Main_Body(){
    char Letters;
    cout << "This Program Lists and Computes Numbers" << endl;
do {

Print_Instructions();
cin >> Letters; 
//Enter_Numbers();
main_menu(Letters);

}while(Letters !='q' && Letters != 'Q');
}
//<<=========================================================================>>//
//<<=========================================================================>>//
//<<=========================================================================>>//
vector <double> Number_Storage {};
void main_menu(char Letters){
    switch (Letters){
    case 'p':
    case 'P':
    Storage(Number_Storage);
    break;
    case 'a':
    case 'A':
    Add_Numbers();
    break;
    case 'm':
    case 'M':
    Calculate_Mean(Number_Storage);
    break;
    case 'l':
    case 'L':
    Display_Largest (Number_Storage);
    break;
    case 's':
    case 'S':
    Display_Smallest(Number_Storage);
    break;
    case 'q':
    case 'Q':
    Quit();
    break;
    case 'c':
    case 'C':
    Clear(Number_Storage);
    break;
    default: cout << "Sorry, Unknown Selection, Please Try Again" << endl;
}
}
//<<=========================================================================>>//
//<<=========================================================================>>//
//<<=========================================================================>>//
void Clear( vector <double> &Number_Storage){
Number_Storage.clear();
cout << " --ALL CLEARED-- " ;
}
//<<=========================================================================>>//
void Quit(){
    cout << " //*********//Goodbye//*********// " <<endl;
}
//<<=========================================================================>>//
void Test(){
    cout << " hello" << endl;
}
//<<=========================================================================>>//
void Add_Numbers(){
    Do_You_Agree();
}
//<<=========================================================================>>//
//<<=========================================================================>>//
//<<=========================================================================>>//
void Enter_Numbers(vector <double> &Numbers_list){
    char confirm;
    do{
    size_t Numbers {};
    cout << "Enter Numbers: " ;
    cin >> Numbers ;
    if (!(Numbers >> x)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
    cout << endl ; 
}else { 
    cout << " " << Numbers << " Added " << endl;
    Numbers_list.push_back(Numbers) ;
    cout << " Do you want to add more? Y/N? " ; 
    cin >> confirm;
    }
}while (confirm != 'N'  && confirm != 'n');
}
//<<=========================================================================>>//
//<<=========================================================================>>//
//<<=========================================================================>>//
void Storage(vector <double>& Numbers_list){
    if (Numbers_list.empty()){
        cout << "[] - list is empty" << endl;
    }else {
        cout << "[ "; // addon
    for (auto C : Numbers_list){
        cout << C << " " ;
    }
    cout << " ]"; // addon
    }
    cout << endl;
}
//<<=========================================================================>>//
//<<=========================================================================>>//
void Do_You_Agree(){
    char Agree;
    do{
    cout << " You sure? Y/N? " <<endl;
    cin >> Agree;
    if (!(Agree >> x)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
}else{
    switch (Agree){
        case 'y': 
        case 'Y':
        Enter_Numbers(Number_Storage);
        break;
        case 'n':
        case 'N':
        Agree = 'N';
        break;
        default: cout << " Invalid Input. Please Try Again with Y/N " << endl;
        break;
    }
}
}while (Agree != 'N' && Agree != 'n');
}
//<<=========================================================================>>//
//<<=========================================================================>>//
void Display_Smallest(vector <double>& Numbers_list){
    if (Numbers_list.empty()){
        cout << "[] - list is empty" << endl;
    }else {
    cout  << "The Smallest number in the list is " << endl;
    cout << *std::min_element(Numbers_list.rbegin(), Numbers_list.rend()) <<endl;
}
}
//<<=========================================================================>>//
 void Display_Largest(vector <double>& Numbers_list){
    if (Numbers_list.empty()){
        cout << "[] - list is empty" << endl;
    }else {
    cout  << "The Largest number in the list is " << endl;
    cout << *std::max_element(Numbers_list.rbegin(), Numbers_list.rend()) <<endl;
}
}
//<<=========================================================================>>//
void Calculate_Mean(vector <double>& Numbers_list){
    
if (Numbers_list.empty()){
    cout << "There are no Numbers to be Computed" << endl;
    }else{
    double sum_of_elems = accumulate(Numbers_list.rbegin(), Numbers_list.rend(), 0); // statis_cast<double>sum_of_elems
    double Average = sum_of_elems/Numbers_list.size() ;
    cout << "The Average of all numbers is: " << Average << endl;
    
    }
}
//<<=========================================================================>>//
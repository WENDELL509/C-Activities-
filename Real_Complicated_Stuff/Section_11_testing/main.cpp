#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
#include <algorithm>
using namespace std;
size_t x{};
void  Vector_Container(const vector <double>&); // 
void Storage(); //
void Enter_Numbers(vector <double>&);


int main() {
vector <double> Number_Storage {};
Enter_Numbers(Number_Storage);
for (double C: Number_Storage){
cout << C << endl;
}

return 0;
}


void  Vector_Container(const vector <double>& Numbers_list); //
void Storage(){
    //vector <double>& Numbers_list{};

}
void Enter_Numbers(vector <double> &Numbers_list){
    
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

}
    

}
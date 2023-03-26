#include<iostream>
using namespace std;
class Date
{
private:
    int date ;
    int month;
    int year;
    string day;
public:
    void read();
    void display();

};

int main(){
Date D;
D.read();
D.display();
}


void Date::read(){

    cout<<"Enter Date , Month , Year , Day";
    cin >> date >> month >> year >> day; 
}

void Date::display(){

    cout<<date<< "/"<<month<<"/"<<year<< " "<< day;
}
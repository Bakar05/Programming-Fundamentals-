#include <iostream>
using namespace std;

int main() {
    string name, sap;

    cout<<"What is your name? ";
    getline(cin, name);

    cout<<"What is your SAP ID? ";
    getline(cin, sap);

    cout<<"Name = "<<name<<"    SAP ID = "<<sap<<endl;

    return 0;
}
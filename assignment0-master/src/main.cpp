#include <iostream>
#include <string>

using namespace std;

int main(int argc, char ** argv) {
    string nama;

    cout<< "Silahkan input nama : ";
    getline(cin, nama); 

    cout << "Hello " << nama << endl;

    return 0;
}
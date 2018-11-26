#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string line;

    //creat an output stream to write to the file. also append the new lines the end of the file
    ofstream myfile1 ("input.txt", ios::app);
    if(myfile1.is_open()){
        myfile1<<"\nI am adding a line.\n";
        myfile1<<"I am adding another line.\n";
        myfile1.close();
    }
    else
        cout<<"Unable to open file for writing";

    //create an input stream to read the file
    ifstream myfile0("input.txt");
    if(myfile0.is_open()){
        while(getline(myfile0, line)){
            cout<<line<<"\n";
        }
        myfile0.close();
    }
    else
        cout<<"Unable to open file for reading";

    return 0;
}

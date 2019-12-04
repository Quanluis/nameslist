#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class NumOfStudents
{
private:
    string student[30];
public:
    void FileVer();
    void Bubble();
    void printStudents();
};

void NumOfStudents::FileVer() {
    string fileName = "Names.txt";
    ifstream in(fileName.c_str());  
    if (in.is_open()) { 
        for (int i = 0; i < 30; ++i) {  
            getline(in, student[i]);
        }
    } else { 
        cout << fileName << "File not found...";
    }
}

void NumOfStudents::Bubble() {
    string temp;
    for (int i = 0; i < 30; ++i) {
        for (int l = 0; l < 30 - 1; ++l) {
            if (student[l] > student[l + 1]) {
                temp = student[l];
                student[l] = student[l + 1];
                student[l + 1] = temp;
            }
        }
    }
}

void NumOfStudents::printStudents() {
    cout << "Students in alphabetical order:" << endl;
    for (int i = 0; i < 30; ++i) { 
        cout << student[i] << endl;
    }
}


int main(){

    cout << "Namelist program..." << endl;

    string student[30];

    NumOfStudents m;

    m.FileVer();
    m.Bubble();
    m.printStudents();

    return 0;
}
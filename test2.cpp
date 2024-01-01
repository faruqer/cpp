#include <iostream>
#include <fstream>


using namespace std;
void writeFile();
void readandCount();


int main()
{
    
    writeFile();
    readandCount();
    return 0;
}

void writeFile(){

fstream file1, file2;
    file1.open("name1.txt", ios::out);
    if(file1.is_open()){
        file1<<"abe\n";
        file1<<"kebe\n";
        file1<<"chala\n";
        file1<<"naha\n";
        file1<<"shalom";
    }else {
        cout << "Unable to open the file1 for writing." << endl;
    }
    file2.open("name2.txt", ios::out);
    if(file1.is_open()){
        file2<<"abe1\n";
        file2<<"kebe1\n";
        file2<<"chala1\n";
        file2<<"naha1\n";
        file2<<"shalom1";
    }else {
        cout << "Unable to open the file2 for writing." << endl;
    }
    file1.close();
    file2.close();
}

void readandCount(){
    fstream file1, file2;
    string line1, line2, arr[10];
    file2.open("name2.txt", ios::in);
            if(file2.is_open()){
                for(int i=0; i<5; i++){
                getline(file2, line2);
                arr[i]=line2;
            }
            }else {
                cout << "Unable to open the file2 for writing." << endl;
                }
    file1.open("name1.txt", ios::in);
    if(file1.is_open()){
        if(file2.is_open()){
                for(int i=5; i<10; i++){
                getline(file1, line1);
                arr[i]=line1;
            }
    }else {
        cout << "Unable to open the file1 for writing." << endl;
        }
}}
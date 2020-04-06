#include<iostream>
#include<string>
#include<fstream>
#include"Files.h"
#include"Plagiat.h"
using namespace std;
int main(){
    Files f1("Alex",007,"file1.cpp");
    Files f2("Max",008,"file2.cpp");
    Plagiat f(f1,f2);
    try{
        f.showThePlag();
    }catch(runtime_error& err){
            cout<<err.what()<<endl;
        }
    return 0;
}
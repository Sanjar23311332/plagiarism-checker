#include"Files.h"
#include<iostream>
#include<string>
using namespace std;
Files::Files(){}
Files::Files(string sN,int i,string fN){
    studentName=sN;
    ID=i;
    fileName=fN;
}
void Files::setStudentName(string sN){
    studentName=sN;
}
string Files::getStudentName(){
    return studentName;
}
void Files::setID(int i){
    ID=i;
}
int Files::getID(){
    return ID;
}
void Files::setFileName(string fN){
    fileName=fN;
}
string Files::getFileName(){
    return fileName;
}
Files::Files(Files &f){
    studentName=f.studentName;
    ID=f.ID;
    fileName=f.fileName;
}


#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
#include "Plagiat.h"
Plagiat::Plagiat(Files &f1,Files &f2):file1(f1),file2(f2){
    
}

void Plagiat::checkThePlag(){
    file1.file.open(file1.fileName);
    file2.file.open(file2.fileName);
    if(!file1.file||!file2.file)
        throw runtime_error("The file is not found!!!");
    string strf1,strf2;
    double countWord=0,countPlag=0;
    while(!file1.file.eof()&&!file2.file.eof()){
        file1.file>>strf1;
        while(strf1=="\n"||strf1==" "){
            file1.file>>strf1;
            continue;
        }
        file2.file>>strf2;
        while(strf2=="\n"||strf2==" "){
            file1.file>>strf2;
            continue;
        }
        if(strf1==strf2)
            countPlag++;
        countWord++;
    }
    file1.file.close();
    file2.file.close();
    cout<<countWord;
    perOfPlag=countPlag/countWord*100;
}
void Plagiat::showThePlag(){
    checkThePlag();
    cout<<"Student 1 "<<endl;
    cout<<"Name: "<<file1.studentName<<" ID: U"<<file1.ID<<" Filename: "<<file1.fileName<<endl;
    cout<<"Student 2 "<<endl;
    cout<<"Name: "<<file2.studentName<<" ID: U"<<file2.ID<<" Filename: "<<file2.fileName<<endl;
    if(perOfPlag>=70)
        cout<<"Plagiarism detected!!!"<<endl;
    else
        cout<<"Plagiarism is not detected!!!"<<endl;
}
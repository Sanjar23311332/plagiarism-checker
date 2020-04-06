#include<iostream>
#include"Files.h"
class Plagiat{
private:
    int perOfPlag=0;
    Files file1;
    Files file2;
public:
    Plagiat(Files &f1,Files &f2);
    void checkThePlag();
    void showThePlag();
};
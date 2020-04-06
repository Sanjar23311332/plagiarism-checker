#ifndef Files_h
#define Files_h
#include<fstream>
using std::string;
using std::ifstream;
class Files{
private:
    string studentName;
    int ID;
    string fileName;
    ifstream file;
public:
    Files();
    Files(string,int,string);
    void setStudentName(string);
    string getStudentName();
    void setID(int);
    int getID();
    void setFileName(string);
    string getFileName();
    Files(Files&);
    friend class Plagiat;
};

#endif /* Files_h */

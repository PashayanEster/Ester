#include "docmanager.h"
#include <iostream>
#include <fstream>


void Docmanager::create() {
    std::fstream myFile;// fstream-ov object en stexcum 
    std::string fileName;//userin asum enq nermuci file-i anun@ dra hamar petq apahenq string
    std::cout<< "Please Enter your file's name";
    std::getline(std::cin, fileName);//mi amboxj toxy vercnuma cin -ic nayuma grum a filename -i mej
    myFile.open(fileName, std::ios::out);//file vor bacum enq vor ashxati et formatov out-ov
    files.push_back(fileName);//pahem stexcvac faile-i anunnery
    myFile.close();
    }


void Docmanager::edit(const std::string& context){ //stanum enq text vory piti gri
    std::fstream myfile;
    myfile.open("task.txt", std::ios::app);
    myfile<<context;
    myfile.close();
}

void Docmanager::view(){
    std::fstream files;
    files.open("task.txt", std::ios::in);
}

void Docmanager::show(){
for(int i = 0; i < files.size(); ++i){
    std::cout << files[i] << std::endl;
}
   // std::fstream files;
    //std::string line;
    //while(getline(files,line)){std::cout<<line <<std::endl; }
}

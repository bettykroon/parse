/*
Betty Kroon
2020-02-05
Introduktion till programmering
Laboration 2
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in;
    ofstream out;   
    in.open("names.txt"); 
    out.open("output.txt");

    string firstname, secondname, pnumber, address, gender; 

    while(!in.eof()) 
        {
            std::getline(in, firstname, ' '); 
            std::getline(in, secondname);
            std::getline(in, pnumber);
            std::getline(in, address);
            if(in.eof()) 
            {
            break;  
            }
            out << secondname << ", "; 
            out << firstname; 
                if(pnumber[8] % 2 == 0) 
                {
                gender = (" [F]"); 
                }
                else  
                {
                gender = (" [M]"); 
                }
            out << gender << " " << endl; 
            out << address << endl; 

        }
        in.close(); 
        out.close();
return 0;
}



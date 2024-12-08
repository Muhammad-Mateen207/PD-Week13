#include<iostream>
#include<fstream>
#include<string>
using namespace std;

string Check_Data(string,int);
void GetBirthdayCake(string name , int age);

int main()
{
    string line;
    string name;
    int age ;
    fstream old_file;
    old_file.open("TASK1.txt", ios::in);

    if(getline(old_file,line))
    {
        name = Check_Data(line,1);
        age = stoi(Check_Data(line,2));
        GetBirthdayCake(name,age);
    }
    old_file.close();
}
string Check_Data(string data, int field)
{
    int comma = 1;
    string item;
    for(int i=1; i <= data.length()-1; i++)
    {
        if(data[i] == ',')
        {
            comma = comma + 1 ;
        }
        else if ( comma == field)
        {
            item = item + data[i];
        }
    }
    return item;
}
void GetBirthdayCake(string name , int age)
{
    char a;
    string data;
    fstream newFile;
    newFile.open("TASK1_b.txt", ios::out);
    if ( age % 2 ==0 )
    {
        a = '*';
    }
    else
    {
        a = '#';
    }
    for(int i=1; i<=15; i++)
    {
        newFile << a;
    }
    newFile << endl;
    newFile <<a<<' '<<age<<" HB "<<name<<"!"<<age<<' '<<a<<endl;
    for(int i=1; i<=15; i++)
    {
        newFile << a;
    }
    newFile.close();
}
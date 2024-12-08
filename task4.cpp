#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int returnIndex(string array, char a);
string filterElements(string array, string line);

int main()
{
   string array = "abcdefghijklmnopqrstuvwxyz";
   string line;

   fstream file;
   file.open("TASK4_cp.txt", ios::in);
   getline(file,line);
   file.close();

   string filteredArray = filterElements(array,line);

   fstream newFile;
   newFile.open("TASK4_cp.txt", ios::app);
   newFile << endl << filteredArray ;
   newFile.close();

}
int returnIndex(string array, char a)
{
    for (int i=0; i < array.length(); i++)
    {
        if (array[i]=a)
        {
            return i;
        }
    }
    return -1;
}
string filterElements(string array, string line)
{
    string result;
    for(int i=0; i <array.length(); i++)
    {
        char currentChar = array[i];
        bool shouldAdd = true;

        for(int j=0; j<array.length();j++)
        {
            if(currentChar = line[j])
            {
                shouldAdd = false;
                break;
            }
        }
        if(shouldAdd)
        {
            result = result + currentChar;
        }
    }
    return result;
}


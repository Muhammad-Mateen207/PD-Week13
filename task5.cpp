#include<fstream>
#include<iostream>
#include<string>
using namespace std;

string MorseCode(string); 
int main() 
{
    string word;
    cout<<"Enter a string : ";
    getline(cin, word);

    string output = MorseCode(word); 
    cout<<"Morse Code: "<<output<<endl;

}
string MorseCode(string Text_Entered) 
{
    string result="";
    for (int i= 0; i < Text_Entered.length(); i++) 
    {
        if (Text_Entered[i]=='A' || Text_Entered[i]=='a') 
        {
            result=result+".-";
        }
        else if (Text_Entered[i]=='B' || Text_Entered[i]=='b') 
        {
            result=result+"-...";
        }
        else if (Text_Entered[i]=='C' || Text_Entered[i]=='c') 
        {
            result=result+"-.-.";
        }
        else if (Text_Entered[i]=='D' || Text_Entered[i]=='d') 
        {
            result=result+"-..";
        }
        else if (Text_Entered[i]=='E' || Text_Entered[i]=='e') 
        {
            result=result+".";
        }
        else if (Text_Entered[i]=='F' || Text_Entered[i]=='f') 
        {
            result=result+"..-.";
        }
        else if (Text_Entered[i]=='G' || Text_Entered[i]=='g') 
        {
            result=result+"--.";
        }
        else if (Text_Entered[i]=='H' || Text_Entered[i]=='h') 
        {
            result=result+"....";
        }
        else if (Text_Entered[i]=='I' || Text_Entered[i]=='i') 
        {
            result=result+"..";
        }
        else if (Text_Entered[i]=='J' || Text_Entered[i]=='j') 
        {
            result=result+".---";
        }
        else if (Text_Entered[i]=='K' || Text_Entered[i]=='k') 
        {
            result=result+"-.-";
        }
        else if (Text_Entered[i]=='L' || Text_Entered[i]=='l') 
        {
            result=result+".-..";
        }
        else if (Text_Entered[i]=='M' || Text_Entered[i]=='m') 
        {
            result=result+"--";
        }
        else if (Text_Entered[i]=='N' || Text_Entered[i]=='n') 
        {
            result=result+"-.";
        }
        else if (Text_Entered[i]=='O' || Text_Entered[i]=='o') 
        {
            result=result+"---";
        }
        else if (Text_Entered[i]=='P' || Text_Entered[i]=='p') 
        {
            result=result+".--.";
        }
        else if (Text_Entered[i]=='Q' || Text_Entered[i]=='q') 
        {
            result=result+"--.-";
        }
        else if (Text_Entered[i]=='R' || Text_Entered[i]=='r') 
        {
            result=result+".-.";
        }
        else if (Text_Entered[i]=='S' || Text_Entered[i]=='s') 
        {
            result=result+"...";
        }
        else if (Text_Entered[i]=='T' || Text_Entered[i]=='t') 
        {
            result=result+"-";
        }
        else if (Text_Entered[i]=='U' || Text_Entered[i]=='u') 
        {
            result=result+"..-";
        }
        
        else if (Text_Entered[i]=='V' || Text_Entered[i]=='v') {
            result=result+"...-";
        }
        else if (Text_Entered[i]=='W' || Text_Entered[i]=='w') 
        {
            result=result+".--";
        }
        else if (Text_Entered[i]=='X' || Text_Entered[i]=='x') 
        {
            result=result+"-..-";
        }
        else if (Text_Entered[i]=='Y' || Text_Entered[i]=='y') 
        {
            result=result+"-.--";
        }
        else if (Text_Entered[i]=='Z' || Text_Entered[i]=='z') 
        {
            result=result+"--..";
        }
        else if (Text_Entered[i]==' ') 
        {
            result=result+"-.-.-.-";
        }
    }
    return result;
}
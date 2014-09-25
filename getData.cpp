#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;
//#include "getData.h"
/*
return how man lines in the file
input: filename
output: number of lines in this file
*/
int CountLines(char *filename)  
{  
    ifstream ReadFile;  
    int n=0;  
    string tmp;  
    ReadFile.open(filename,ios::in);
    if(ReadFile.fail())
    {  
        return 0;  
    }  
    else
    {  
        while(getline(ReadFile,tmp,'\n'))  
        {  
            n++;  
        }  
        ReadFile.close();  
        return n;  
    }   
}  
/*
return a specific given the lines
input: 
	filename: file name
	selectNum: selected number
output:
	tmp: specific string
*/
string ReturnString(char *filename,int selectNum)  
{  
    ifstream ReadFile;  
    int n=0;  
    string tmp;  
    ReadFile.open(filename,ios::in);
    if(ReadFile.fail())
    {  
        return 0;  
    }  
    else
    {  
        while(getline(ReadFile,tmp,'\n'))  
        {  
        	if (selectNum == n)
        	{
        		ReadFile.close();  
        		return tmp;
        	}
            n++;  
        }  
        ReadFile.close();  
        return NULL;  
    }   
}  

/*
write new file through an old file
input:
	filename: old file name
output:
	outFileName: new file name

*/

void WringNewFile(char *filename, char *outFileName)  
{  
    ifstream ReadFile;  
    ofstream WriteFile;
    int n=0;  
    string tmp;  
    ReadFile.open(filename,ios::in);
    WriteFile.open(outFileName,ios::out);

    if(ReadFile.fail())
    {  
        return;  
    }  
    else
    {  
        while(getline(ReadFile,tmp,'\n'))  
        {  
            n++; 
            if (tmp[0] == '>')
            	continue;
        }  
        ReadFile.close();
        WriteFile.close();  
        return;  
    }   
}  

/*int main()
{
    return 0;
}*/
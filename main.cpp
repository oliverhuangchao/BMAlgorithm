#include <string.h>
#include <stdio.h>
#include <cstring>
#include "BMFunction.h"
#include "getData.h"


int main()
{
    char *filename = new char[100];
    std::strcpy(filename,"out.txt");
    int count = CountLines(filename);  
    std::string first = ReturnString(filename,0);  


    for (int i = 1;i < count;i ++)
    {
        std::string second = ReturnString(filename,count - i);  

        char *buf = new char[1000000000];
        std::strcpy(buf,second.c_str());

        char *ptrn = new char[1000000000];
        std::strcpy(ptrn,first.c_str());

        int blen = strlen(buf);
        int plen = strlen(ptrn);

        int *skip = MakeSkip(ptrn,plen);
        int *shift = MakeShift(ptrn,plen);

        int result = BMSearch(buf, blen, ptrn, plen, skip, shift);  

        printf("%d\t", result);

        delete []buf;
        delete []ptrn;
    }
    return 0;

}  

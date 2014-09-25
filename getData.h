#include <cstring>
#include <iostream>
#include <fstream>

/*
return how man lines in the file
input: filename
output: number of lines in this file
*/
int CountLines(char *filename);  

/*
return a specific given the lines
input: 
	filename: file name
	selectNum: selected number
output:
	tmp: specific string
*/
std::string ReturnString(char *filename,int selectNum);  



/*
write new file through an old file
input:
	filename: old file name
output:
	outFileName: new file name

*/
void WringNewFile(char *filename, char *outFileName);  
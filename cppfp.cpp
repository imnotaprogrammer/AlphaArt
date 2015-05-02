#ifndef MY_PROGRAM_GENERATOR
#define MY_PROGRAM_GENERATOR

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string filename;	
    filename = argv[1];

    ofstream out(filename);

    out << "#include <iostream>\n\n"
    	<< "using namespace std;\n\nint main(int argc, char** argv)\n"
        << "{\n"
	<< "\n	//Program text here\n\n"
        << "	return 0;\n"
        << "}\n\n"
        << "\n";
        
        
    return 0;
}

#endif

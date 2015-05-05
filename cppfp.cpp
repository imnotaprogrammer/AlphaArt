#ifndef MY_PROGRAM_GENERATOR
#define MY_PROGRAM_GENERATOR

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string filename;	
    string headerguard;

    if(argc != 3)
    {
	cerr << "USAGE: <FILENAME> <HEADER_GUARD_NAME>" << "\n";
	exit(1);
    }

    filename = argv[1];
    headerguard = argv[2];  

    ofstream out(filename);

    out << "#ifndef " << headerguard << "\n"
        << "#define " << headerguard << "\n\n";

    out << "#include <iostream>\n\n"
    	<< "using namespace std;\n\nint main(int argc, char** argv)\n"
        << "{\n"
	<< "\n	//Program text here\n\n"
        << "	return 0;\n"
        << "}\n\n"
        << "\n";
        
    out << "#endif\n";    
    return 0;
}

#endif

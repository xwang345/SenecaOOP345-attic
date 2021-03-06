#include <fstream>
#include <iostream>
#include <string>
#include <cstring>  // strlen

#include "llp.h"

using namespace std;

int main(int argc, char**argv) 
{
    const char *filename =  "llp.dat";

    LLPersistence llp(filename);

    // push args
    for(int i = 1; i < argc; i++)
        llp.push( (void*) argv[i], strlen(argv[i]) );

}

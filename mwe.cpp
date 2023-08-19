#include "Python.h"

int main(int argc, char** argv)
{
    Py_Initialize();
    PyRun_SimpleString("import sys; print('>>>> embedded sys.path:', sys.path)");
    return 0;
}

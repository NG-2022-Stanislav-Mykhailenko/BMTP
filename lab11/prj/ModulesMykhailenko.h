#ifndef MODULESMYKHAILENKO_H_INCLUDED
#define MODULESMYKHAILENKO_H_INCLUDED

#include <vector>
#include "struct_type_project_1.h"

using namespace std;

void add(vector<Product>&, wstring, wstring, wstring, wstring);

void remove(vector<Product>&, wstring);

bool read(vector<Product>&, string);

bool save(vector<Product>&, string);

void search(vector<Product>&, wstring);

#endif // MODULESMYKHAILENKO_H_INCLUDED

#include <codecvt>
#include <fstream>
#include <iostream>
#include <locale>
#include <sstream>
#include <string>
#include "ModulesMykhailenko.h"

using namespace std;

vector<Product> products;

void add(vector<Product> &vec, wstring section, wstring sectionName, wstring code, wstring name) {
	vec.push_back({});
	Product& back = vec.back();
	back.section = section;
	back.sectionName = sectionName;
	back.code = code;
	back.name = name;
}

void remove(vector<Product> &vec, wstring record) {
	bool found = false;
	for (vector<Product>::iterator it = vec.begin(); it != vec.end();) {
		if (it->code == record) {
			found = true;
			it = vec.erase(it);
		} else
			++it;
	}

	if (found)
		wcout << L"Видалено." << endl;
	else
		wcout << L"Не знайдено." << endl;
}

bool read(vector<Product> &vec, string file) {
	vector<vector<wstring>> content;
	vector<wstring> row;
	wstring line, word;

	wifstream data;
	data.open(file);

	data.imbue(locale(locale(), new codecvt_utf8<wchar_t>));

	if (data.is_open()) {
		while(getline(data, line)) {
			row.clear();

			wstringstream str(line);

			while(getline(str, word, L'\u0009'))
				row.push_back(word);
			content.push_back(row);
		}
	} else
		return false;

	for (unsigned int i = 0; i < content.size(); i++) {
		vec.push_back({});
		Product& back = vec.back();
		back.section = content[i][0];
		back.sectionName = content[i][1];
		back.code = content[i][2];
		back.name = content[i][3];
	}

	return true;
}

bool save(vector<Product> &vec, string file) {
	wofstream data;
	data.open(file);

	data.imbue(locale(locale(), new codecvt_utf8<wchar_t>));

	if (!data)
		return false;

	for (unsigned int i = 0; i < vec.size(); i++)
		data << vec[i].section << L'\u0009' << vec[i].sectionName << L'\u0009' << vec[i].code << L'\u0009' << vec[i].name << endl;

	return true;
}

void search(vector<Product> &vec, wstring record) {
	bool found = false;
	for (unsigned int i = 0; i < vec.size(); i++) {
		if (vec[i].code == record) {
			found = true;
			wcout << vec[i].code << L": " << vec[i].name << L", належить до розділу " << vec[i].section << L" (" << vec[i].sectionName << L")" << endl;
		}
	}
	if (!found)
		wcout << L"Не знайдено." << endl;
}

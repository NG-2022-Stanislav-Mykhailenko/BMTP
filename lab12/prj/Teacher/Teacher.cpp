#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "ModulesMykhailenko.h"

using namespace std;

int main() {
    ofstream result;
    result.open("../../TestSuite/TestResults.txt");
    if (!result)
        return 1;

    string path = __FILE__;

    if (path.find("\\lab12\\prj") == string::npos) {
        for (int i = 0; i < 100; i++)
            cout << "\a";
        result << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        return 2;
    }

    ifstream testsuite;
    testsuite.open("../../TestSuite/unit.txt");

    vector<vector<string>> content;
    vector<string> row;
    string line, word;
    unsigned int lines = 0;
    bool firstLine = true;

    if (testsuite.is_open()) {
        while(getline(testsuite, line)) {
            if (firstLine) {
                firstLine = false;
                continue;
            }

            row.clear();

            stringstream str(line);

            while(getline(str, word, '\u0009'))
                row.push_back(word);
            content.push_back(row);
            lines++;
        }
    } else
        return 3;

    float edge[lines];
    float expectedVolume[lines];
    unsigned int expectedSeeds[lines];

    for (unsigned int i = 0; i < content.size(); i++) {
        edge[i] = stof(content[i][0]);
        expectedVolume[i] = stof(content[i][1]);
        expectedSeeds[i] = stoi(content[i][2]);
    }

    ClassLab12_Mykhailenko *classLab = new ClassLab12_Mykhailenko(edge[0], expectedSeeds[0]);
    for (unsigned int i = 0; i < lines; i++) {
        float volume = classLab->getVolume();
        unsigned int seeds = classLab->getSeeds();
        result << "Test " << i + 2 << ".1 " << (volume == expectedVolume[i] ? "passed" : "failed") << endl;
        result << "Test " << i + 2 << ".2 " << (seeds == expectedSeeds[i] ? "passed" : "failed") << endl;
        if (i + 1 != lines) {
            classLab->setEdge(edge[i + 1]);
            classLab->setSeeds(expectedSeeds[i + 1]);
        }
    }
}

#include <cmath>
#include "ModulesMykhailenko.h"

ClassLab12_Mykhailenko::ClassLab12_Mykhailenko(float edgeToSet, unsigned int seedsToSet) {
    edge = edgeToSet;
    seeds = seedsToSet;
}

float ClassLab12_Mykhailenko::getVolume() {
    return pow(edge, 3);
}

int ClassLab12_Mykhailenko::getSeeds() {
    return seeds;
}

bool ClassLab12_Mykhailenko::setEdge(float edgeToSet) {
    if (edgeToSet > 0) {
        edge = edgeToSet;
        return true;
    } else {
        return false;
    }
}

void ClassLab12_Mykhailenko::setSeeds(unsigned int seedsToSet) {
    seeds = seedsToSet;
}

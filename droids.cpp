#include <iostream>
#include <string>
#include <random>
#include <vector>
#include "rng.h"
#include "BasicHost.h"

// RNG rng;

// RNG.seed(time(0));
// rng.seed(time(0));

bool initRNG() {
    RNG.seed((time(0)));
    return true;
}

std::uniform_int_distribution<u_int8_t> indexHundred(0, 99);

bool rngInitted = initRNG();

BasicHost host = BasicHost("Roget", "creator of Roget's Thesaurus");

std::string names[] = {
    "Laila", "Jack", "Harley", "Hertha", "Darren", "Jolene","Loura", "Lona", "Davida", "Reena", "Leland", "Ta", "Jen", "Linn", "Roslyn", "Margorie", "Rafaela", "Romona", "Shanel", "Stan"
};

std::uniform_int_distribution<uint8_t> nameDist(0, names->size()-1);

std::string occupations[] = {
    "Clerical assistant", "Leaflet distributor", "Landowner", "Special constable", "Anaesthetist", "Park-keeper", "Butler", "Choreographer", "Blacksmith", "Chef", "Legal secretary", "Songwriter", "Librarian", "Landscape gardener"
};

std::uniform_int_distribution<uint8_t> occDist(0, occupations->size()-1);

std::vector<BasicHost> hostArray;


int main() {
    if (!rngInitted){RNG.seed((time(0)));}
    host.saySpecs();

    // BasicHost host2 = BasicHost(names[nameDist(RNG)],occupations[occDist(RNG)]);

    for (int8_t i = 0; i < 100; i++)
    {
        /* code */
        hostArray.push_back(BasicHost(names[nameDist(RNG)],occupations[occDist(RNG)]));
    }
    hostArray[indexHundred(RNG)].saySpecs();
    hostArray[indexHundred(RNG)].saySpecs();
    hostArray[indexHundred(RNG)].saySpecs();
}
#pragma once
#include <string>

class BasicHost
{
private:
    /* data */
public:
    std::string name;
    std::string occupation;

    void saySpecs(){};
    
    BasicHost(std::string nam,std::string occ);
    ~BasicHost();
};

BasicHost::BasicHost(std::string nam,std::string occ)
{
    this->name=nam;
    this->occupation=occ;
}

BasicHost::~BasicHost()
{
}

void BasicHost::saySpecs(){
    std::cout << "I am " << this->name << " and I am a " << this->occupation;
}
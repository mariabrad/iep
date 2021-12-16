#include <iostream>
#include <mutex>
#include <memory>

class Lock 
{
    public:
        explicit Lock();
        ~Lock();
        Lock(const Lock&) = delete;
        Lock& operator=(const Lock&) = delete;
};

void listening();
void finishing();

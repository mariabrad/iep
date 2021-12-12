#include <iostream>
#include <mutex>
#include <memory>

using namespace std;

class Lock 
{
public:
    explicit Lock(mutex *pm)
        : mutexPtr(pm)
    {
        //lock(mutexPtr);
    } // acquire resource

    ~Lock() { //unlock(mutexPtr); 
    } // release resource

private:
    mutex *mutexPtr;
};
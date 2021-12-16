#include <iostream>
#include <mutex>
#include <memory>

using namespace std;

class Lock
{
public:
    explicit Lock(mutex *pm);

private:
    shared_ptr<mutex> pMutex;
};

void unlock(mutex *pm);
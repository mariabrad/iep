#include "lock.hpp"

Lock::Lock(mutex *pm)
{
    pm->lock();

    cout << "Lock" << endl;
}

void unlock(mutex *pm)
{
    pm->unlock();

    cout << "Unlock" << endl;
}
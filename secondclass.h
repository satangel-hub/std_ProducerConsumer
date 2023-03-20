#ifndef SECONDCLASS_H
#define SECONDCLASS_H

#include "iostream"
#include <unistd.h>
#include "type.h"
#include <mutex>
#include <queue>

class secondclass
{
public:
    secondclass();
    static void *do_second(void * tmp);
private:


};

#endif // SECONDCLASS_H

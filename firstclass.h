#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H
#include "iostream"
#include <pthread.h>
#include <unistd.h>
#include <deque>
#include <mutex>
#include <queue>
#include "type.h"

using namespace std;

class firstclass
{
public:
    firstclass();
    static void *do_first(void *);
    static firstclass *Instance();
private:
    static firstclass *instance;

};

#endif // FIRSTCLASS_H

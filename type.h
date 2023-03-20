#ifndef TYPE_H
#define TYPE_H
#include <queue>
#include <mutex>
using namespace std;
typedef struct
{
queue<int> myqu;
mutex mymut;
}ctlitem;
#endif // TYPE_H

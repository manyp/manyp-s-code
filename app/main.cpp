#include <pthread.h>
#include "bar/bar.h"
#include "foo/foo.h"

int main()
{
    Bar();
    Foo();
    pthread_setconcurrency(10);
}

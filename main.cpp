#include <iostream>
#include "UnsortedType.h"

using namespace std;

int main()
{
    UnsortedType ust;

    ust.InsertItem(5);
    ust.InsertItem(6);
    ust.InsertItem(7);
    ust.InsertItem(8);

    ust.DeleteItem(6);

    ust.MakeEmpty();

    ust.Show();
}

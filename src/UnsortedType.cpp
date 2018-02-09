#include "UnsortedType.h"
#include <iostream>
using namespace std;

UnsortedType::UnsortedType()
{
    length = 0;
}

bool UnsortedType::IsFull()
{
    return (length ==10);
}

void UnsortedType::InsertItem(int item)
{
    if(IsFull())
    {
        return;
    }

    info[length] = item;
    length++;
}



void UnsortedType::MakeEmpty()
{
    length = 0;
}

//O(n)
void UnsortedType::DeleteItem(int item)
{
    for(int i =0; i< 10; i++)
    {
        if(info[i] == item)
        {
            info[i] = info[length -1];
            length--;
        }
    }
}

void UnsortedType::Show()
{
    for(int i =0; i<length; i++)
    {
        cout<<info[i]<<endl;
    }
}

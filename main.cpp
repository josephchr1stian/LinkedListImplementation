

#include <iostream>
#include "LinkedList.h"
int main()
{
    LinkedList<int> list;
    for (int i = 0; i < 10; i++)
    {
        list.push_back(i);

    }

    std::cout << list << std::endl; // 0 1 2 3 4 5 6 7 8 9

    for(int i=0; i<10; i++)
    {
        list.push_front(i);
    }

    std::cout << list << std::endl; //9 8 7 6 5 4 3 2 1 0 0 1 2 3 4 5 6 7 8 9
    for(int i=0; i<5; i++)
    {

        list.push_front(i);
        list.push_back(i+10);
    }
    std::cout << list << std::endl; //4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
    list.pop_front();
    list.pop_back();
    list.remove(9);
    std::cout<<list;

    return 0;
}
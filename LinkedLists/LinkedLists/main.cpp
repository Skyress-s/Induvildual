#include "LinkedList.h"
int main(int argc, char* argv[])
{
    LinkedList<int> linked_list = LinkedList<int>();

    linked_list.InsertAtFront(1);
    linked_list.InsertAtBack(5);
    linked_list.InsertAtBack(151);
    linked_list.printList();

// return 0;
    linked_list.InsertAtFront(7);
    linked_list.InsertAtFront(4);
    linked_list.InsertAtFront(2);
    
    linked_list.InsertAtFront(1);
    linked_list.InsertAtFront(5);
    linked_list.InsertAtFront(10);
    
    linked_list.InsertAtFront(9);
    linked_list.InsertAtIndex(6, 69);
    linked_list.printList();

    std::cout << "SWAP TEST" << std::endl;
    linked_list.Swap(7, 4);
    linked_list.printList();
    linked_list.Swap(4, 7);
    linked_list.printList();

    std::cout << "AHHH" << std::endl;
    std::cout << linked_list << std::endl;
    return 0;
}

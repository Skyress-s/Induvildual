#include "BinaryTree/Node.h"
#include <iostream>
#include "../../Sorting/Sorting/SomeScalarClass.h"
#include "../../Sorting/Sorting/SomeScalarClass.cpp"


int main() {


    // SomeScalarClass t = SomeScalarClass();
    // NodeT<SomeScalarClass>* templateNode = new NodeT<SomeScalarClass>(SomeScalarClass(15));
    // templateNode->Insert(SomeScalarClass(4));
    // templateNode->Insert(SomeScalarClass(3));
    // templateNode->Insert(SomeScalarClass(4));
    // templateNode->Insert(SomeScalarClass(20));
    // templateNode->Insert(SomeScalarClass(19));
    // templateNode->Insert(SomeScalarClass(16));
    // templateNode->Insert(SomeScalarClass(25));
    // templateNode->PrintTree();
    // templateNode->Delete(SomeScalarClass(20), templateNode);
    // std::cout << "---------------------------" << std::endl;
    // templateNode->PrintTree();
    
    
    
    NodeT<int>* root = new NodeT<int>(5);
    root->Insert(10);
    root->Insert(20);
    root->Insert(8);
    root->Insert(12);
    root->Insert(17);
    root->Insert(25);
    root->PrintTree();
    root->Insert(1);
    std::cout << "-----------------------" << std::endl;
    root->Insert(-10);
    root->Insert(4);
    root->PrintTree();
    
    std::string toPrint{};
    std::cout << "INORDER" << std::endl;
    root->ToStringInOrder(toPrint);
    std::cout << toPrint << std::endl;

    std::cout << "PREORDER" << std::endl;
    toPrint = "";
    root->ToStringPreOrder(toPrint);
    std::cout << toPrint << std::endl;

    std::cout << "POSTORDER" << std::endl;
    toPrint = "";
    root->ToStringPostOrder(toPrint);
    std::cout << toPrint << std::endl;

    std::cout << "BEFORE REMOVING A NODE" << std::endl;
    root->PrintTree();
    root->Delete(10, root);

    std::cout << "AFTER REMOVING A NODE" << std::endl;
    root->PrintTree();

    
    root->Clear();
    return 0;
}

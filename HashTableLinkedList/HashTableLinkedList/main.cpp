#include "HashTable/HashTable.h"
#include <iostream>

#include "HashTable/HashTableLinkedList.h"
#include "HashTable/HashTableOpenAdressing.h"

// HashTableLinkedList
void ShowHTLL() {
    HashTableLinkedList<int, int> HT = HashTableLinkedList<int,int>{};
    if (HT.IsEmpty())
        std::cout << "IsEmpty" << std::endl;
    else
        std::cout << "IsNOTEmpty" << std::endl;
        
    HT.InsertItem(101, 5);
    HT.InsertItem(102, 5);
    HT.InsertItem(201, 10);
    HT.InsertItem(202, 69);
    HT.RemoveItem(102);
    HT.InsertItem(5915, 15);
    HT.InsertItem(201, 1);
    
    
    if (HT.IsEmpty())
        std::cout << "IsEmpty" << std::endl;
    else
        std::cout << "IsNOTEmpty" << std::endl;

    HT.Print();

    int key = 202;
    int val = HT.SearchTable(key);
    std::cout << "Seached key and resulting value Key: "  << key << " Value: " << val << std::endl;

    // WITH STRING
	// ------------------------------------------------------
    HashTableLinkedList<std::string, float> namedNumbers = HashTableLinkedList<std::string, float>{};
    std::cout << (namedNumbers.IsEmpty() ? "EMPTY" : "NOT EMPTY") << std::endl;
    namedNumbers.InsertItem("Bingus", 42.151f);
    std::cout << namedNumbers.SearchTable("Bingus") << std::endl;
    
    
}

int main()
{
    ShowHTLL();
    return 0;

    
    HashTableOpenAdressing adressHT = HashTableOpenAdressing();
    adressHT.Insert(101,"Aim");
    adressHT.Insert(102,"Bim");
    adressHT.Insert(103,"Cim");
    adressHT.Insert(104,"Cim");
    adressHT.Insert(105,"AWDim");
    adressHT.Insert(106,"AWDim");
    adressHT.Insert(107,"Aim");
    adressHT.Insert(208,"AAim");
    adressHT.Insert(209,"AAim");
    adressHT.Insert(201,"AAAim");
    adressHT.Insert(301,"AAAim");
    adressHT.Print();
    // static const int bingus = 10;
    // std::list<std::pair<int,std::string>> list[bingus];
    // int test = 1;
    // std::list<std::pair<int, std::string>>& cell = list[test];
    // // auto& iItr = std::begin(list);
    return 0;
    HashTable HT;
    if (HT.IsEmpty()) {
        std::cout << "COrrect anwser" << std::endl;
    }
    else {
        std::cout << "Ops"  << std::endl;
    }

    
    HT.InsertItem(900, "0im");
    HT.InsertItem(905, "Jim");
    HT.InsertItem(904, "Aim");
    HT.InsertItem(505, "Bim");
    HT.InsertItem(902, "Cim");
    HT.InsertItem(501, "Dim");
    HT.InsertItem(0, "Eim");
    HT.InsertItem(1, "Eim");
    HT.InsertItem(2, "Eim");
    HT.InsertItem(3, "Eim");
    HT.InsertItem(4, "Eim");
    HT.InsertItem(5, "Eim");
    HT.InsertItem(6, "Eim");

    HT.Print();

    // HT.RemoveItem(905);
    // HT.RemoveItem(100);

    std::cout << HT.table[0].begin()++->second << std::endl;
    
    if (HT.IsEmpty()) {
        std::cout << "Ops!" << std::endl;
    }
    else {
        std::cout << "Correct"  << std::endl;
    }
    return 0;
}

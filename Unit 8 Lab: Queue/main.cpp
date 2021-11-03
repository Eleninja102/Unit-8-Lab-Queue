//
//  main.cpp
//  Unit 8 Lab: Queue
//
//  Created by Coleton Watt on 11/3/21.
//

#include <iostream>
#include "Queue.hpp"

using namespace std;

int main() {
    
    
    
    cout << "Queue implemented with a Linked List" << endl;
    Queue<string> myQueue;
    
    myQueue.add("Orange Chicken");
    myQueue.add("ice cream");
    myQueue.add("CheeseCake");
    myQueue.add("Chicken");
    myQueue.add("Pizza");
    myQueue.add("Sushi");
    myQueue.add("Candy");
    myQueue.add("Bacon");
    myQueue.add("Steak");
    myQueue.add("Sandwitch");
    myQueue.add("WATER");
    
    cout<< myQueue << endl;
    for(int i = 0; i < 4;i++){
        myQueue.remove();
    }
    
    cout<< myQueue << endl;
    
    Queue<int> myIntQueue;
    myIntQueue.add(1);
   
    for(int i =0; i < 10;i++){
        myIntQueue.add(i);
        
   }
cout << myIntQueue<<endl;
    cout << "why";
    
    return 0;
   // cout <<"?";
}


#include<iostream>
using namespace std;
int main()
{
    // declare an integer variable called myInt and assign the values 15 to it.
    int myInt = 15;
    // Declare a pointer variable called myPointer using the dereference operator(*) and 
    //assign it to the memory location of myInt using the address-of operator(&)
    int*myPointer = &myInt;
    // Print the memory location of myIntand the value of myPointer.
    
    cout<<"Address of myInt: "<<&myInt<<endl;
    cout<<"Values of myPointer: "<<myPointer<<endl<<endl;
    // Print the values of myInt and the value pointed to by myPointer.
    cout<<"Value of myInt: "<<myInt<<endl;
    cout<<"Value pointed by myPointer: "<<*myPointer<<endl<<endl;
    
    //change the values of myInt to 10;
    myInt =10;
    // print the memory location of myInt and the values of myPointer.
    cout<<"Address of myInt: " <<&myInt<<endl;
    cout<<"Value of myPointer: " <<myPointer<<endl<<endl;
    //print the value of myInt and the value pointed to by myPointer.
    cout<<"Value of mynt: "<<myInt<<endl;
    cout<<"Value pointed by myPointer: "<<*myPointer<<endl<<endl;
    return 0;
    
    // i used lecture slide for basic concept for this assignment
    //SoloLearn C++ tutorial  and
    //http://www.cplusplus.com/doc/tutorial/pointers/ (Links to an external site.) 

    // this two tutorials are help me on my assingment.
}


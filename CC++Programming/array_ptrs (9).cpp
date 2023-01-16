
#include<iostream>
using namespace std;
int main()
{
    // Define an array of integer Called my_ints with the size of 4.
    int my_ints[4];
    
    // populates my_ints with input data provided by the user
    cout<<"Please enter 4 integers:\n" ;
    // use for loop for input data by user from keyboard.
    for(int i=0; i<4; i++)
    cin>>my_ints[i];
    // Defines an array of pointers called my_ptrs of the same size as my_ints and
    //initializes the pointers in my_ptrs
    //to point to corresponding elements of the array
     // my_ints (refer to the “initial state” 
    int*my_ptrs[4];
    
    for(int i=0; i<4; i++)
    my_ptrs[i] = &my_ints[i];
    cout<<"At inital State: \n";
    for(int i= 0; i<4; i++)
    cout<<*my_ptrs[i]<<" ";
    cout<<endl;
    // sorting the arrays of pointer
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if(*my_ptrs[i]>*my_ptrs[j])
            {
                int*temp_value=my_ptrs[i];
                my_ptrs[i] = my_ptrs[j];
                my_ptrs[j] = temp_value;
                        
            }
        }
    }
    // traverse the array my_ptrs and print the values
    cout<<"State after sorting my_ptrs:\n";
    for(int i=0; i<4; i++)
    cout<<*my_ptrs[i]<<" ";
    cout<<endl;
    return 0;
    
    /* i used lecture slide for basic concept for this assignment
       SoloLearn C++ tutorial  and
       http://www.cplusplus.com/doc/tutorial/pointers/ (Links to an external site.) 

       this two tutorials are help me on my assingment. */

}




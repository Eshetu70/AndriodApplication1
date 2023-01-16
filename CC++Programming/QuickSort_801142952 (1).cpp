//
//  QuickSort_Skeleton.cpp
//
//  Created by Bahamon, Julio on 6/25/19.
//  UNC Charlotte
//  Copyright © 2019 Bahamon, Julio. All rights reserved.
//
// Eshetu Wekjira
// ID# 801142952

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

//  Declaring a new struct to store patient data
struct patient {
    int age;
    char name[20];
    float balance;
};

   void display(struct patient []);
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY AGE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE AGE OF THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S AGE
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE

  int compareAge (const void * a, const void * b)
{

patient *A = (patient *)a;
patient *B = (patient *)b;

if (A->age < B->age)
return -1;
else if (A->age > B->age)
return 1;
else
return 0;

}


//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY BALANCE DUE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE BALANCE FOR THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S BALANCE
//       0 IF THE BALANCES ARE EQUAL
//       1 OTHERWISE
   int compareBalance (const void * a, const void * b)
{

patient *A = (patient *)a;
patient *B = (patient *)b;

if (A->balance < B->balance)
return -1;
else if (A->balance > B->balance)
return 1;
else
return 0;
}


//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY NAME

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE NAME OF THE FIRST PATIENT GOES BEFORE
//         THE SECOND PATIENT'S NAME
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE
//
//  HINT: USE THE strncmp FUNCTION
//  (SEE http://www.cplusplus.com/reference/cstring/strncmp/)

int compareName (const void * a, const void * b)
{

patient *A = (patient *)a;
patient *B = (patient *)b;

return strcmp(A->name,B->name);
}

//  The main program
int main()
{
    int total_patients = 6;
    
    //  Storing some test data
    struct patient patient_list[6] = {
        {25, "Juan Valdez   ", 1250},
        {15, "James Morris  ", 2100},
        {32, "Tyra Banks    ", 750},
        {62, "Maria O'Donell", 375},
        {53, "Pablo Picasso ", 615},
        {24, "Eshetu Wekjira", 3100}
    };
    
    
    cout << "Patient List: " << endl;
    
    
    //  IMPLEMENT THE CODE TO DISPLAY THE CONTENTS
    //  OF THE ARRAY BEFORE SORTING
    display(patient_list);
    cout << endl;
    
     
     cout << "Sorting..." << endl;
    
    
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT AGE
   
    cout << "Patient List - Sorted by Age: " << endl;
    qsort (patient_list, 6, sizeof(patient), compareAge);
    
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY AGE
    display(patient_list);
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT BALANCE
    
    cout << "Patient List - Sorted by Balance Due: " << endl;
    qsort (patient_list, 6, sizeof(patient), compareBalance);
    
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY BALANCE
    display(patient_list);
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT NAME
    
    cout << "Patient List - Sorted by Name: " << endl;
     qsort (patient_list, 6, sizeof(patient), compareName);
     
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY NAME
    display(patient_list);
    cout << endl;
    
    return 0;
}

void display(struct patient pt[])
{
   for(int i=0;i<6;i++)
   {
       cout<<"\tAge: "<<pt[i].age;
       cout.width(20);std::cout << std::left << "";
       cout<<"Name: "<<pt[i].name;
       int w=20-strlen(pt[i].name);
       cout.width(15+w);std::cout << std::left << "";
       cout<< "Balance Due $: "<<pt[i].balance<<endl;
   }
}




#include<iostream>
#include<algorithm>
using namespace std;

// void Traversal(int size, int *a){
//     cout<<"Traversal:"<< endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout<< a[i] << " ";
//     }
//     cout<< endl;
// }

int main()
{
    // int size, num, pos;
    // int a[50]; 
    // cout<< "Select the size of the array"<< endl;
    // cin>> size;
    // cout<< "Select the elements of the array you want"<< endl; 

    // for (int i = 0; i < size; i++)
    // {
    //     cin>>a[i];
    // }


// ********************************************* POINTERS ******************************************************

    // int a = 20;
    // int * ptr = &a;

    // cout<< a ;
    // cout << ptr ;

    // int * * ptr2 =  &ptr; 
    // cout<< ptr2;



// 2D Array Implementation:
// 1. simple implementation
// 2. using pointers 
// 3. using array of pointers



// ******************************************** 2D Array Using array of pointers *******************************************

    // int ** A =  new int * [5]; 
    // for (int i = 0; i < 5; i++)
    // {
    //     A[i]= new int[5]; 
    // }


    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         A[i][j] = 2*i +3*j; 
    //     }
        
    // }
    
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout<<A[i][j]<<" ";  
    //     }
    //     cout<<endl;
    // }


    // for (int i = 0; i < 5; i++)
    // {
    //     delete[] A[i];  
    
    // delete[] A; 



// ********************************** 2D Array Simple Implementation **************************************

    // int A[3][3];

    // cout<< "Enter the elements of Matrix"<<endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //        cin>>A[i][j];
    //     }
        
    // }
    
    // cout<< "The matrix entered is"<<endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //        cout<<" "<<A[i][j];
    //     }
    //     cout<< " "<< endl;
    // }


//  *************************  Matrix using : 1D Dynamic Array ***************************


    // int* A = new int[3*3];  

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0;  j< 3; j++)
    //     {
    //         *(A + i*3 +j)= i+j; // row major method
    //     } 
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<< *(A + i*3 +j)<< " ";
    //     }
    //     cout<<endl;
    // }
    
    // delete[] A;








    // cout<< "Before Sort:"<<endl;
    // Traversal(size,a);  
    // sort(a, a + size); 
    // cout<< "After Sort:"<<endl;
    // Traversal(size,a);

// *******************************************BINARY SEARCH******************************************************

// int low, high ,mid;   
// low= 0 ;       
// high = size-1;

// int element;
// cout<< " Enter the element you want to search : "<< endl; 
// cin>> element;

// int temp = 60;

// while (low<=high)
// {
//     mid = (low+high)/2;  
//     if (a[mid]==element) 
//     {
//         cout<< "Found at index : "<< mid;    
//         temp = 111;
//     }
    
//     if (a[mid]<element)   
//     {
//         low = mid+1;
//     }
//     else 
//     high = mid-1; 
// } 

// if (temp==60)
// {
//     cout<< "Element is not present in the array " << endl; 
// }








// cout<<"****Searching an element in an array: LINEAR SEARCH****"<<endl;
// cout<<"Enter the element you want to search in the given array"<<endl; 
// cin>>num;
// int temp =0;

// for(int i = 0; i < size-1; i++)
// {
//     if(a[i]==num)
//     {
//     cout<<"The value is at index:"<<i<<endl; 
//     temp=1; 
//         // cout<<i;
//     }
// }

// if (temp==0)
// {
//     cout<<"Not Present in loop"<<endl;
// }








// cout<<"******Deleting an element at any Position*******"<< endl; 

// cout<<"Enter the position of element to be deleted"<< endl;
// cin>> pos;


// for (int i = pos-1; i < size-1; i++) {
//     a[i]=a[i+1];
// }
// size--;

// Traversal(size,a);

    // cout<<"Enter position of element to be deleted"<< endl;
    // cin>> pos;

    // for(int i = pos-1; i <size-1; i++) 
    // {
    //     a[i]= a[i+1];
    // }

    // size--;
    // Traversal(size,a);
    
    // for (int i = 0; i < size-1 ; i++)  
    // {
    //    a[i] = a[i+1];
    // }
    // size--;    
    // Traversal(size,a);

    // //insert end me ... fr start me .... fr 1 bich me...
    // cout<<"******Inserting an element at any position*******"<< endl; 
    // cout<<"Enter the element :"<<endl;  // yahan hmne pucha element konsa dalna h
    // cin>>num; // yahan user input le lia
    // cout<<"Enter the position to store th element:"<<endl; //yahan pucha konsi jgah pe dalna h
    // cin>>pos;//yahan pe user input lia position number.

    // for (int i = size-1; i >=pos-1; i--) 
    // {
    //     a[i+1]=a[i];
    // }
    // a[pos-1]=num;  
    // size++; 
    // Traversal(size,a); 

    // cout<<"Enter the number to insert at the end"<<endl;
    // cin>>num;
    // a[size]=num;    
    // size++; 
    // Traversal(size,a); 


    // cout<<"Enter the number to insert at 1st position :"<<endl;
    // cin>>num;

    // for (int i = size-1; i >= 0; i--)  
    // {
    //     a[i+1]=a[i];
    // }
    // a[0]= num;
    // size++;


    return 0;  
}



//1. Array Declaration  (d)

//2. Initialisation - Compile Time(d)/ RunTime(Taking input from user)(d)

//3. How to access(d)

// 4. Array Traversal (Printing all elements in array)(d)

// 5. Insertion  : Insert at index 0 , insert at last , insert at any position  (d)

//6. Deletion : at start, at any position (d)

//7. Search : an element in array  1. Linear search 2. Binary search  (d)

//8. Pointer and Pointer Declaration (d)

//9. 2D Array(Matrix) Declaration + Initialisation (d)

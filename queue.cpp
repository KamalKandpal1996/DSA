//Discuss 
//Array Implementations(With Operations)
//Circular Queue
//Linked List Implementation(With Operations)
//Double Ended Queue
//Priority Queue 

// ******************** Array Implementation ************************

#include<iostream>
using namespace std;


// struct queue{
//     int size;
//     int f;   
//     int r;
//     int * arr;
// };

// //       0 1 2 3 4 5 6 7 8 .....
// //      | | | | | | | | | | .....
// //    f
// //    r


// int isEmpty(struct queue *q){  

//     if (q->f==q->r)
//     {
//         return 1;
//     }
//     return 0;
// }


// int isFull(struct queue* q){ 
//     if (q->r==q->size-1)
//     {
//         return 1;
//     }
//      return 0;

// }

// void enqueue(struct queue * q, int value){ 
//     if (isFull(q))
//     {
//         cout<<"This queue is full! Cannot Enqueue!!"<< endl;
//     }
    
//     else {
//         q->r++;
//         q->arr[q->r]= value; 
//         cout<< "Enqueued Element: "<< value<<endl;
//     }

// }

// int dequeue(struct queue* q){
//     int a = -1;
//     if (isEmpty(q))
//     {
//         cout<<"This queue is empty! Cannot Dequeue!!"<< endl;
//     }
//     else{
//         q->f++; 
//         a = q->arr[q->f];
//     }
//     return a;

// }


// int main()
// {
//     struct queue* q = new queue;
//     q->size = 4;
//     q->f = q->r = -1;
//     q->arr = new int[q->size]; 
    
//     enqueue(q,12);
//     int a= dequeue(q);
//     cout<< "Dequeued Element: "<< a<<endl;
//     return 0;
// }


// ******************************* Circular Queue ************************************

// Linear increment : i=i+1   
// Circular increment : i = (i+1)%size    

// struct queue{
//     int size;
//     int f;
//     int r;
//     int * arr;
// };

// int isEmpty(struct queue*q){
//     if(q->r==q->f){
//         return 1;
//     }
//     return 0;
// }

// int isFull(struct queue*q){
//     if( (q->r+1) % q->size==q->f ){  
//         return 1;
//     }
//     return 0;
// }

// void enqueue(struct queue*q, int value){
//     if (isFull(q))
//     {
//         cout<< "The Queue is full"<< endl;
//     }
    
//     else{
//         q->r = (q->r+1)%q->size;
//         q->arr[q->r]= value;
//         cout<< "Enqueued Element: "<< value<<endl;
//     }
// }


// int dequeue(struct queue* q){
//     int a = -1; 
//     if (isEmpty(q))
//     {
//         cout<<"The Queue is Empty"<<endl;
//     }

//     else{
//         q->f=(q->f+1)%q->size;
//         a = q->arr[q->f];
//     }
//     return a;
// }

// //             |0|  
// //         |7|     |1| 
// //      |6|           |2| 
// //         |5|     |3|
// //             |4|

// int main()
// {
//     struct queue * q = new queue;
//     q->size= 8;
//     q->f= q->r = 0; // **
//     q->arr= new int[q->size];

//     enqueue(q,12);
//     int a= dequeue(q);
//     cout<< "Dequeued Element: "<< a<<endl;


//     return 0;
// }


// ********************************* Queue : Linked List Implementation **************************************

// struct node{
//     int data;
//     struct node* next;
// };

// struct node* f = NULL;  
// struct node* r= NULL;

// void enqueue(int val){
//     struct node * n = new node;

//     if (n==NULL){ 
//         cout<<"Queue is full"<< endl;
//     }

//     else{
//         n->data = val;
//         n->next = NULL;
        
//         if(f==NULL){
//             f=r=n; 
//         } 
//         else{
//             r->next = n; 
//             r = n;
//         }
//     }
//     cout<<"Element "<< val <<" Inserted Successfully!! "<< endl;
// }



// int dequeue(){

//     int val; 
//     struct node * ptr = f;

//     if(f==NULL){
//         cout<<"Queue is Empty"<< endl;
//     }

//     else{
//     f = f->next;
//     val = ptr->data;
//     free(ptr);
//     }

//     return val;

// }


// int main()
// {
//     enqueue(8);
//     enqueue(10);
//     int a = dequeue();

//     return 0;
// }
 
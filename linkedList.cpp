#include<iostream>
using namespace std;

// Create a linked list (d)

// Traversal (d)

// Insertion of a node : 
//  -insert at beginning (d) 
//  -insert at any index (d)
//  -insert at last (d)


// Deletion in a linked list : 
// - 1st node (d)
// - **in between node(at any index)  (d)   
// - **Last node (d)
// - delete by value (1st node by that value) (d)


//Circular linked list : creation (d)
//Traversal (d)
//Insertion : all cases (d)
//Deletion : all cases (d)

//Doubly linked list   


//       ___
//       \_/  
//      (*_*)    
//  #--(.) (.)--#
//       ) (
//     _// \\_
// ******************************************** Create a linked list *******************************************************

// struct node{
//     int data;
//     struct node * next;
// };

// ************************************ Traversal **************************************************
// void linkedListTraversal(struct node * ptr){
//     while(ptr!=NULL){
//         cout<< ptr->data<< " ";
//         ptr = ptr->next;

//     }
// }

// ***************************** INSERTION : @Beginning ********************************

// struct node* insertAtFirst(struct node* head, int data){
//     struct node * ptr = new struct node;
//     ptr->next = head; 
//     ptr->data = data;
//     return ptr; 
// }

// **************************** INSERTION : @anyIndex ******************************
 
// struct node* atAnyIndex(struct node* head, int data, int index){
//     struct node* p = head;
//     struct node* ptr = new struct node; // ye fr naya node bnega jisko ghusana humne kisi bhi index me ??? 
//     int i = 0;
//     while(i!=index-1)
//     {
//         p = p->next;
//         i++;
//     }

//     ptr->data= data;
//     ptr->next = p->next;
//     p->next = ptr;

//     return head;
      
// }


// **************************** INSERTION : @Last ******************************


// struct node * insertAtLast(struct node * head, int data){
//     struct node * ptr = new struct node;
//     struct node * p = head;
//     // int i = 0;
//     while(p->next!=NULL)
//     {
//         p = p->next;
//     }

//     ptr->data = data;
//     p->next = ptr;
//     ptr->next= NULL;

//     return head;
// }



// **************************** DELETION : 1st node *************************


// struct node * deleteAtFirst(struct node * head){
//         struct node * p = head; 
//         head = head-> next ;
//         free (p);
//         return head; 
//     }

// **************************** DELETION : @anyIndex *************************


// struct node * deleteAtIndex(struct node * head, int index){

//     struct node * p = head;
//     int i = 0;
//     while (i!=index-1)
//     {
//         p = p->next;
//         i++;
//     }

//     struct node * q = p->next;
//     p->next = q->next;
//     free(q);
//     return head;
    

// }

// 5 6 7 8 9 10 11 12 13 14 15
//                 p  q
// 0 1 2 3 4 05 06 07 08 09  10


// **************************** DELETION : @atLast *************************

// struct node * deleteAtLast(struct node * head){

// struct node * p = head; 
// struct node* q= head->next;
// while(q->next!=NULL)
// {
//     p = p->next;
//     q = q->next;  
// }

//     p->next = NULL;
//     free(q);
//     return head;
    
// }


//    5 6 7 8 9 10 11 12 13 
//                     p  q


// **************************** DELETION : @byValue *************************

// struct node * deleteByValue(struct node * head, int value){
//     struct node * p = head;
//     struct node * q = head->next;

//     while ( q->data != value && q->next !=NULL )  
//     {
//         p=p->next;
//         q=q->next;
//     }
    
//     if (q->data==value)   
//     {
//         p->next= q->next;
//         free(q);
//     }
    
//     return head;
// }



// int main(){
//     struct node * head = new node;    
//     struct node * first = new node;
//     struct node * second = new node;

//     head->data = 5;
//     head->next = first;

//     first->data = 6;
//     first->next = second;

//     second->data = 7;
//     second->next = NULL;

//     linkedListTraversal(head);

//     // head = insertAtFirst(head,4); 

//     // head = atAnyIndex(head,9, 2); 

//     // head = insertAtLast(head,8);

//     // head = deleteAtFirst(head);

//     // head = deleteAtIndex(head,1);

//     // head = deleteAtLast(head);

//     // head = deleteByValue(head,6);
//     cout<<endl;
//     linkedListTraversal(head);

//     delete[] head;
//     delete[] first;
//     delete[] second; 
//     return 0;
// }




// ******************************************** Create a Circular linked list *******************************************************

// struct node{
//     int data ;
//     struct node * next ;
// };

// ************************************** TRAVERSAL : CIRCULAR LINKED LIST ***********************************************

// // void TraversalCLL(struct node * head){
// //     struct node * p = head;  // ye ho gya ..

// //     do
// //     {
// //         cout<< p->data << " ";
// //         p= p->next;
// //     } while (p!=head);
    
    
// // }
    //      p                                                             
    //   |10|.| -> |20|.| -> |30|.| -> |40|.| -> |10|.|
    //    head      first     2nd       3rd       head ...



// ************************************** Insertion : @first or @Last ***************************************************

// struct node * insertAtFirstCLL(struct node * head, int data){
//     struct node * ptr = new struct node;
//     ptr->data = data; 
//     struct node * p = head;
// // ab hme p ko 3rd tak travel krana h .quki uske bad insert hoga ptr.hn thik hai smjh aa gya bhai ... logic to thodaa ho gya clear


//     while (p->next!=head)
//     {
//         p=p->next;
//     }
    
//     ptr->next = p->next;
//     p->next = ptr;

//     head = ptr;   // Exclude this line for insertion at last 
//     return head;
// }

// //    p -> Travel Pointer Node    ptr -> New Node to Insert  

// //                                        p 
// //       |10|.| -> |20|.| -> |30|.| -> |40|.| -> |10|.|
// //        head      first     2nd       3rd       head 

// //         10    20     30     40  (50)|  10    20    30    40    50  
// //         head                          head 



// ************************************** Insertion : @anyIndex ***************************************************

// struct node * atAnyIndexCLL(struct node * head, int data, int index){
//     struct node * ptr = new struct node;
//     ptr->data = data;
//     struct node * p = head;
//     int i = 0;

//     while (i!=index-1)  
//     {
//         p = p->next;
//         i++;
//     }

//     ptr->next = p->next;
//     p->next = ptr;
    
//     return head;

// }



 //                              p
 //    i     0        1          2
 //       |10|.| -> |20|.| -> |30|.| -> |40|.| -> |10|.|
 //        head      first     2nd       3rd       head 
 


// ************************************** DELETION : First Node ***************************************************

// struct node*  deleteAtFirst(struct node* head){
//         struct node * p = head;
//         struct node * q = head->next;

//         while (q!=head)
//         {
//             p=p->next;
//             q=q->next;
//         }
        
//         p->next=q->next;
//         head= p->next;
//         free(q);
//         return head;
//     }


//                                       p          q
//       |10|.| -> |20|.| -> |30|.| -> |40|.| -> |10|.| -> |20|.| 
//        head       1st       2nd       3rd      head      1st


// ************************************** DELETION : Last Node ***************************************************

// struct node* deleteAtLast(struct node* head){
//     struct node* p = head;
//     struct node* q = head->next;

//     while(q->next!=head)
//     {
//         p = p->next;
//         q = q->next;
//     } 

//     p->next = q->next;
//     free(q);
//     return head;
// }





// ************************************** DELETION : By value ***************************************************

//  struct node * deleteByValue(struct node * head, int value){
//      struct node * p = head;
//      struct node * q = head->next;


//     do
//     {
//         p=p->next;
//         q= q->next;
//     }while (q->data!=value && q!= head->next);  
    
//     if (q->data ==value )
//     {
//     p->next = q->next;
//     free(q);
//     }

//     return head;

//  }


//                                        p         q                   
//       |10|.| -> |20|.| -> |30|.| -> |40|.| -> |10|.| -> |20|.| 
//        head       1st       2nd       3rd      head      1st







// int main()
// {
//     struct node* head = new struct node;
//     struct node* first = new struct node;
//     struct node* second = new struct node;
//     struct node* third = new struct node;

//     head->data= 10;
//     head->next = first;

//     first->data= 20;
//     first->next= second;

//     second->data= 30;
//     second->next= third;

    
//     third->data= 40;
//     third->next=head ; 

//     TraversalCLL(head);

//     // head= insertAtFirstCLL(head , 5);

//     // head = atAnyIndexCLL(head,35,3);

//     // head= deleteAtFirst(head);

//     // head = deleteAtLast(head);

//     // head = deleteByValue(head, 10);
//     cout << endl;

//     TraversalCLL(head);

//     return 0;
// }


// **************************************** Doubly Linked List : Creation *******************************************


struct node{
    int data;
    struct node * next;
    struct node * prev;

}; 

// **************************************** Doubly Linked List : TRAVERSAL *******************************************


// void traversalDLL(struct node * head){
//     struct node * ptr = head;

//    while(ptr!=NULL){
//        cout<<ptr->data <<" "; 

//        ptr = ptr->next;
//    }
  
// }


// void reverseTraversalDLL(struct node * tail){
//     struct node * ptr1 =  tail;

//     while(ptr1!=NULL){
//         cout<<ptr1->data << " ";

//         ptr1 = ptr1->prev;
//     }
// }

// 2 way traversal possible in doubly link list.
// simple linked lists are used to implement stacks.... whereas doubly linked lists can be used to implement stacks, heaps and binary trees.
// simple link list consumes lesser memory than doubly linked list.


// int main()
// {
//     struct node* head = new struct node;
//     struct node *first = new struct node;
//     struct node *second = new struct node;
//     struct node *tail = new struct node;

//     head->data=10;
//     head->prev=NULL;
//     head->next=first;

//     first->data=20;
//     first->prev=head;
//     first->next=second;

//     second->data=30;
//     second->prev=first;
//     second->next=tail;    

//     tail->data=40;
//     tail->prev=second;
//     tail->next=NULL;

//     traversalDLL(head);
//     cout<<endl;
//     reverseTraversalDLL(tail);

//     delete[] head;
//     delete[] first;
//     delete[] second;
//     delete[] tail;    

    
//     return 0;
// }











































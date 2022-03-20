// Discuss  : ADT , Standard operations (d)
// Implementation  : Using array(With stack operations) , Using Linked List(With stack Operations) (d)
// Stack applications : Parenthesis Matching(d) , Multiple parenthesis Matching(d) , Infix to Postfix Using stack(d) 
// Revise prefix , infix, postfix  (d)


// stack follows LIFO .
// what is ADT? Abstract Data Type ?  (It uses other data structures for its implementation)
// 5 operations in stack?? -> push , pop, peek , isEmpty, isFull
// any real life application of stacks?
//   -Converting infix to postfix expressions. 
//   -Undo operation is also carried out through stacks. (good one) 
//   -Syntaxes in languages are parsed using stacks. 
//   -It is used in many virtual machines like JVM. 
//   -Forward – backward surfing in browser. 
//   -History of visited websites. 


//  ************************************ IMPLEMENTATION : USING ARRAY ******************************************
// #include<iostream>
// using namespace std;


// struct stack
// {
//     int size;
//     int top;
//     int * arr;  
// };

// ******************************* isFull & isEmpty ****************************************

// int isEmpty(struct stack * s){
//     if (s->top==-1) return 1;
//     else return 0;
// }

// int isFull(struct stack * s){
//         if(s->top==s->size-1) return 1;
//         else return 0;
//     }

// ***************************** push , pop , peek **********************************

// void push(struct stack * s, char val){
//     if(isFull(s)) cout<< "Stack is Full, Cannot push !!"<<endl;

//     else{
//         s->top++;
//         s->arr[s->top] = val;
//     }
//     cout<<"An Element is pushed into the stack."<<endl;
// }

// int pop(struct stack *s){
//     int val;
//     if (isEmpty(s))
//     {
//         cout<< "Stack is Empty , Cannot pop !! "<<endl;
//     }
    
//     else{
//         val = s->arr[s->top];
//         s->top--;
        
//     }
//     return val;
// }


// int peek(struct stack * s, int i){   
//     int arrInd = s->top-i+1;  
//         if (arrInd<0)  
//     {
//         cout<<"Not a valid position for the stack"<<endl;
//         return -1;
//     }
//     else{
//         return s->arr[arrInd];
//     }   
// }


// int main()
// {
//      struct stack *s = new struct stack;
//      s->size= 100;
//      s->top= -1;
//      s->arr = new int[s->size];   
    



//     if (isEmpty(s)) cout<< "The Stack is Empty! "<< endl;
//     else cout<< "The Stack is not empty! "<< endl;
 
//     push(s,10);

//     if (isEmpty(s)) cout<< "The Stack is Empty! "<< endl;
//     else cout<< "The Stack is not empty! "<< endl;

//     int a = pop(s);
//     cout<< "The element popped is "<< a<<endl;

//     if (isEmpty(s)) cout<< "The Stack is Empty! "<< endl;
//     else cout<< "The Stack is not empty! "<< endl;

//     push(s,10);
//     push(s,0);
//     push(s,30);
//     int b = peek(s, 1); 
//     cout<< b;


//     delete[] s->arr;
//     delete[] s;
//     return 0;
// }



// ************************************ Stack : Linked List Implementation *************************************

// ******************************** Creation & Operations **************************************

// struct node{
//     int data ;
//     struct node* next;
// };

// int isEmpty(struct node* top){
//     if (top==NULL) return 1;

//     else return 0;
// }

// int isFull(){ 
//     struct node * p = new node;
//     if(p==NULL)  return 1;
       
//     else return 0;
    
// }

// // push means inserting node at index 0 
// struct node * push(struct node* top,int data){
//     if (isFull()) cout<< "STACK OVERFLOW!!"<<endl;
    
//     struct node * n = new node;
//     n->data = data;
//     n->next = top;
//     top = n;
//     return top;
// }

// //pop means removing node at index 0 
// int pop (struct node * top){
//     int poppedVal;
//     if (isEmpty(top))
//     {
//         cout<<"Stack Underflows!!"<<endl;
//     }
//     else
//     {
//         struct node* n = top;
//         top=top->next; 
//         poppedVal = n->data;
//         free(n); 
//     }
//     return poppedVal;
// }

// int peek(struct node * top, int pos){
//     struct node * ptr = top;

//     for (int i = 0; (i<pos-1 && ptr!=NULL); i++)
//     {
//         ptr = ptr->next;
//     }

//     if(ptr!=NULL){
//         return ptr->data;
//     }
//     else {
//         return -1;
//     }
// }


// int main()
// {
//     struct node * top = new node;
//     top = NULL;

//     top = push(top,10);
//     int a = pop(top);
//     cout<<"Popped Element :"<< a <<endl;
//     top = push(top,10);
//     top = push(top,20);
//     top = push(top,30);
//     int x = peek(top , 2);
//     cout<<"Element at position 2 is : "<< x<< endl;
//     return 0;
// }

// **************************** Parenthesis Matching *******************************

// struct stack{
//     int size;
//     int top;
//     char* arr;
// };

// int isEmpty(struct stack * s){
//     if (s->top==-1) return 1;
//     else return 0;
// }

// int isFull(struct stack * s){
//         if(s->top==s->size-1) return 1;
//         else return 0;
//     }

// void push(struct stack * s, char val){
//     if(isFull(s)) cout<< "Stack is Full, Cannot push !!"<<endl;

//     else{
//         s->top++;
//         s->arr[s->top] = val;
//     }
//     // cout<<"An Element is pushed into the stack."<<endl;
// }

// char pop(struct stack *s){
//     char val;
//     if (isEmpty(s))
//     {
//         cout<< "Stack is Empty , Cannot pop !! "<<endl;
//     }
    
//     else{
//         val = s->arr[s->top];
//         s->top--;
        
//     }
//     return val;
// }


// int parenthesisMatch(char *exp){
    
//     struct stack *s= new stack;
//     s->size=100;
//     s->top=-1;
//     s->arr= new char[s->size];



//     for (int i = 0; exp[i]!='\0'; i++)
//     {
//        if (exp[i] == '(')
//        {
//            push(s, '('); 
//        }

//        else if (exp[i] == ')')
//        {
//            if (isEmpty(s))
//            {
//               return 0;
//            }
//            pop(s);    
//        } 
//     }
//     if (isEmpty(s))
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     }
          
// }

// int main()
// {
//     char exp[] = "2-3*((2*5)+3" ;  

//     if (parenthesisMatch(exp)) cout<< "Parenthesis match!!"<<endl;
//     else cout<< "Parenthesis Don't Match!!"<<endl;

//     return 0;
// }



// **************************** Multiple Parenthesis Matching *******************************// 


// int match(char a, char b){
//     if (a=='(' && b==')')
//         return 1;
    

//     if (a=='{' && b=='}')
//         return 1;
    

//     if (a=='[' && b==']')
//         return 1;

//     else return 0;
// }


// int multiParenthesisMatch(char* exp){
//     struct stack *s = new stack;
//     s->size =100;
//     s->top=-1;
//     s->arr = new char[s->size];

//     char popped_char;
//     for (int i = 0; exp[i] !='\0'; i++)
//     {
//         if(exp[i] =='(' || exp[i] == '{' || exp[i] == '['){
//             push(s,exp[i]);
//         }
    
//         else if(exp[i] ==')' || exp[i] == '}' || exp[i] == ']'){

//             if (isEmpty(s)) return 0;
           
//             popped_char = pop(s);
           
//             if (!match(popped_char, exp[i])) return 0;
           
//         }
//     }
    
//     if (isEmpty(s)) return 1;
//     else return 0;
// }


// int main()
// {
//     char exp[]= "2*[3-{5+7*(5*9)}]";  
//     if ( multiParenthesisMatch(exp))
//     {
//         cout<<"Parenthesis Match!!"<<endl;
//     }
    
//     else cout<<"Parenthesis Don't Match!!"<<endl;
//     return 0;
// }

// array , 2d array , pointers , Searching algorithm , Stack , Queue(<monday) 
// Trees , sorting algorithm , Heap+Priority Queue (step 2)  
// Graphs ,Greedy algorithms, Hashtables, Dynamic Programming 



// ********************************* INFIX TO POSTFIX USING STACK ************************************

// char stackTop(struct stack *s){   
//     return s->arr[s->top]; 
// }

// int precendence(char ch){
//     if (ch=='*' || ch=='/')
//         return 3;
//     else if (ch=='+' || ch=='-')
//         return 2;
//     else return 0;
// }


// int isOperator(char ch){
//     if (ch=='+' || ch=='-' || ch=='*' || ch=='/')
//     {
//         return 1 ;
//     }
//     return 0;
// }

// char * infixToPostfix(char* infix, char* postfix){
//     struct stack *s = new stack;
//     s->size=100;
//     s->top=-1;
//     s->arr = new char[s->size];  
    
//     int i=0; // Track infix traversal
//     int j= 0; // Track postfix traversal  
    
//     while (infix[i]!= '\0') 
//     {
//         if(!isOperator(infix[i])){   
//             postfix[j] = infix[i]; 
//             j++;
//             i++;
//         }

//         else{ 
//             if(precendence(infix[i])>precendence(stackTop(s))){ 
//                 push(s, infix[i]); 
//                 i++;
//             }
//             else{
//                 postfix[j] = pop(s); 
//                 j++;
//             }

//         }
        
//     }
//     while(!isEmpty(s)){ 
//         postfix[j] = pop(s);
//         j++;
//     }

       
//     postfix[j] = '\0';  // postfix -> |a|b|c|*|+|d|-|\0|| 
//     return postfix;
    
// }


// int main()
// {
//     char infix[]= "a+b*c-d";    //  a+ [bc*]-d   -> [abc*+]-d ->  abc*+d-
//     char *postfix = new char[20];
//     postfix = infixToPostfix(infix,postfix);
    
//     int i=0;
//     cout<<"Postfix Expression : ";
//     while (postfix[i]!='\0')   
//     {   
//         cout<< postfix[i] ;
//         i++;
//     }
    

//     return 0;
// }

// postfix ->   |a|b|c|*|+|d|-||  -> abc*+d- 


// Infix -> a+b*c-d   

//  elements         stack         postfix
//  a                  +           a
//  b                  +           ab
//  *                  +*          ab
//  c                  +*          abc
//  -                  -           abc*+
//  d                  -           abc*+d
//                                 abc*+d-


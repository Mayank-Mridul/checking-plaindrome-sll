#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*start = NULL;

int main(){

int n,x,chc,ch=1,loc,locd;
char con,u='y';

// THIS PROGRAM OFFERS EVERY BASIC FEATURE OF LINKED LIST
// YOU CAN SEE ALL THE FEATURES IN THE MENU

while(ch!=13){
printf("ENTER THE CHOICE \n\n ******** ENTER 1 TO ENTER THE NEW ELEMENT ******* \n");
printf("******** ENTER 2 TO DISPLAY THE ELEMENTS ******* \n");
printf("******** ENTER 3 TO CHECK SLL IS PALINDROME OR NOT ******* \n");
scanf("%d", &chc);
switch (chc){

case 1:
printf("ENTER THE ELEMENT\n");
scanf("%d", &x);
create(x);
break;

case 2:
display();
break;


case 3:
printf("CHECKING WEATHER THE SLL IN PALINDROME OR NOT\n\n");
isPalindrome();
break;

default: printf("WRONG INPUT\n");

}

printf("DO YOU WANT TO CONTINUE\n");
printf("IF YES THEN ENTER Y IF NO THEN ENTER N\n");
scanf(" %c", &con);
if(con!=u)
break;
}
}

// THIS FUNCTION CREATES A NODE

void create(int x){

struct node *ptr, *temp;
ptr = (struct node*)malloc(sizeof(struct node));
ptr->data = x;
ptr->next = NULL;
if(start == NULL){
start = ptr;
}
else{
temp = start;

    while(temp->next!=NULL){
    temp = temp->next;
    }
    
    temp->next = ptr;
}
}

// THIS FUNCTION PRINTS THE LINKED LIST

void display(){
struct node *temp;
temp = start;
printf("THE LINKED LIS AS FOLLOWS:\n");

if(start == NULL){
printf("LIST IS EMPTY\n");
}
else{
while(temp!=NULL){
printf("%d\n", temp->data);
temp = temp->next;
}
}
}


void isPalindrome(){

    // Taking the help of other data structure

    struct node *temp=0;

    int count = 0, mid =0, c=0;

    temp = start;

    while(temp!=NULL){
        temp = temp->next;
        count++;
    }

    temp = NULL;

    if(count%2!=0){
        mid = count/2 + 1;
    }

    int arr[mid];

    int loop = mid;

    temp = start;

    while(loop--){
        temp = temp->next;
    }

    for(int i=0; i<mid ; i++){
        temp = temp->next;
        arr[i] = temp->data;
    }

    temp = NULL;

    temp = start;

    for(int j=0;j<mid;j++){
        if(temp->data == arr[j]){
                c++;
        }
        temp = temp->next;
    }

    if(c == (mid-1)){
        printf("YES!!!!!!!!!!!");
    }
    else{
        printf("NO!!!!!!");
    }
}


//Creating  new way do to this

    /* 
    int cow=0,count=0;

    struct node *temp, *temp1;


    temp = start;
    temp1 = start;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }

        temp = start;

    for(int i=0; i<(int)(count/2); i++){
        
        int pos=0;

        if(temp!=NULL && pos!=i){
            temp = temp->next;
        }

        int set = count -i;
        while(set--){
            temp1 = temp1->next;
        }

        if(temp->data == temp1->data){
            cow++;
        }
        else{
            printf("THIS IS NOT PLAINDROME\n\n");
            //return 0;
        }
    }

    if(cow == (int)(count/2)){
        printf("YES IT IS\n\n");
    }
    else
    {
        printf("DONT KNOW\n\n");

    }
    

    return 0;

    */
    
    /*
    struct node *temp, *hea, *prev, *sp, *head;
    int count = 0,mid,cow=0;
    
    head = start;
    temp = start;
    hea = start;
    
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    
    printf("%d is number of nodes\n", count);
    
    
    
    mid = count/2;
    
    
    printf("%d is half number of nodes\n", mid);
    
  
    if(mid==0){
        return 0;
    }

    
    
    //for(int i=0;i<=mid;i++){
    
    temp = hea;
    
    while(temp!=NULL){

         printf("%d is the data of the last element\n", temp->data);

        prev = temp;
        temp = temp->next;
    }

    printf("%d is the data of the last element\n", temp->data);

    printf("%d is the data of the first element\n", hea->data);
    
    if(temp->data == hea->data){
        
        head = head->next; 
        cow++;

    printf("%d COUNT OF PLAINDROME\n", cow);

       // sp = hea;
       // free(sp);
       // sp = NULL;
        hea = hea->next;
        
        prev->next = NULL;
       // free(temp);
       // temp = NULL;
    }
    else{

        printf("\nNOOOOOO!!!");
        return 0;
    }

    
    
    if(cow == (count/2)){

        printf("\nYES!!!!!!");
        return 1;
    }
    
    
     return -1;

     */

     

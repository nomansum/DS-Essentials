#include <iostream>
using namespace std;

struct node{
    int val;
    node *next;
    node(){
        val = 0;
        next = NULL;
    }
    node(int k){
        val = k;
        next = NULL;
    }
};

struct SinglyLinkedList{
    node *head, *tail;
    /**
        Initializes head and tail.
    */
    SinglyLinkedList();
    /**
        A value is provided which should be added at the
        beginning of the list.
        @param val the provided value
    */
    void insertIntoHead(int);
    /**
        A value is provided which should be added just
        after the head of the list.
        @param val the provided value
    */
    void insertIntoNextToHead(int);
    /**
        A value is provided which should be added at the
        end of the list.
        @param val the provided value
    */
    void insertIntoTail(int);
    /**
        A value is provided which should be added just
        before the tail of the list.
        @param val the provided value
    */
    void insertBeforeTail(int);
    /**
        A value and a position are provided. The value
        should be added at the given position. If the
        position does not exist, then the value should
        be added at the end of the list. The position
        is 1-based index.
        @param val the provided value
        @param pos the position
    */
    void insertAtPos(int val, int pos);
    /**
        Two values are provided named val and refVal.
        The value should be added just after the refVal.
        If the refVal does not exist in the list, then
        the value should be added at the end of the
        list. If refVal exists several times, then val
        should be added just after the first occurrence
        of refVal.
        @param val the value should be added
        @param refVal the reference value
    */
    void insertAfterVal(int val, int refVal);
    /**
        Two values are provided named val and refVal.
        The value should be added just before the refVal.
        If the refVal does not exist in the list, then
        the value should be added at the beginning of the
        list. If refVal exists several times, then val
        should be added just before the first occurrence
        of refVal.
        @param val the value should be added
        @param refVal the reference value
    */
    void insertBeforeVal(int val, int refVal);

    /**
        A value is provided. It should be searched in
        the list. If found, then the position of the
        first occurrence should be returned (1-based
        indexing). If the value does not exist in the
        list, then -1 should be returned.
        @param val the value should be searched
        @return the position of the given value in the
                list if the value exits, otherwise -1
    */
    int findPos(int val);
    /**
        A position is provided (1-based indexing). The
        value at the given position should be returned.
        If the position does not exist in the
        list, then -1 should be returned.
        @param pos the provided position
        @return the value at the given position in the
                list if the position exits, otherwise -1
    */
    int findValAtPos(int pos);

    /**
        It returns the largest value of the linked list
        traversing the whole list. If an empty list is
        found, then it returns -1.
        @return the largest value of the list if the list
                has at least one value, otherwise -1
    */
    int findLargestVal();
    /**
        It returns the smallest value of the linked list
        traversing the whole list. If an empty list is
        found, then it returns -1.
        @return the smallest value of the list if the
                list has at least one value, otherwise -1
    */
    int findSmallestVal();

    /**
        It removes the first element of the list and
        returns the value of the deleted element. If
        the list is empty, then it prints "Underflow"
        and returns -1.
        @return the deleted value. If the list is empty,
                then it returns -1.
    */
    int deleteFromHead();
    /**
        It removes the second element of the list and
        returns the value of the deleted element. If
        the list is empty or has only one element,
        then it returns -1. It prints "Underflow" and
        "Too short list" for empty list and 1-element
        list respectively.
        @return the deleted value. If the list is empty
                or has at least one value,then it
                returns -1.
    */
    int deleteNextToHead();
    /**
        It removes the last element of the list and
        returns the value of the deleted element. If
        the list is empty, then it prints "Underflow"
        and returns -1.
        @return the deleted value. If the list is empty,
                then it returns -1.
    */
    int deleteFromTail();
    /**
        It removes the second last element of the list
        and returns the value of the deleted element.
        If the list is empty or has only one element,
        then it returns -1. It prints "Underflow" and
        "Too short list" for empty list and 1-element
        list respectively.
        @return the deleted value. If the list is empty
                or has at least one value,then it
                returns -1.
    */
    int deleteBeforeTail();
    /**
        A value is provided. It removes all elements
        from the list which contain that value.
        @param val the value to be removed.
    */
    void deleteAllOcc(int val);
    /**
        A value is provided. It removes the element
        which contains that value. If several elements
        match that value, it removes the first matched
        element only.
        @param val the value to be removed.
    */
    void deleteFirstOcc(int val);
    /**
        A value is provided. It removes the element
        which contains that value. If several elements
        match that value, it removes the last matched
        element only.
        @param val the value to be removed.
    */
    void deleteLastOcc(int val);
    /**
        A position is provided. It removes the element
        at that given position. If the given position
        does not exist, then it does nothing except
        returning -1. Otherwise, it returns the value
        of the deleted element.
        Note: 1-based indexing.
        @param pos the position of the element to be
               removed.
        @return the value of the deleted element if
                the position exists, otherwise -1.
    */
    int deleteFromPos(int pos);
    /**
        It removes all the elements from the list.
    */
    void deleteAll();
    /**
        It removes all the duplicate values from the
        list. After the execution of this function,
        all the values in the list would be unique.
        That means, it keeps only the first occurrence
        of a distinct value.
    */
    void deleteDuplicates();
    /**
        It removes all the elements from the list
        which are in even positions. Note that, head
        of the list is in position 1 (odd position).
    */
    void deleteFromEvenPos();
    /**
        It removes all the elements from the list
        which are in odd positions. Note that, head
        of the list is in position 1 (odd position).
    */
    void deleteFromOddPos();
    /**
        It removes the element from the list which
        contains the largest value. If several elements
        found with largest value, it removes all those
        elements. It returns the deleted value, if at
        least one element is deleted, otherwise it
        returns -1.
        @return the largest value of the list if the
                list has at least one value, otherwise -1
    */
    int deleteLargestValAllOcc();
    /**
        It removes the element from the list which
        contains the smallest value. If several elements
        found with smallest value, it removes all those
        elements. It returns the deleted value, if at
        least one element is deleted, otherwise it
        returns -1.
        @return the smallest value of the list if the
                list has at least one value, otherwise -1
    */
    int deleteSmallestValAllOcc();

    /**
        It prints all the values of the list in a
        convenient way.
    */
    void printList();
    /**
        It prints the value in the first element of the
        list. It prints "List Empty!" if the list is
        empty.
    */
    void printHead();
    /**
        It prints the value in the last element of the
        list. It prints "List Empty!" if the list is
        empty.
    */
    void printTail();
    /**
        It returns the number of elements in the list.
    */
    int listSize();

    /**
        It rearranges all the elements in the list in
        reverse order.
    */
    void reverseList();

};
int arr[100000007];
void SinglyLinkedList::reverseList(){
   node *cur,*temp,*temp1;
if(head==NULL || head->next==NULL)return;
cur=head->next;
head->next=NULL;
temp=head;
while(cur->next!=NULL){
        temp1=cur;
        cur=cur->next;
     temp1->next=temp;
     temp=temp1;
}
cur->next=temp1;
temp=head;
head=cur;
tail=temp;

//cout<<head->val<<endl;
//cout<<tail->val<<endl;
return;
}

 int SinglyLinkedList::deleteSmallestValAllOcc(){
           node *temp=head;
    node *temp1=head->next;
    if(head==NULL)return -1;
    if(head->next==NULL)return head->val;
    int a=findSmallestVal();
    deleteAllOcc(a);
return a;
 }
int SinglyLinkedList::deleteLargestValAllOcc(){
    node *temp=head;
    node *temp1=head->next;
    if(head==NULL)return -1;
    if(head->next==NULL)return head->val;
    int a=findLargestVal();
    deleteAllOcc(a);
return a;

}

void SinglyLinkedList::deleteFromOddPos(){
int i=1;
int a=0;
while(a!=-1){
   a=deleteFromPos(i);
   i++;
}
return;

}

void SinglyLinkedList::deleteFromEvenPos(){
   int i=2;
   int a=0;
   while(a!=-1){
    a=deleteFromPos(i);
    i++;
   }
return;

}

void SinglyLinkedList::deleteDuplicates(){
node *cur=head,*temp;
while(cur->next!=NULL){
    arr[cur->val]++;
    cur=cur->next;
}
arr[cur->val]++;
if(head->next==NULL)return;

cur=head;temp=head->next;
while(temp->next!=tail){
    if(arr[temp->val]>1){
        while(temp->next!=tail && arr[temp->val]>1){
                node *temp1=temp;
                temp=temp->next;
                arr[temp1->val]--;
                delete temp1;

        }
           cur->next=temp;
               cur=cur->next;
           temp=temp->next;continue;

    }
      cur=cur->next;
      temp=temp->next;

}

return;

}

void SinglyLinkedList::deleteAll(){
         if(head==NULL)return;

         node *temp=head,*temp1=head->next;
         if(head->next==NULL){delete temp;head=tail=NULL;return;}
            delete temp;
         while(temp1->next!=NULL){
            temp=temp1;
            temp1=temp1->next;
            delete temp;
         }
         temp=temp1;
         delete temp;
         head=tail=NULL;

}

int SinglyLinkedList::deleteFromPos(int pos){
                
                node *temp=head,*temp1=head->next;int i=1;
int a=-1;
                if(head==NULL)return -1;

            if(pos==1){
                int a=head->val;
                deleteFromHead();
                return a;
            }
                 if(head->next==NULL){return -1;}
                   i++;
            while(i!=pos && temp1->next!=tail){
                i++;
                temp1=temp1->next;temp=temp->next;
            }

            if(temp1->next==tail && i!=pos){
                 a=-1;
                if(i+1==pos){a=tail->val;deleteFromTail();}
                return a;
            }

            a=temp1->val;
    temp->next=temp1->next;
    delete temp1;
    return a;
                  
}

void SinglyLinkedList::deleteLastOcc(int val){
   node *temp=head,*temp1=head->next,*prev=NULL,*cur=NULL;
   if(head==NULL)return;
   if(tail->val==val){deleteFromTail();return;}
   while(temp1->next!=tail){
          if(temp1->val==val){
            prev=temp;cur=temp1;
             
          } 
          temp1=temp1->next;
          temp=temp->next;            
   }
    if(temp1->val==val){
            prev=temp;cur=temp1;
             
          } 
if(prev==NULL){
       if(head->val==val)deleteFromHead();
       return;
}
prev->next=cur->next;
delete cur;

}

void SinglyLinkedList::printHead(){
   if(head==NULL)cout<<"List Empty!\n";
   else cout<<head->val<<endl;

}

void SinglyLinkedList::printTail(){
   if(tail==NULL)cout<<"List Empty!\n";
   else cout<<tail->val<<endl;

}
int SinglyLinkedList::listSize(){
   int cnt=1;
   if(head==NULL)return 0;
   node *temp=head;

while(temp->next!=NULL){cnt++;temp=temp->next;}
return cnt;
}
void SinglyLinkedList::deleteFirstOcc(int val){
   node *temp=head;
   node *temp1=head->next;
   if(head==NULL)return;
   if(head->val==val){deleteFromHead();return;}
   bool fl=false;
   while(temp1->next!=tail){

    if(temp1->val==val){
        temp->next=temp1->next;
         fl=true;
        temp1=temp->next;
        break;
    }
temp=temp->next;temp1=temp1->next;
}
if(temp1->next==tail && !fl && tail->val==val){
    deleteFromTail();
}


}
void SinglyLinkedList::deleteAllOcc(int val){

node *temp=head,*temp1=head->next;
while(temp1->next!=tail){

    if(temp1->val==val){
        node *cur=temp1;
        temp->next=temp1->next;

        temp1=temp->next;
        delete cur;
        continue;
    }
temp=temp->next;temp1=temp1->next;

}
 if(temp1->val==val){
        node *cur=temp1;
        temp->next=temp1->next;

        temp1=temp->next;
        delete cur;
        //continue;
    }


if(head->val==val){deleteFromHead();}
if(tail->val==val){
    deleteFromTail();


}
return;
}
int SinglyLinkedList::deleteBeforeTail(){
int a;
node *temp=head->next;
node *temp1=head;
if(head==NULL){
    cout<<"Underflow\n";
    return -1;
}
if(head->next==NULL){
    cout<<"Too short list\n";
    return -1;
}
while(temp->next!=tail){
    temp=temp->next;temp1=temp1->next;
}
temp1->next=tail;
a=temp->val;
delete temp;
return a;
}
int SinglyLinkedList::deleteFromTail(){
    int a;
    node *temp=head;
    if(head==NULL){cout<<"Underflow\n";return -1;
    }

    if(head->next==NULL){
      a=head->val;
      head=NULL;tail=NULL;
      return a;}

      while(temp->next!=tail)temp=temp->next;
      temp->next=NULL;
      a=tail->val;
       tail=temp;
       return a;
}

int SinglyLinkedList::deleteNextToHead(){
        if(head==NULL){
            cout<<"Underflow\n";
            return -1;
        }
        if(head->next==NULL){
            cout<<"Too short list\n";
            return -1;
        }
        int a;
        node *cur=head->next;

       head->next=cur->next;
       a=cur->val;
      delete cur;
     //  cout<<tail->val<<endl;
       return a;
}

int SinglyLinkedList::findSmallestVal(){
    int a;
    if(head==NULL)return -1;
    a=head->val;
    node *temp=head;
   // cout<<tail->val<<endl;
    while(temp->next!=tail){
           if(temp->val<a)a=temp->val;
        temp=temp->next;
    }
    if(tail->val<a)a=tail->val;

    return a;

}
int SinglyLinkedList::findLargestVal(){
    int a;
    if(head==NULL)return -1;
    a=head->val;
    node *temp=head;
    while(temp->next!=tail){
        a=max(a,temp->val);
        temp=temp->next;
    }
    a=max(tail->val,a);

    return a;


}
int SinglyLinkedList::findValAtPos(int pos){
    if(head==NULL){return -1;}
    int i=1;
    node *temp=head;
    while(i!=pos && temp->next!=NULL){++i;temp=temp->next;}

    if(i!=pos){return -1;}
    i=temp->val;

    return i;

}

int SinglyLinkedList::findPos(int val){


if(head==NULL){cout<<"List is empty\n";return -1;}
node *temp=head;
int i=1;
while(temp->val!=val && temp->next!=NULL){i++;temp=temp->next;}
if(temp->next==NULL){
    if(temp->val==val)return i;
    else return -1;
}
return i;



}


void SinglyLinkedList::insertBeforeVal(int val, int refVal){

node *cur=new node(val);
if(head==NULL){head=tail=cur;return;}
node *temp,*temp1;
temp=head;temp1=head->next;
while(temp1->val != refVal && temp1->next!=NULL){
    temp1=temp1->next;
    temp=temp->next;
}
if(temp1->next==NULL && temp1->val!=refVal){
    cur->next=head;
    head=cur;
    return;
}

temp->next=cur;
cur->next=temp1;


}
void SinglyLinkedList::insertAfterVal(int val, int refVal){
     node *cur=new node(val);
     if(head==NULL){head=tail=cur;return;}
       node *temp=head;
       while(temp->val!=refVal && temp->next!=NULL){
        temp=temp->next;
       }
       if(temp->next==NULL){
        temp->next=cur;
        tail=cur;

        return;
       }
cur->next=temp->next;
temp->next=cur;


}
void SinglyLinkedList::insertAtPos(int val, int pos){
    node *cur=new node(val);
    if(head==NULL){
        head=tail=cur;
        return;
    }
    int i=2;
    node *temp=head;
    while(i!=pos && temp->next!=NULL){
        i++;temp=temp->next;
    }
    if(temp->next==NULL){
        tail->next=cur;
        tail=cur;
        return;
    }
  cur->next=temp->next;
  temp->next=cur;

}
void SinglyLinkedList::insertIntoNextToHead(int val){
       node *cur=new node(val);
       if(head==NULL){cout<<"Head is empty\n";return;}
       if(head->next==NULL){
            head->next=cur;
           tail=head->next;
           return ;

       }
       cur->next=head->next;
       head->next=cur;

}
void SinglyLinkedList::insertBeforeTail(int val){

    node *cur=new node(val);

    if(head==NULL){
        head=tail=cur;
        return ;
    }
    if(head->next==NULL){
        cout<<"List consists of only 1 number\n";
        return;
    }
    node *temp=head;
    while(temp->next!=tail)temp=temp->next;
    cur->next=tail;
    temp->next=cur;
return;

}

SinglyLinkedList::SinglyLinkedList(){
    head = NULL;
    tail = NULL;
}

void SinglyLinkedList::insertIntoTail(int x){
    node *cur = new node(x);
    if(tail==NULL){
        head = tail = cur;
        return;
    }
    tail->next = cur;
    tail = tail->next;
}

void SinglyLinkedList::insertIntoHead(int x){
    node *cur = new node(x);
    if(head==NULL){
        head = tail = cur;
        return;
    }
    if(head->next==NULL){
        cur->next=head;
        tail=head;
        head=cur;
        return ;
    }
    cur->next = head;
    head = cur;
}

int SinglyLinkedList::deleteFromHead(){
    if(head==NULL){
        cout << "Underflow" << endl;
        return -1;
    }
    node *temp = head;
    int ret = temp->val;
    if(head->next == NULL){
        head = tail = NULL;
    }
    else {
        head = head->next;
    }

    delete temp;
    return ret;
}

void SinglyLinkedList::printList(){
    cout << "List Start  --------------- " << endl;
    if(head == NULL){
        cout << endl;
    }

    node *temp = head;
    while(temp!=NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }

    cout << "List End    --------------- " << endl;
}

int main(){
    SinglyLinkedList sl;
    cout<<sl.findSmallestVal()<<endl;
   // cout<<sl.listSize()<<endl;
 sl.insertIntoHead(55);
 //cout<<sl.listSize()<<endl;
  sl.insertIntoNextToHead(59);
  sl.insertIntoNextToHead(597);
  sl.insertBeforeTail(1);
  sl.insertAtPos(88, 10);
  sl.insertAfterVal(54, 100);
  sl.insertBeforeVal(11, 1);
  sl.printList();
  cout<<sl.findPos(597)<<endl;
    cout<<sl.findValAtPos(7)<<endl;
    //cout<<sl.findSmallestVal()<<endl;
   cout<<sl.findLargestVal()<<endl;
   cout<<sl.deleteNextToHead()<<endl;
   cout<<sl.findSmallestVal()<<endl;
   sl.deleteFromTail();
   sl.printList();
   cout<<sl.deleteBeforeTail()<<endl;
   sl.insertIntoNextToHead(54566);
   sl.insertAfterVal(54566,54566);
   sl.insertBeforeTail(54566);
   sl.insertIntoTail(54566);
   sl.printList();
 //  sl.deleteFirstOcc(54566);
   //cout<<sl.tail->val<<endl;
   //sl.deleteAllOcc(54566);
  // sl.deleteLastOcc(54566);
   sl.insertIntoHead(54566);
   sl.printList();
  // sl.deleteLastOcc(54566);
   sl.deleteFromPos(1);
   sl.insertIntoHead(895);
   sl.insertAtPos(155,5);
   sl.insertIntoTail(155);
   sl.insertIntoNextToHead(555);
   sl.insertIntoNextToHead(555);
sl.insertAfterVal(55,55);
  // sl.deleteFromPos(4);
  //sl.deleteFromPos(3);
  // sl.deleteFromPos(1);
   //sl.deleteFromPos(1);
   //sl.deleteAll();
   sl.printList();
   sl.deleteDuplicates();
   sl.printList();
   sl.deleteFromEvenPos();
   sl.printList();
//   sl.deleteAllOcc(55);

   sl.reverseList();
   sl.deleteAllOcc(55);
   sl.printList();
   cout<<sl.listSize()<<endl;

    return 0;
}

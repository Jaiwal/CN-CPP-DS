#include<iostream>
using namespace std;
#include"Node.cpp"
void print(Node *head)
{
    Node *temp=head;
   while(temp!=NULL) //head->next!=NUll me last node pr jake ruk jare hai
   {
       cout<<temp->data<<" ";
       temp=temp->next;
   }

   temp=head;
    while(temp!=NULL) //head->next!=NUll me last node pr jake ruk jare hai
   {
       cout<<temp->data<<" ";
       temp=temp->next;
   }
}
int main()
{
    //statically


   Node n1(1);
 Node *head=&n1;

    Node n2(2);
     Node n3(3);
     Node n4(4);
     Node n5(5);





     n1.next=&n2;
     n2.next=&n3;
     n3.next=&n4;
     n4.next=&n5;


print(head);










  /*  n1.next=&n2;

    cout<<n1.data<<" "<<n2.data<<endl;

//dynamically
    Node *n3=new Node(10);
    Node *head=n3;
    Node *n4=new NOde(20);
    n3->next=n4;
*/
}

# include <iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
Node* head;
void Insert(int x, int n)
{
	Node* temp1 = new Node();
	temp1->data = x;
	temp1->next = NULL;
	if(n==1){
		temp1->next = head;
		head = temp1;
		return;
	}
	Node* temp2 = head;
	for(int i=0; i<n-2; i++){
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}
void Print(){
	Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<"\n";
}
void Delete(int n){
	Node* temp1 = head;
	if(n == 1){
		head = temp1->next;
		delete temp1;
		return;
	}
	int i;
	for(i=0; i<n-2; i++){
		temp1 = temp1->next;
	}
	Node* temp2 = temp1->next;
	temp1->next = temp2->next;
	delete temp2;
}
int main(){
	head = NULL;
	Insert(2,1); // list is 2
	Insert(3,2); // list: 2, 3
	Insert(4,1); // list: 4, 2, 3
	Insert(5,2); // list: 4, 5, 2, 3
	Print();
	Delete(3);
	Print();
    }


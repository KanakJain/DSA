#include <iostream>
#include <cstring>
using namespace std;
int front = -1;
int rear = -1;
bool IsEmpty(char A[]){
	if (front == -1 && rear == -1){
		return true;
	}
	else return false;
}
bool IsFull(char A[]){
	int n = strlen(A);
	if(n == rear + 1){
		return true;
	}
	else return false;
}
void Enqueue(char B[], char x){
	if (IsEmpty(B)){
		front = rear = 0;
	}
	else{
		rear = rear + 1;
	}
	B[rear] = x;
}
void Dequeue(char B[]){
	if (IsEmpty(B)){
		cout<<"Empty";
		return;
	}
	else if (front == rear){
		front = rear = -1;
	}
	else front = front + 1;
}
void Print(char B[]){
	for(int i = front; i<strlen(B); i++){
		cout<<B[i]<<" ";
	}
}
int main(){
	char B[5];
	Enqueue(B, 'a');
	Enqueue(B, 'a');
	Enqueue(B, 'a');
	Enqueue(B, 'a');
	Enqueue(B, 'a');
	Dequeue(B);
	Print(B);
}

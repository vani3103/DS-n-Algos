#include<iostream>
#include<string>
using namespace std;
class stack{
	
	private:
		int top;
		int arr[5];
	public:
		stack(){
			top=-1;
			for(int i=0;i<5;i++){
				arr[i]=0;
			}
		}
		bool isEmpty(){
			if(top==-1)
				return true;
			else
				return false;
		}
		bool isFull(){
			if(top==4)
				return true;
			else
				return false;
		}
		
		void push(int val)
		{
			if(isFull())
			{
				cout<<"stack Overflow"<<endl;
			}
			else{
				top++;
				arr[top]=val;
			}
		}
		
		int pop(){
			if(isEmpty()){
				cout<<"stack undserflow"<<endl;
			}
			else{
				int popval=arr[top];
				arr[top]=0;
				top--;
				return popval;
			}
		}
		int count(){
			return(top+1);
		}
		int peek(int position){
			if(isEmpty()){
				cout<<"Stack underflow"<<endl;
				return 0;
			}
			else{
				return arr[position];
			}
		}
		void change(int position,int value){
			arr[position]=value;
			cout<<"value changed at location  "<<position<<endl;
		}
		
		void display(){
			cout<<"All values in the stack are "<<endl;
			for(int i=4;i>=0;i--){
				cout<<arr[i]<<endl;
			}
		}
			
};
int main(){
	stack s;
	int position,value,option;
	do{
		cout<<"Select what operation you want to perform? select option number. Enter 0 to exit. " <<endl;
		cout<<"1. push()"<<endl;
		cout<<"2. pop()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. change()"<<endl;
		cout<<"8. display()"<<endl;
		cout<<"9. Clear Screen"<<endl<<endl;
		
		cin>>option;
	    switch(option){
	    	case 1:
	    		cout<<"Enter a value to push into the stack"<<endl;
				cin>>value;
				s.push(value);
				break;
			case 2:
				cout<<"pop function is called"<<s.pop()<<endl ;
				break;
			case 3:
				if(s.isEmpty()){
					cout<<"stack is empty"<<endl;
				}
				else{
					cout<<"stack is not empty"<<endl;
				}
				break;
			case 4:
				if(s.isFull()){
					cout<<"Stack is Full"<<endl;
				}
				else{
					cout<<"stack is not full"<<endl;
				}
				break;
			case 5:
				cout<<"enter position of item you want to peek"<<endl;
				cin>>position;
				cout<<"peek function called "<<s.peek(position)<<endl;
				break;
			case 6:
				cout<<"count function is called-- no. of items in the stack are : "<<s.count()<<endl;
				break;
			case 7:
				cout<<"change function called "<<endl;
				cout<<"enter the position to change"<<endl;
				cin>>position;
				cout<<"enter the value of the item you want to change"<<endl;
				cin>>value;
				s.change(position,value);
				break;
			case 8:
				cout<<"display function is called "<<endl;
				s.display();
				break;
			case 9: 
				system("cls");
				break;
			default:
				cout<<"enter proper value from the list"<<endl;
					
}	}while(option!=0);
	
	
	
	return  0;
}

#include<iostream>
using namespace std;
class dequeue{
	public:
		int front=-1,rear=-1,n,i,queue[10],data,begin,end,data3,data2;
		void create(){
			cout<<"enter no of elements"<<endl;
			cin>>n;
			cout<<"enter the elements"<<endl;
			for(i=0;i<n;i++){
				cin>>data;
				if(rear==9)
					cout<<"overflow"<<endl;
					else  if(front==-1)
					{
						front=0;
						rear=0;
						queue[rear]=data;
					}
				else{
					rear=rear+1;
					queue[rear]=data;
				}
			}
			cout<<"inserted queue"<<" ";
			for(i=front;i<=rear;i++)
			cout<<queue[i]<<" ";
			cout<<endl;
		}
		void insertion_front(){
	    deletion_front();
		cout<<"enter the element insert in front"<<endl;
		cin>>data2;
				if(front==0)
					cout<<"overflow"<<endl;
				else{
					front=front-1;
					queue[front]=data2;
				}
			
			for(i=front;i<=rear;i++){
				cout<<queue[i];
			}
		}
		void insertion_rear(){
			cout<<"enter the element insert in rear"<<endl;
			cin>>data3;
				if(rear==9)
					cout<<"overflow"<<endl;
					else if(front==-1){
						front=0;
						rear=0;
						queue[rear]=data3;
					}
				else{
					rear=rear+1;
					queue[rear]=data3;
				}
				cout<<"Inserted rear queue"<<" ";
			for(i=front;i<=rear;i++){
				cout<<queue[i];
			}
			cout<<endl;
		}
		void deletion_front(){
			if(front==-1)
				cout<<"underflow"<<endl;
			else 
				front=front+1;
				cout<<"deleted front queue"<<" ";
			for(i=front;i<=rear;i++){
				cout<<queue[i];
			}
			cout<<endl;
		}
		void deletion_rear(){
			if(front==-1)
				cout<<"underflow"<<endl;
			else
				rear=rear-1;
				cout<<"deleted rear queue"<<" ";
			for(i=front;i<=rear;i++){
				cout<<queue[i];
			}
			cout<<endl;
		}
};
int main(){
	dequeue obj;
	obj.create();
	obj.insertion_front();
	obj.insertion_rear();
	obj.deletion_front();
	obj.deletion_rear();
	return 0;
}

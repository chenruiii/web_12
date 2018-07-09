#include<iostream>
#include <sstream>
#include<string.h>
using namespace std;
struct node{
	struct node* next;
	int value;
};
int main(){
	node* head = NULL;
	node* p = NULL;
	node* pr = NULL;
	while(1){
		string s;
		int i,j = 0;
		while(cin>>s){
			if(s == "NULL") break;
			j++;
			stringstream stream(s);  
    		stream>>i;  
			p = new node;
			p->value = i;
			p->next = NULL;
			if (head == NULL){
				head = p;
				pr = p;
			}
			else {
				pr->next = p;
				pr = pr->next;
			}
		}
		if (head != NULL && head->next != NULL){			
			if (j > 2){
				node* odd = head;
				node* even = head->next;
				node* evenhead = head->next;
				while(even != NULL && even->next != NULL){					
					odd->next = odd->next->next;
					even->next = even->next->next;
					odd = odd->next;
					even = even->next;		
				}
				odd->next = evenhead;
			}
			p = head;
			while(p!=NULL){
				cout << p->value << " ";
				p = p->next;
			}
			cout<<"NULL"<<endl;
		}
		else {
			if (head == NULL) cout<<"NULL"<<endl;
			else cout<<head->value<<" "<<"NULL"<<endl;
		}
		head = NULL;
		p = NULL;
		pr = NULL;
	}
	return 0;
}

#include<iostream>
#define  N 5
using namespace std;
int stack[N];
int top=-1;
void push(int p){
    if(top==N-1){
        cout<<"overflow";
    }
    else{
        top=top+1;
        stack[top]=p;
        

    }




}
void pop(){
    int p;
    if(top==-1){
        cout<<"underflow";
    }
    else{
        p=stack[top];
        cout<<"popped element is"<<p;
        top=top-1;

    }


}
void view(){
    cout<<"Top-->";
    if(top==-1){
        cout<<"stack is empty";

    }
    else{
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
    }



}

int main(){

    int item,choice;
    while(1){
        cout<<"\n\n\n";
        cout<<"STACK OPERATION\n\n";
        cout<<"1.PUSH"<<" "<<"2.POP"<<" "<<"3.VIEW"<<" "<<"4.QUIT\n\n";
        cout<<"Enter Choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter stack element:";
            cin>>item;
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            view();
            break;
        case 4:exit(0);

        default:
            break;
        }






    }






}
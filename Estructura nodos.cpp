#include <iostream>
#include <stdlib.h>

using namespace std;

struct NODE{
    int data;
    NODE *next;
    NODE(int newData=0){
        data=newData;
        next=NULL;
    }
    void PushBack(int newData){
        NODE *current=next;
        NODE *newNode=new NODE(newData);
        if(current!=NULL) while(current->next!=NULL) current=current->next;
        if(current==NULL) next=newNode;
        else current->next=newNode;
    }
    void PushSort(int newData){
        NODE *current=next;
        NODE *newNode=new NODE(newData);
        NODE *before=this;
        if(current==NULL){
            before->next=newNode;
            return;
        }else while(current!=NULL && newData>current->data){
            before=current;
            current=current->next;
        }
        newNode->next=before->next;
        before->next=newNode;
    }
    void Show(){
        NODE *current=next;
        while(current!=NULL){
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<endl;
    }
    void PopBack(){
        NODE *current=next;
        NODE *before=this;
        if(current==NULL) return;
        else while(current->next!=NULL){
            before=current;
            current=current->next;
        }
        before->next=NULL;
        delete current;
    }
    void PopFront(){
        NODE *current=next;
        NODE *before=this;
        if(current==NULL) return;
        before->next=current->next;
        delete current;
    }
};
void ShowMenu(){
	cout<<"      MENU     "<<endl;
    cout<<"1.- Ingresar: " <<endl; 
	cout<<"2.- Eleminar primer dato: " <<endl;
	cout<<"3.- Mostrar lista: " <<endl;
	cout<<"4.- Salir "<<endl;
}
NODE l1;

int main()
{
    int repetir=true;
    int option;
    while(repetir){
        ShowMenu();
        cin>>option;
        if(option==1){
            int newData;
            cout<<"Dato a ingresar ";
            cin>>newData;
            l1.PushSort(newData);
        }else if(option==2) l1.PopFront();
        else if(option==3) l1.Show();
        else break;
    }

    return 0;
}

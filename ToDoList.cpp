#include<iostream>
#include <iomanip>
#include<string>
using namespace std;

int taskId[100];
string task[100];
int ct=0;
void addTask()
{
    cout<<"Enter the task to do\n";
    cin.get();
    getline(cin,task[ct++]);
    taskId[ct-1]=ct;
    cout<<"Task is added\n ";
}

void viewTask()
{
    if(ct==0)
    {
        cout<<"No task left\n";
    }
    else
    {
    cout<<"-----TASK LIST-----\n";
    cout<<"-------------------\n";
    cout<<"TASK ID\t\tTASK TO DO\n";
    for(int i=0;i<ct;i++)
    {
    cout<<taskId[i]<<setw(20)<<task[i]<<endl;
    }
    }
}

void removeTask()
{
    cout<<"Enter ID of the task to be removed ";
    int id;
    cin>>id;
    for(int i=id-1;i<ct;i++)
    {
        task[i]=task[i+1];
        taskId[i]=taskId[i+1];
    }
  ct-=1;
    cout<<"Task is removed succesfully\n";
}

void updateTask(){
cout<<"Enter task id to be updated ";
    int id;
    cin>>id;
    string task1;
    cout<<"Enter new task ";
    cin>>task1;
   
    for(int i=0;i<ct;i++)
        if(taskId[i]==id)
            task[i]=task1;
    cout<<"Task is updated succesfully\n";
}


int main()
{
    int temp=true;
    while(temp)
    {
        cout<<"\n--------------------\n";
        cout<<"----MENU OPTIONS----\n";
        cout<<"--------------------\n";
        cout<<"1 => Task to do\n";
        cout<<"2 => View Task List\n";
        cout<<"3 => Delete the task\n";
        cout<<"4 => Update the task\n";        
        int opn;
        cout<<"\nEnter your choice\n";
        cin>>opn;
        switch (opn)
        {
        case 1:addTask();
            break;
        case 2:viewTask();
            break;
        case 3:removeTask();
            break;
        case 4:updateTask();
            break;       
        default:temp=false;
            break;
        }
    }
        return 0;
}
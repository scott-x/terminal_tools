/*
* @Author: apple
* @Date:   2019-12-20 05:13:32
* @Last Modified by:   apple
* @Last Modified time: 2019-12-20 06:22:21
*/
#include <iostream>
#include "task.h"
#define TASKS_SIZE 5

void show_menu(Task tasks[], int len);
int select();
void handleSelection(Task tasks[],int len);
void task1();
void task2();
void task3();
void task4();
int choise;

struct Task
{
	std::string name;
	void (*task)();
};

int main(int argc, char const *argv[])
{
	Task t1("sleep");
	t1.task = task1;
	Task t2("eating");
	t2.task = task2;
	Task t3("swiming");
	t3.task = task3;
	Task t4("watching");
	t4.task = task4;
	const char * tasks[] = {
		"sleep",
		"eating",
		"swiming",
		"watching movie"
	};

	show_menu(tasks,TASKS_SIZE);
	int selection = select();
    while(selection<TASKS_SIZE && selection>=0 ) {
       handleSelection(selection);
       show_menu(tasks,TASKS_SIZE);
       selection = select();
    }
    std::cout<<"bye..."<<std::endl;
	return 0;
}

void show_menu(Task tasks[], int len){
	using namespace std;
	cout<<"*********** 菜单栏 ***********"<<endl;
	for (int i = 0; i < len; i++)
	{
			if (i%2==1){
		    	cout << i+1 << ". "<<tasks[i].name<<endl;
		    }
		    if (i%2==0){
		    	cout << i+1 << ". "<<tasks[i].name<< "\t";
		    	if (i==len-1){
		    		cout << endl;
		    	}
		    }
	}	
		
}

int select(){
	using namespace std;
	cout<<"Your selection is: ";
	cin>>choise;
	return choise;
}

void handleSelection(Task tasks[],int choise){
	if (choise>=0 && choise <TASKS_SIZE)
	{
		tasks[choise].(*task)();
	}	
}

void task1(){
	using namespace std;
	cout<<"doing task1..."<<endl;
}

void task2(){
	using namespace std;
	cout<<"doing task2..."<<endl;
}

void task3(){
	using namespace std;
	cout<<"doing task3..."<<endl;
}

void task4(){
	using namespace std;
	cout<<"doing task4..."<<endl;
}
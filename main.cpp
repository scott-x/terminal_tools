/*
* @Author: apple
* @Date:   2019-12-20 05:13:32
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-12-21 00:51:06
*/
#include <iostream>
#include <cctype>
#include <stdio.h>

#define TASKS_SIZE 4

void show_menu(const char * t[], int len);
char select();
void handleSelection();
void task1();
void task2();
void task3();
void task4();
char choise;

int main(int argc, char const *argv[])
{
	//define tasks
	const char * tasks[] = {
		"sleep",
		"eating",
		"swiming",
		"watching"
	};

	show_menu(tasks,TASKS_SIZE);
	choise = select();
    handleSelection();
    // while(choise!='5') {
    //    handleSelection();
    //    show_menu(tasks,TASKS_SIZE);
    //    choise = select();
    // }
 
	return 0;
}

void show_menu(const char * t[], int len){
	using namespace std;
	printf("\033[01;32mPlease select your task 【1-4】:\033[0m\n");
	for (int i = 0; i < len; i++)
	{
		printf("\033[01;36m  %d. %s\033[0m\n",i+1,*(t+i));
	}	
}

char select(){
	using namespace std;
	printf("\033[01;31mYour selection is: \033[0m");
	cin>>choise;
	return choise;
}

void handleSelection(){
	switch(choise){
		case '1':
			task1();
			break;
		case '2':
			task2();
			break;
		case '3':
			task3();
			break;
		case '4':
			task4();
			break;
		default:
			break;				
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
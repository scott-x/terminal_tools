/*
* @Author: apple
* @Date:   2019-12-20 06:13:44
* @Last Modified by:   apple
* @Last Modified time: 2019-12-20 06:21:05
*/
#include <iostream>
class Task
{
public:
	Task(std::string task_name)
    :name(task_name) 
	{

	};
	~Task();
public:
	std::string name;
    void task();
};
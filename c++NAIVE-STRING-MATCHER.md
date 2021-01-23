# c-_study
一起学习C ++
朴素字符串匹配代码如下：
#include <iostream>
#include <string>
#include<windows.h>
#include<stdio.h>
using namespace std;

//定义一个计算字符串字符个数的函数

int Length(string str)
{
	int cout = 0;
	int i = 0;

	while(str[i] != '\0')
	{
		cout++;
		i++;
	}

	return cout;
}


//定义一个朴素的模式匹配算法
//匹配成功返回子串在主串中的起始位置，否则返回0
int Index(string S, string T)
{
	int i = 0;   //用于记录主串开始匹配的位置
	int j = 0;   //用于记录子串当前比较的位置
	int s = Length(S);  //记录字符串S的长度
	int t = Length(T);  //记录字符串T的长度

	
	while (i <= s-1 && j <= t-1)   //当i,j小于对应字符串的长度循环进行，否则在主串中找不到匹配的子串
	{
		if (S[i] == T[j])
		{
			++i;
			++j;
		}
		else
		{
			i = i - j + 1;   //比较失败i退回到上次匹配首位的下一位
			j = 0;           //j退回到子串的首位
		}

	}

	if (j > t - 1)   //该条件满足，说明匹配成功
	{
		return i - (t - 1);   //返回子串在主串中的位置，计数从1开始
	}
	else
	{
		return 0;
	}
}


void test01()
{
	GetStdHandle(STD_OUTPUT_HANDLE);
	FOREGROUND_GREEN;
	cout<<"请输入主串: "; 
	char S[80];
	gets(S);
	cout<<endl;
	cout<<"请输入子串: ";
	char T[80];
	gets(T);
	cout<<endl;
		 
	int pos;   //用于记录子串在主串中匹配的位置
	
	pos = Index(S, T);

	if(pos){
		GetStdHandle(STD_OUTPUT_HANDLE);
		FOREGROUND_GREEN;
		cout << "子串在主串中匹配的位置为：" << pos << endl;
	}
	else{
		GetStdHandle(STD_OUTPUT_HANDLE);
		FOREGROUND_GREEN;
		cout<<"未在主串中匹配到相应子串数据。"<<endl;
		cout<<endl;
	}
}



int main()
{
	
	GetStdHandle(STD_OUTPUT_HANDLE);
	FOREGROUND_GREEN;
	test01();
	system("pause");
	return 0;
}

​		今天刷洛谷的时候，刷到一道二分搜索的题。我现场写了一个代码，结果一直RunTimeError。我迫不得已去看了以前的笔记，发现每次循环结束后要将left=mid+1或right=mid-1而不是单纯的left=mid或right=mid。然后我突发奇想，能不能用scratch也做一个二分呢？说干就干！

​		首先定义变量&数组并输入

变量：![](D:\私人\编程\小码王\集训\Day6\image\变量.png)

数组（列表）：![](D:\私人\编程\小码王\集训\Day6\image\list.png)

然后初始化&输入：

![](D:\私人\编程\小码王\集训\Day6\image\input.png)

然后就是二分的主框架：

![](D:\私人\编程\小码王\集训\Day6\image\二分.png)

这里附上c++源代码：

```c++
#include<bits/stdc++.h>
using namespace std;

int arr[1005]
int main()
{
	int ans,num;
	cin >> num >> ans;
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	sort(a+1,a+1+n,greater<int>());//如果使用万能头则不额外添加头文件，否则需要添加algorithm头文件
	while(l<=r){
		int left=1,right=n+1,mid;
		mid = (left+right)/2;
		if(arr[mid]==ans){
			cout << mid << endl;
			return 0;
		}else if(arr[mid]<ans){
			left = mid+1;
		}else{
			right = mid-1;
		}
	}
	system("pause");
	return 0;
}

```

ps：

​	1.二分查找的前提时数组有序，这里由于~~scratch没有对应的排序函数~~小编不想再写排序代码，所以请大家输入	时一定要进行有序输入

​	2.如有不当之处，敬请指正

​	3.如有雷同，算我抄你


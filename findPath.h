#ifndef find_path_h
#define find_path_h
#include <iostream>
#include <stdexcept>
using namespace std;

bool findPathCore(int rows, int cols, int k, int row, int col, bool *visited, int &count);

int findPath(int rows, int cols, int k) {
	if (rows<=0||cols<=0||k<0) 
		throw invalid_argument("Pay attention to the inputs.");

	//初始化bool矩阵，防止重复进入已经访问过的格子。
	bool *visited=new bool[rows*cols];
	for (int i=0; i!=rows*cols; ++i) visited[i]=false;

	int count=0;
	//从（0，0）开始访问。
	findPathCore(rows, cols, k, 0, 0, visited, count);

	delete []visited;
	return count;
}

bool findPathCore(int rows, int cols, int k, int row, int col, bool *visited, int &count) {

	int index=row*cols+col;

	//求出阈值。
	int temp_row=row;
	int temp_col=col;
	int sum=0;
	while (temp_row!=0) {
		sum+=temp_row%10;
		temp_row/=10;
	}
    while (temp_col!=0) {
        sum+=temp_col%10;
        temp_col/=10;
    }

	bool mark=false;
	if (row>=0&&row<rows&&col>=0&&col<cols&&!(visited[index])&&sum<=k) {

		cout<<row<<" "<<col<<endl;

		visited[index]=true;
		count++;

		if (findPathCore(rows, cols, k, row+1, col, visited, count)||
			findPathCore(rows, cols, k, row-1, col, visited, count)||
			findPathCore(rows, cols, k, row, col+1, visited, count)||
			findPathCore(rows, cols, k, row, col-1, visited, count)) {
			mark=true;
		}
			
	}

	return mark;
}
#endif

#include<iostream>
#include<unistd.h>
using namespace std;

int main(){
	int pid;
	
	pid=fork();
	
	if(pid==0){
		cout<<"child process"<<endl;
	}else{
		cout<<"parent process"<<endl;
	}
	
	return 0;
}

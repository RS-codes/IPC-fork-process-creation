#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
	int pid;
	
	pid=fork();
	
	if(pid==0){
		cout<<"branch code: child process"<<endl;
	}else{
		cout<<"branch code: parent process"<<endl;
	}	
	return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
	
	FILE *p;
	char ch[50];
	
	
	p=fopen("demo.txt","r");
	if(p == NULL){
		printf("file can't open");
	}
	else{
		
		fgets(ch,50,p);
		printf("%s",ch);
				
		
		fclose(p);
	}
	return 0;
	
}

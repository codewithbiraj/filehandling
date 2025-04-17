#include<stdio.h>
int main(){

FILE *fptr;
fptr=fopen("hello.txt","r");
if(fptr==NULL){
printf("the file doestn't exist");

}else{

fclose(fptr);
}





return 0;
}

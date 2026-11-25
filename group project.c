#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char name[100][30];
	int age[100];
	char gender[100][10];
		int count=0;
		int i=0;
		int j=0;
void addstudent(){
	char response[38];
	int status;
	char check;
	printf("enter student's name\n");
	scanf("%s",&name[count]);
	while(1){
			printf("enter student's age\n");
	status=scanf("%d",&age[count]);
	while((check=getchar())!= '\n' && check!=EOF){	}
	
	if( status==1 && age[count]>0){
		printf("you entered a valide age  \n");
		break;
	}
	printf("please enter a valide age made of number only.");
	printf("\n");
	}

		printf("enter student's gender,M or F\n");
	scanf("%s",&gender[count]);



count++;
	
	while(1){
	
		printf("do you want to add another student ?, yes or no\n");
	status=	scanf("%s",&response);
		while((check=getchar())!= '\n' && check!=EOF){	}
		
if(	strcmp(response,"YES")==0  || strcmp(response,"yes")==0 && status==1){
		do{
			
			printf("enter student's name\n");
	scanf("%s", &name[count]);
	printf("enter student's age\n");
	scanf("%d", &age[count]);
		printf("enter student's gender,M or F\n");
	scanf("%s", &gender[count]);
	count++;
			printf("do you want to add another student ?, yes or no\n");
		scanf("%s", response);
			
		}while(strcmp(response,"yes")==0);
		

	
}
if(strcmp(response,"no")==0){
			printf("action validated thanks");
			break;
			}
			
	printf("please enter a correct respond that is YES,yes or NO,no\n");
	printf("\n");
}
 
}

 
 void removestudent(){
 
int position=-1;

                
char reference[23];          
printf("\n");


	printf("PLEASE ENTER THE NAME OF THE STUDENT YOU WANT TO DELETE THE INFORMATION \n");
	scanf("%s", reference);
	for (i=0;i<count;i++){
		            
		if(strcmp(name[i],reference)==0){
				position=i;
			break;		        
		}
			}
if(position==-1){
	printf("STUDENT NOT FOUND\n");
		return; 
}
         
		printf("the student is found at index %d\n",position);
				for( j=position;j<count-1;j++){
					strcpy(name[j],name[j+1]);
						strcpy(gender[j],gender[j+1]);	
						age[j]=age[j+1];		
				}
				count--;
	printf("THE STUDENT HAS BEEN SUCCESSFULLY REMOVE\n");

		
}

void modifystudent(){
	char response[23];
	int status;
	int check;
	char mod[23];
	int position=-1;
	char modname[30];
	int modage[30];
char	modgender[30];
do{
	
		printf("enter the name of the student you want to modify it information \n");
	scanf("%s", mod);
	
	for( i=0;i<count;i++){
		if(strcmp(name[i],mod)==0){
			position=i;
			break;
		}
	}
	
	if(position==-1){
		printf(" name not found, so can not be modify\n"); 
		exit(0);  
}
	printf("the student is found at index %d\n",position);
	printf("enter the new name \n");
	scanf("%s", modname );
strcpy(name[position],modname);
	printf("enter the new age \n");
	scanf("%d", &modage );
age[position] = modage;
	printf("enter the new gender \n");
	scanf("%s", modgender );
strcpy(gender[position],modgender);
	
	printf(" DO YOU STILL WANT TO MODIFY A STUDENT INFORMATION? YES OR NO");
	status=	scanf("%s",&response);
	
}while(strcmp(response,"yes")==0);

}

void logout()
{
     printf("you have successfully logged out.\n");
     printf("Thank you for using our system.\n");
     exit(0);
     }
void veiwallstudent(){
	printf(" the list of all our student are \n");
	for(i=0;i<count;i++){
		printf("-%s- \t",name[i]);
		printf("\n");
	}
	
}

void individualview()
{
	char response[21];
	int position=-1;
	char reference[23];
	do{
		
		printf("please enter the name of the student you want to view it information\n");
		scanf("%s", reference);
	for (i=0;i<count;i++){
		            
		if(strcmp(name[i],reference)==0){
				position=i;
			break;		        
		}
		}
if(position== -1){	
	printf("STUDENT NOT FOUND\n");
		return; 
}
printf("the student /%s/  has age /%d/  and gender /%s/ ",name[position],age[position],gender[position]);
printf("\n");
printf("\n");
printf("DO YOU STILL WANT TO  VERIFY A STUDENT INFORMATION \n");
scanf("%s", response);
}while(strcmp(response,"yes")==0);	

}

int main (){ 
int choise;        
int status;
int check;  
 int running =1;
 while (running)    {
 	
 	

	printf("THE VARIOUS OPTION OF THE SCHOOL MANAGEMENT SYSTEM ARE \n");
	printf("1)ADD STUDENT\n");
	printf("2) MODIFY STUDENT INFO\n");
	printf("3) SHOW ALL STUDENT\n");
	printf("4)  INDIVIDUAL VIEW\n");
	printf("5) REMOVE STUDENT\n");
	printf("6) LOGOUT\n");
	
	
	while(1){
		printf("which operation you what to carry out\n");
	status=scanf("%d",&choise);
	if((check=getchar())!='\n' && check!=EOF ){}
	if( status==1 && choise>0 && choise<7){
		printf(" correct choise (^_^)\n");
		break;
	}
	printf("enter a correct option (-_-)\n");
	}
	
	switch(choise)
	{
		case 1:
			addstudent();
			break;
			
			case 2:
				modifystudent();
				break;
				case 3:
					veiwallstudent();
					break;
					case 4:
						individualview();
						break;
						case 5:
							removestudent();
							break;
							case 6:
								logout();
								break;
								
								
							
				
	}
	
}
}
  

 
              

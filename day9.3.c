#include<stdio.h>

int main(){
	
	int a,b,c,d,e;
	
	printf("Enter a:");
	scanf("%d",&a);
	
	printf("Enter b:");
	scanf("%d",&b);
	
    printf("Enter c:");
	scanf("%d",&c);
	
	printf("Enter d:");
	scanf("%d",&d);
	
	printf("Enter e:");
	scanf("%d",&e);
	
	
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					printf("A is min");
				}
				else{
					printf("E is min");
				}
			}
			else{
				if(d<e){
					printf("D is min");
				}
				else{
					printf("E is min");
				}
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("C is min");
				}
				else{
					printf("E is min");
				}
			}
			else{
				if(d<e){
					printf("D is min");
				}
				else{
					printf("E is min");
				}
			}
		}
	}
	else{
		if(b<c){
			if(b<d){
				if(b<e){
					printf("D is min");
				}
				else{
					printf("E is min");
				}
			}
			else{
				if(d<e){
					printf("D is min");
				}
				else{
					printf("E is min");
				}
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("C is min");
				}
				else{
					printf("D is min");
				}
			}
			else{
				if(d<e){
					printf("D is min");
				}
				else{
					printf("E is min");
				}
			}
		}
	}
				
						 
					
					
	
	return 0;
}

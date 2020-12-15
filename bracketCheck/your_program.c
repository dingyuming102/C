#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

typedef struct SNode *Stack;	//define a type of Stack which points to struct SNode
struct SNode{
	char bracket;	//bracket data
	int row;		//record which row the bracket in
	struct SNode *Next;	//point to next node
};
struct SNode a; 
Stack S = &a;
long ISize;
int num;


//Creat a stack return a pointer points to Stack
Stack CreateStack()
{
	Stack S;
	S = (Stack)malloc(sizeof(struct SNode));
	S->Next = NULL;
	
	return S;
}

//Clear all datas
void ClearStack(Stack S)
{
	char item;
	char* c = &item;
	while(!stack_pop(c))
		;
}

//Determins whether the stack is empty
//The function returns 1 if it is,
//returns 0 if it is not.
int IsEmpty(Stack S)
{
	return (S->Next == NULL);
}

//Open the file pointed by filename(String pointer),
//and returns a string pointer that points to the whole file text
char* textFileRead(const char *filename)
{
	char* text;
	FILE *pf = fopen(filename,"r");
	fseek(pf,0,SEEK_END);
	ISize = ftell(pf);
	text = (char*)malloc(1000000);
	rewind(pf);
	fread(text,sizeof(char),ISize,pf);
	text[ISize] = '\0';
	
	fclose(pf);
	return text;
}
//Creat the file pointed by filename(String pointer),
//and write the txt into the file
void textFileWrite(const char *filename,char* txt)
{
	FILE *pf = fopen(filename,"w");
	fputs(txt,pf);
	fclose(pf);
	return;
}

//Check whether the front and back bracket match
int is_match(char* c,char ch)
{
	if(*c=='(' && ch==')')
		return 1;
	else if(*c=='[' && ch==']')
		return 1;
	else if(*c=='{' && ch=='}')
		return 1;
	else
		return 0;
}


// push a character into the stack
void stack_push(char c)
{
	struct SNode *TmpCell;
	TmpCell = (struct SNode *)malloc(sizeof(struct SNode));
	TmpCell->bracket = c;
	TmpCell->Next = S->Next;
	S->Next = TmpCell;
}
/* Overwrites the character pointed by c with the character currently on
 * top of the stack.
 * 
 * The function returns 0 if the operation can be carried out successfully,
 * and any non-zero number if the operation could not be performed (for instance
 * because the stack is empty).
 */
int stack_top(char *c)
{
	if(IsEmpty(S))
		return 1;
	else{
		*c = S->Next->bracket;
		return 0;
	}
}


/* Overwrites the character pointed by c with the character currently on
 * top of the stack, and removes the character from the top of the stack.
 * 
 * The function returns 0 if the operation can be carried out successfully,
 * and any non-zero number if the operation could not be performed (for instance
 * because the stack is empty).
 */
int stack_pop(char *c)
{
	struct SNode *FirstCell;
	char TopChar;
	
	if(IsEmpty(S))
		return 1;
	else{
		FirstCell = S->Next;
		S->Next = FirstCell->Next;
		*c = FirstCell->bracket;
		num = FirstCell->row;
		free(FirstCell);
		
		return 0;
	}
}

/* Returns a dynamically allocated string (in the heap) 
 * containing the characters in the string pointed by source,
 * excluding any one-line comment. 
 */
char *remove_single_line_comment(const char *source)
{
	char* ret = (char*)malloc(1000000);
	
	int i,j,flag=0;
	for(i=0,j=0;source[i];i++){
		if(source[i] !='\0' && source[i]=='/' && source[i+1]=='/'){
			for(;source[i]!='\n' && source[i]!='\0';i++)
				;
			ret[j++] = source[i];
		}else{
			ret[j++] = source[i];
		}
	}
	if(ret[j-1])
		ret[j] = '\0';
	return ret;
}

/* Returns a dynamically allocated string (in the heap) 
 * containing the characters in the string pointed by source,
 * excluding any multi-line comment.
 */
char *remove_multi_line_comment(const char *source)
{
	char* ret = (char*)malloc(1000000);
	
	int i,j,flag=0;
	for(i=0,j=0;source[i];i++){
		if(source[i] !='\0' && source[i]=='/' && source[i+1]=='*'){
			for(;source[i]!='/' || source[i-1]!='*';i++)
				;
		}else{
			ret[j++] = source[i];
		}
	}
	if(ret[j-1])
		ret[j] = '\0';
	return ret;
}



int mymain(int argc, char **argv)
{
	char* filename = argv[1];	//input filename
	char* destname = argv[2];	//output filename
	
	char* txt = textFileRead(filename);		//read the file
	char* remove_single = remove_single_line_comment(txt);	//remove single line comment
	char* ret = remove_multi_line_comment(remove_single);	//remove multi-line comment
	textFileWrite(destname,ret);			//write the file
	printf("%s",ret);
	
	char b;
	char* c = &b;
	int i,count=1;
	for(i=0;ret[i];i++){
		if(ret[i]=='\n')	
			count++;
		else if(ret[i]=='(' || ret[i]=='[' || ret[i]=='{'){
			stack_push(ret[i]);		//push data into stack
			S->Next->row = count;	//record row data
		}else if(ret[i]==')' || ret[i]==']' || ret[i]=='}'){
			if(!stack_pop(c) && is_match(c,ret[i]))		//pop data from stack and check it whether it match with the back bracket of not
					continue;
			else	//if it doesn't match,print error row
				printf("Error row:%d\n",count);
		}
	}
	
	
	while(!stack_pop(c))
		printf("Error row:%d\n",num);
		
	ClearStack(S);	//Clear the stack
	
	return 0;
}


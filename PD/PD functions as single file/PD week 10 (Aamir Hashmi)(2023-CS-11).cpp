 						//PD WEEK 10
//Task1
int progress(int miles[],int n)
{
	int count=0;
	for(int i=0;i+1<n;i++)
	{
	if(miles[i+1]>miles[i])
	count++;
	}
	return count;
}
//Task2
int countletter(string input[],int n,char letter)
{
	int count=0;
	for(int x=0;x<n;x++)
	{
	for(int i=0;input[x][i]!='\0';i++)
	{
	if(input[x][i]==letter)
	{
	count++;
	}
	}
	}
	return count;
}
//Task3
bool isrepeating(int input[],int n,int length)
{
	if(length>n)
	return true;
	else
	{
	for (int i=1;i+length<n;i++)
	{
	if(input[i+length]!=input[i])
	return false;
	}
	return true;}
}
//Task4
int calculatevolume(int dimensions[],int n)
{
	int i=0;
	int volume=0;
	for(int x=0;x<n;x++)
	{
	volume=volume+(dimensions[i]*dimensions[i+1]*dimensions[i+2]);
	i=i+3;
	}
	return volume;
}
//Task5
int min()
{
	int less=0;
	int add=0;
	int y=1;
	int x=0;
	while(x<10&&y<10)
	{
	if(num[x]<=num[y])
	{
	less=num[x];
	add=x;
	y=y+1;
	}
	else if(num[y]<num[x])
	{
	less=num[y];
	add=y;
	x=x+2;
	}
	} 
	count=count+1;
	num[add]=1000;
	return less;
}
//Task6
void reversewords (string input)
{
	int l=0;
	for(int i=0;input[i]!='\0';i++)
	{
	if(input[i]==' ')
	l++;
	}
	int n=0;
	string word[l+1];
	for(int i=0;input[i]!='\0';i++)
	{
	if(input[i]!=' ')
	word[n]=word[n]+input[i];
	else if(input[i]==' ')
	n++;
	}
	cout<<"Reversed string: ";
	for(int x=l;x>=0;x--)
	{
	if(x!=0)
	cout<<word[x]<<" ";
	else
	cout<<word[x];
}
}
//Task7
int min(int num[],int arr[],int n)
{
	int less=0;
	int add=0;
	int y=1;
	int x=0;
	while(x<n&&y<n)
	{
	if(num[x]<=num[y])
	{
	less=num[x];
	add=x;
	y=y+1;
	}
	else if(num[y]<num[x])
	{
	less=num[y];
	add=y;
	x=x+2;
	}
	} 
	count=count+1;
	num[add]=1000;
	return less;
}
bool consecutive(int arr[],int n)
{
	for(int i=0;i+1<n;i++){
	if(arr[i+1]!=arr[i]+1){
	return false;}
	}
	return true;		
}
//Task8
int rotation(string direction[],int n)
{
	int rot;
	int result=0;
	for(int i=0;i<n;i++)
	{
	if(direction[i]=="right")
	result=result+90;
	else if(direction[i]=="left")
	result=result-90;
	}
	rot=result/360;
	return rot;
}
//Task9
int special(int n,int num[])
{
	int count=0;
	int sp=0;
	for(int x=0;x<n;x++){
	if(num[x]>0)
	count=count+1;}
	for(int i=0;i<n;i++)
	{
	if(num[i]>0&&num[i]>=count)
	{
	sp=sp+1;
	}}
	if(sp==0)
	return -1;
	else
	return sp;
}
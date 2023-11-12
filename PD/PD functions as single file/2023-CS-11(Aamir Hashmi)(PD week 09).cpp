//task1
bool islengtheven(string given)
{
	int length=0;
	for(int i=0;given[i]!='\0';i++)
	{
	length=length+1;
	}
	if(length%2==0)
	return true;
	else
	return false;
}
//task2
string containsSeven(int numbers[], int size)
{
	int i,j,k;
	string res="there is no 7 in the array";
    	for(int x=0;x<size;x++)
    	{
        k=numbers[x];
        while(k!=0)
        {
        i=k%10;
        j=k/10;
        k=j;
	if(i==7)
	{
        res="Boom!";
        break;
        }
        }
    	}
    	return res;
}
//task3
bool isidentical(string inputs[], int size)
{
	for(int x=0;x+1<size;x++)
	{
	if(inputs[x]!=inputs[x+1])
	{
	return false;
	}
	}
	return true;
}
//task4
void evenOddTransform(int arr[], int size, int n)
{
	for(int count=1;count<=n;count++)
	{
	for(int i=0;i<size;i++)
	{
	if(arr[i]%2==0)
	{
	arr[i]=arr[i]-2;
	}
	else
	{
	arr[i]=arr[i]+2;
	}
	}
	}
	cout<<"[";
	for(int p=0;p<size;p++)
	{
	if(p==size-1)
	cout<<arr[p]<<"]";
	else
	cout<<arr[p]<<", ";
	}
}	
//task5
int howmanyisidentical(string input1,string input2)
{	int count=0;
	for(int i=0;input1[i]!='\0';i++)
	{
	for(int x=0;input2[x]!='\0';x++)
	{
	if(input1[i]==input2[x])
	{
	input2[x]=' ';
	count++;
	break;
	}
	}
	}
	return count;
}
//task6
int coloringTime(string col[], int size)
{
	int time=0;
	for(int i=0;i<size;i++)
	{
	time=time+2;
	}
	for(int x=0;x+1<size;x++)
	{
	if(col[x]!=col[x+1])
	time=time+1;
	}
	return time;
}
//task8
string findbrokenkeys(string correct,string actual)
{
	int count=0;
	string result;
	int i=0;
	for(int x=0;correct[x]!='\0';x++)
	{
	count=0;
	for(int n=0;n<x;n++)
	{
	if(correct[x]==correct[n])
	{
	count=count+1;
	}
	}
	if(count==0&&correct[x]!=actual[i])
	result=result+correct[x];
	i++;	
}
return result;
}
//task9
void longest7segmentword(string words[],int n)
{
	string great;
	int p=0;
	int length[n];
	int count=0;
	for(int x=0;x<n;x++)
	{
	count=0;
	for(int l=0;words[x][l]!='\0';l++)
	{
	if(words[x][l]=='k'||words[x][l]=='m'||words[x][l]=='v'||words[x][l]=='w'||words[x][l]=='x')
	{
	count=0;
	p=p+1;
	break;
	}
	else
	count=count+1;
}
	length[x]=count;
	}
	if(p==n)
	cout<<"";
	else
	{
	int p=1;
	int s=0;
	while(p<n&&s<n)
	{
	if(length[s]>=length[p])
	{
	great=words[s];
	p++;
	}
	else
	{
	great=words[p];
	s=s+2;
	}
	}
	cout<<"Longest 7-segment word: "<<great;}
}

/*
#include<iostream>
using namespace std;
int main()
{
	int m,n;
    cin >> m >> n;
	char array_1[101][101];
	int i,j;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
            cin >> array_1[i][j];
		}
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if (array_1[i][j] != '*')
			{
				int sum = 0;
				if(array_1[i-1][j-1]=='*')
					sum ++;
				if(array_1[i-1][j]=='*')
					sum ++;
				if(array_1[i-1][j+1]=='*')
					sum ++;
				if(array_1[i][j-1]=='*')
					sum ++;
				if(array_1[i][j+1]=='*')
					sum ++;
				if(array_1[i+1][j-1]=='*')
					sum ++;
				if(array_1[i+1][j]=='*')
					sum ++;
				if(array_1[i+1][j+1]=='*')
					sum ++;
                cout << sum;
			}
			else
			{
                cout << array_1[i][j];
			}
		}
		cout << endl;
	}
	return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;
int arr[5000000];
int main()
{
	int m,n;
	cin >> m >> n;
	int i;
	for (i=0;i<m;i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+m);
	cout << arr[n];
	return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
struct height
{
	double x, y, z;
}s[50001];
bool cmp(height a, height b)
{
	if(a.z != b.z)
	return a.z>b.z;
}
int main()
{
	int n;
	cin >> n;
	int i, j;
	for(i=0;i<n;i++)
	{
		cin >> s[i].x >> s[i].y >> s[i].z;
	}
	sort(s,s+n,cmp);
	double sum = 0;
	for(i=0;i<n-1;i++)
	{
		sum += sqrt(pow((s[i].x-s[i+1].x),2) + pow((s[i].y-s[i+1].y),2) + pow((s[i].z-s[i+1].z),2));
	}
	cout << fixed << setprecision(3) << sum;
	return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;
struct person
{
	char name[21];
	int year, month, day;
	int num;
}s[101];
bool cmp(person a, person b)
{
	if(a.year != b.year)
		return a.year < b.year;
	else if(a.month != b.month)
		return a.month < b.month;
	else if(a.day != b.day)
		return a.day < b.day;
	else
		return a.num > b.num;
}
int main()
{
	int n;
	cin >> n;
	int i;
	for(i=0;i<n;i++)
	{
		cin >> s[i].name >> s[i].year >> s[i].month >> s[i].day;
		s[i].num = i;
	}
	sort(s,s+n,cmp);
	for(i=0;i<n;i++)
	{
		cout << s[i].name << endl;
	}
}
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a, int b)
{
	return a>b;
}
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	int arr[21];
	for (i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n,cmp);
	for (i=0;i<n;i++)
	{
		cout << arr[i];
	}
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	char a[13][13];
	int i, j;
	int x, y;
	int r, t;
	for (i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			cin >> a[i][j];
			if(a[i][j]=='C')
			{
				r = i;
				t = j;
				a[i][j] = '.';
			}
			else if(a[i][j]=='F')
			{
				x = i;
				y = j;
				a[i][j] = '.';
			}
		}
	}
	int b[4] = {1,2,3,4};
	int minute = 0;
	i = j = 0;
	while(x!=r || y!=t)
	{
		if(i==4)
			i = 0;
		if(j==4)
			j = 0;
		if (b[i]==1)
		{
			if(a[x-1][y] == '.')
				x--;
			else
				i++;
		}
		else if (b[i]==2)
		{
			if(a[x][y+1] == '.')
				y++;
			else
				i++;
		}
		else if (b[i]==3)
		{
			if(a[x+1][y] == '.')
				x++;
			else
				i++;
		}
		else if(b[i]==4)
		{
			if(a[x][y-1] == '.')
				y--;
			else
				i++;
		}
		if (b[j]==1)
		{
			if(a[r-1][t] == '.')
				r--;
			else
				j++;
		}
		else if (b[j]==2)
		{
			if(a[r][t+1] == '.')
				t++;
			else
				j++;
		}
		else if (b[j]==3)
		{
			if(a[r+1][t] == '.')
				r++;
			else
				j++;
		}
		else if(b[j]==4)
		{
			if(a[r][t-1] == '.')
				t--;
			else
				j++;
		}
		minute++;
		if(minute>100000)
		{
			cout << "0";
			return 0;
		}
	}
	cout << minute;
	return 0;
}
*/
/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(string a, string b)
{
	return a+b > b+a;
}
int main()
{
	int n;
	cin >> n;
	string a[21];
	int i;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	for(i=0;i<n;i++)
	{
		cout << a[i];
	}
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int sum = 0;
	int i=0;
	while(n>0)
	{
		n--;
		i++;
		if(i==k)
		{
			n++;
			i=0;
		}
		sum++;
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i;
	int num[5];
	int t = 0;
	for(i=10000;i<=30000;i++)
	{
		int j = 5;
		int k = i;
		while(j>0)
		{
			num[--j] = k % 10;
			k /= 10;
		}
		int s1 = 100*num[0] + 10*num[1] + num[2];
		int s2 = 100*num[1] + 10*num[2] + num[3];
		int s3 = 100*num[2] + 10*num[3] + num[4];
		int c = 0;
		if((s1%n==0) && (s2%n==0) && (s3%n==0))
		{
			c++;
		}
		if(c>0)
		{
			cout << i<< endl;
			t++;
		}
	}
	if(t==0)
	{
		cout << "No";
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i;
	int sum = 0;
	int j, k;
	int s = 0;
	cin >> j;
	for(i=1;i<n-1;i++)
	{
		cin >> k;
		if(k<j)
		{
			s++;
		}
		if(k>j && s!=0)
		{
			sum++;
			s = 0;
		}
		j = k;
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int s, x;
	cin >> s >> x;
	double distance = s;
	double speed = 7;
	int c = 0;
	while(distance >= -x)
	{
		if(distance <= x)
		{
			c++;
		}
		if(c!=0 && distance-speed<-x)
		{
			cout << "n";
			return 0;
		}
		else if(c!=0 && distance-speed>=-x)
		{
			cout << 'y';
			return 0;
		}
		distance -= speed;
		speed *= 0.98;
	}
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int x1, y1, x2, y2;
	char ch;
	cin >> x1 >> ch >> y1 >> x2 >> ch >> y2;
	int x = x1 = x1*x2;
	int y = y1 = y1*y2;
	while(x1!=y1)
	{
		if(x1>y1)
		{
			x1 -= y1;
		}
		else if(x1<y1)
		{
			y1 -= x1;
		}
	}
	x /= x1;
	y /= y1;
	cout << y << " " << x;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum_1, sum_2;
	int sum_3 = 0;
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		cin >> sum_1 >> sum_2;
		sum_3 += sum_1 + sum_2 - 8;
		sum += sum_3;
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int arr[1000001];//该数组放在主函数内会导致运行错误！
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	int max = 0;
	int num = 1;
	for(int j=1;j<n;j++)
	{
		if (arr[j]>arr[j-1])
		{
			num ++;
		}
		else if(arr[j]<=arr[j-1])
		{
			if(num>max)
			{
				max = num;
			}
			num = 1;
		}
	}
	if(num>max)
	{
		max = num;
	}
	cout << max;
	return 0;
}
*/
/*
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x[51];
	int y[51];
	int r[51];
	int i;
	for(i=0;i<n;i++)
	{
		cin >> x[i];
	}
	for(i=0;i<n;i++)
	{
		cin >> y[i];
	}
	for(i=0;i<n;i++)
	{
		cin >> r[i];
	}
	int x1, x2, y1 ,y2;
	int sum = 0;
	cin >> x1 >> y1 >> x2 >> y2;
	for(i=0;i<n;i++)
	{
		double h1 = sqrt(pow(x1-x[i],2) + pow(y1-y[i],2));
		double h2 = sqrt(pow(x2-x[i],2) + pow(y2-y[i],2));
		if((h1<r[i]) ^ (h2<r[i]))
		{
			sum++;
		}
	}
	cout << sum;
	return 0;
} 
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string arr;
	getline(cin,arr,'@');
	int i;
	int flag = 0;
	for(i=0;i<arr.length();i++)
	{
		if(arr[i] == '(')
		{
			flag ++;
		}
		else if(arr[i]==')' && flag!=0)
		{
			flag --;
		}
		else if(arr[i]==')' && flag==0)
		{
			cout << "NO";
			return 0;
		}
	}
	if(flag != 0)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	int i, j;
	int arr[10000][4];
	for(i=0;i<x;i++)
	{
		for(j=0;j<4;j++)
		{
			cin >> arr[i][j];
		}
	}
	for(i=0;i<y;i++)
	{
		int a, b;
		int sum = 0;
		int last;
		int s = 0;
		cin >> a >> b;
		for(j=0;j<x;j++)
		{
			if(a>=arr[j][0] && a<=arr[j][2])
			{
				s ++;
			}
			if(b>=arr[j][1] && b<=arr[j][3] && s!=0)
			{
				sum ++;
				last = j+1;
			}
		}
		if(sum!=0)
		{
			cout << "Y " << sum << " " << last << endl;
		}
		else
		{
			cout << "N";
		}
	}
	return 0;
}
*/
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i, j;
	for(i=n;;i++)
	{
		int sum = 1;
		for(j=2;j<sqrt(i)+1;j++)
		{
			if(i%j == 0)
			{
				sum += j + i/j;
			}
		}
		int num = sum;
		int all = 1;
		for(j=2;j<sqrt(num)+1;j++)
		{
			if(num%j == 0)
			{
				all += j + num/j;
			}
		}
		if(all==i && all!= sum)//注意，自己与自己不能互为亲和数
		{
			cout << all << " " << sum;
			return 0;
		}
	}
}
*/
/*
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	string arr;
	cin >> arr;
	int num = arr.length();
	if(num == 9)
	{
		int i;
		int str[10] = {0};
		for(i=0;i<=9;i++)
		{
			if(i%2==0)
			{
				str[arr[i]-'0']++;
			}
		}
		if(str[1]==1&&str[2]==1&&str[3]==1 || str[4]==1&&str[5]==1&&str[6]==1 || 
		str[7]==1&&str[8]==1&&str[9]==1 || str[1]==1&&str[4]==1&&str[7]==1 || 
		str[2]==1&&str[5]==1&&str[8]==1 || str[3]==1&&str[6]==1&&str[9]==1 || 
		str[1]==1&&str[5]==1&&str[9]==1 ||str[3]==1&&str[5]==1&&str[7]==1 )
		{
			cout << "xiaoa wins.";
		}
		else
		{
			cout << "drew.";
		}
	}
	else if (num%2==0)
	{
		cout << "uim wins.";
	}
	else
	{
		cout << "xiaoa wins.";
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int k = n%m;
	int i;
	for(i=1;i<=m-k;i++)
	{
		cout << n/m << " ";
	}
	for(i=1;i<=k;i++)
	{
		cout << n/m+1 << " ";
	}
	return 0;
}
*/
/*
#include<iostream>
#include<cmath>
using namespace std;
int a[1025][1025]={0};
int main()
{
	int n;
	cin >> n;
	int s = pow(2,n);
	int i, j;
	for(i=1;i<=s;i++)
	{
		for(j=1;j<=s;j++)
		{
			if(j==s || i==s)
			{
				a[i][j]=1;
			}
		}
	}
	for(i=1;i<=s;i++)
	{
		for(j=1;j<=s;j++)
		{
			if(a[i-1][j]==1 ^ a[i-1][j+1]==1)
			{
				a[i][j] = a[i-1][j] + a[i-1][j+1];
			}
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if(a==0 || b==0 || c==0)
	{
		cout << "No!!!";
		return 0;
	}
	int s = 0;
	for(int i=100;i<=999;i++)
	{
		if(i*b/a<1000 && i*c/a<1000)
		{
			if((i%10+i/10%10+i/100+i*b/a%10+i*b/a/10%10+i*b/a/100+i*c/a%10+i*c/a/10%10+i*c/a/100 == 45) &&
			((i%10)*(i/10%10)*(i/100)*(i*b/a%10)*(i*b/a/10%10)*(i*b/a/100)*(i*c/a%10)*(i*c/a/10%10)*(i*c/a/100)) == 2*3*4*5*6*7*8*9)
			{
				cout << i << " " << i*b/a << " " << i*c/a << endl;
				s++;//输入77 147 397，输出154 294 794，上述判断方法无法对该数据进行有效判断
			}
		}
	}
	if(s==0)
	{
	cout << "No!!!";
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if(a==0 || b==0 || c==0)
	{
		cout << "No!!!";
		return 0;
	}
	int s = 0;
	for(int i=100;i<=999;i++)
	{
		if(i*b/a<1000 && i*c/a<1000)
		{
			int arr[10];
			arr[1] = i%10;
			arr[2] = i/10%10;
			arr[3] = i/100;
			arr[4] = i*b/a%10;
			arr[5] = i*b/a/10%10;
			arr[6] = i*b/a/100;
			arr[7] = i*c/a%10;
			arr[8] = i*c/a/10%10;
			arr[9] = i*c/a/100;
			int flag = 0;
			for(int j=1;j<=8;j++)
			{
				for(int k=j+1;k<=9;k++)
				{
					if(arr[j]==arr[k] || arr[j]==0)//数组中可能因为int数据类型的原因，在求余时导致数组内含0，需剔除；
					{
						flag ++;
						break;
					}
				}
				if(flag!=0)
				{
					break;
				}
			}
			if(flag==0)
			{
				cout << i << " " << i*b/a << " " << i*c/a << endl;
				s++;//上述判断方法仅限于A<B<C
			}
		}
	}
	if(s==0)
	{
		cout << "No!!!";
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	if(n<=10 || n>=30)
	{
		cout << "0";
		return 0;
	}
	else
	{
		for(int k1=1;k1<=3;k1++)
		{
			for(int k2=1;k2<=3;k2++)
			{
				for(int k3=1;k3<=3;k3++)
				{
					for(int k4=1;k4<=3;k4++)
					{
						for(int k5=1;k5<=3;k5++)
						{
							for(int k6=1;k6<=3;k6++)
							{
								for(int k7=1;k7<=3;k7++)
								{
									for(int k8=1;k8<=3;k8++)
									{
										for(int k9=1;k9<=3;k9++)
										{
											for(int kx=1;kx<=3;kx++)
											{
												if(k1+k2+k3+k4+k5+k6+k7+k8+k9+kx == n)
												{
													sum++;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << sum << endl;
	for(int k1=1;k1<=3;k1++)
		{
			for(int k2=1;k2<=3;k2++)
			{
				for(int k3=1;k3<=3;k3++)
				{
					for(int k4=1;k4<=3;k4++)
					{
						for(int k5=1;k5<=3;k5++)
						{
							for(int k6=1;k6<=3;k6++)
							{
								for(int k7=1;k7<=3;k7++)
								{
									for(int k8=1;k8<=3;k8++)
									{
										for(int k9=1;k9<=3;k9++)
										{
											for(int kx=1;kx<=3;kx++)
											{
												if(k1+k2+k3+k4+k5+k6+k7+k8+k9+kx == n)
												{
													cout<<k1<<" "<<k2<<" "<<k3<<" "<<k4<<" "<<k5<<" "<<k6<<" "<<k7<<" "<<k8<<" "<<k9<<" "<<kx<<endl;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
	cin >> n;
	int num;
	int i;
	if(n==0)
	{
		cin >> num;
		cout <<num;
		return 0;
	}
	for(i=n;i>=0;i--)
	{
		cin >> num;
		if(num!=0)
		{
			if(i==n)
			{
				if(num>0)
				{
					if(num==1)
					{
						cout << "x^" << i;
					}
					else
					{
						cout << num << "x^" << i;
					}
				}
				else
				{
					if(num==-1)
					{
						cout << "-x^" << i;
					}
					else
					{
						cout << num << "x^" << i;
					}
				}
			}
			else if(i>1&&i<n)
			{
				if(num>0)
				{
					if(num==1)
					{
						cout << "+x^" << i;
					}
					else
					{
						cout << '+' << num << "x^" << i;
					}
				}
				else
				{
					if(num==-1)
					{
						cout << "-x^" << i;
					}
					else
					{
						cout << num << "x^" << i;
					}
				}
			}
			else if(i==1)
			{
				if(num>0)
				{
					if(num==1)
					{
						cout << "+x";
					}
					else
					{
						cout << '+' << num << "x";
					}
				}
				else
				{
					if(num==-1)
					{
						cout << "-x";
					}
					else
					{
						cout << num << "x";
					}
				}
			}
			else
			{
				if(num>0)
				{
					cout << '+' << num;
				}
				else if(num<0)
				{
					cout << num;
				}
			}
		}
	}
    return 0;
}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int p1, p2, p3;
	cin >> p1 >> p2 >> p3;
	cin.get();
	char str[101];
	cin >> str;
	int sum = strlen(str);
	char ch;
	int i, j, r;
	for(i=0;i<sum;i++)
	{
		if(str[i+1]=='-')
		{
			cout << str[i];
			if((str[i]>='a'&&str[i]<='z'&&str[i+2]>='a'&&str[i+2]<='z') || (str[i]>='0'&&str[i]<='9'&&str[i+2]>='0'&&str[i+2]<='9'))
			{
				if(str[i+2]==str[i]+1)
				{
					i ++;
					continue;
				}
				else if(str[i]<str[i+2])
				{
					if(p1==1 || p1==2)
					{
						if(p1==2 && str[i]>='a')
						{
							if(p3==1)
							{
								ch = str[i]+1-'a'+'A';
							}
							else
							{
								ch = str[i+2]-1-'a'+'A';
							}
						}
						else
						{
							if(p3==1)
							{
								ch = str[i]+1;
							}
							else
							{
								ch = str[i+2]-1;
							}
						}
						if(p3==1)
						{
							for(j=str[i]-'a';j<str[i+2]-'a'-1;j++,ch++)
							{
								for(r=1;r<=p2;r++)
								{
									cout << ch;
								}
							}
						}
						else
						{
							for(j=str[i+2]-'a'-1;j>str[i]-'a';j--,ch--)
							{
								for(r=1;r<=p2;r++)
								{
									cout << ch;
								}
							}
						}
					}
					else if(p1==3)
					{
						char ch = '*';
						if(str[i]>='a')
						{
							for(j=str[i]-'a';j<str[i+2]-'a'-1;j++)
							{
								for(r=1;r<=p2;r++)
								{
									cout << ch;
								}
							}
						}
						else
						{
							for(j=1;j<=(str[i+2]-str[i]-1)*p2;j++)
							{
								cout << ch;
							}
						}
					}
				}
				else if(str[i+2] <= str[i]+1)
				{
					cout << '-';
				}
				i ++;
			}
		}
		else
		{
			cout << str[i];
		}
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int arr[20000001];
int main()
{
	int n;
	cin >> n;
	int m;
	int num;
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		cin >> num;
		m = max(m,num);
		arr[num]++;
	}
	sum = 10*m;
	for(int i=0;i<=m;i++)
	{
		if(arr[i]!=0)
		{
			sum += arr[i]+5;
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int k, m, n;
	cin >> k >> m >> n;
	int flag = 0;
	for(int i=1;i<=m;i++)
	{
		int a, b;
		cin >> a >> b;
		if(a==0&&b>0)//用以特判a为0的情况
		{
			cout << i <<" ";
			continue;
		}
		if(k/a*b >= n)
		{
			cout << i << " ";
			flag++;
		}
	}
	if(flag == 0)
	{
		cout << -1;
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int arr[100005];
int main()
{
	int n;
	cin >> n;
	int i, j;
	for(i=2;i<=n;i++)
	{
		int num = i;
		for(j=2;j<=i;j++)
		{
			while(num%j==0)
			{
				arr[j]++;
				num /= j;
			}
		}
	}
	for(int i=2;i<=j;i++)
	{
		if(arr[i])
		{
			cout << i << " " << arr[i] << endl;
		}
	}
	return 0;
}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	int n;
	cin >> n;
	char arr[1001];
	cin >> arr;
	int last;
	for(int j=0;j<strlen(arr);j++)
	{
		if(arr[j]!='0')
		{
			last = j;
		}
	}
	for(int i=0,k=strlen(arr)-1;i<strlen(arr);i++,k--)
	{
		if(arr[i]!='0')
		{
			if(i!=last)
			{
				cout << arr[i] << '*' << n << '^' << k << '+';
			}
			else
			{
				cout << arr[i] << '*' << n << '^' << k;
			}
		}
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a5 = 0;
	int a0 = 0;
	for(int i=0;i<n;i++)
	{
		int num;
		cin >> num;
		if(num == 5)
		{
			a5++;
		}
		else
		{
			a0++;
		}
	}
	if(a0 == 0)
	{
		cout << -1;
		return 0;
	}
	if(a5<9)
	{
		cout << 0;
		return 0;
	}
	a5 -= a5%9;
	for(int j=0;j<a5;j++)
	{
		cout << 5;
	}
	for(int j=0;j<a0;j++)
	{
		cout << 0;
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int arr[1001][1001];
int main()
{
	int i, j;
	int n;
	cin >> n;
	int flag = 0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> arr[i][j];
			if(arr[i][j]==0)
			{
				flag++;
			}
		}
	}
	if(flag==0)
	{
		cout << "Bad Game!";
		return 0;
	}
	int m = 0;
	int sum = 0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum = 0;
			if(arr[i][j]==0)
			{
				for(int k=0;k<n;k++)
				{
					if(k!=j && arr[i][k]!=0)
					{
						sum += arr[i][k];
					}
				}
				for(int p=0;p<n;p++)
				{
					if(p!=i && arr[p][j]!=0)
					{
						sum += arr[p][j];
					}
				}
				m = max(m,sum);
			}
		}
	}
	cout << m;
	return 0;
}
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double sum = 0;
	double num = 0;
	while(cin >> num)
	{
		sum += num*1000000;
	}
	cout << fixed << setprecision(5) << sum/1000000;
	return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;
int arr[10000];
int main()
{
	int n, m;
	cin >> n >> m;
	int i = 1;
	int money = 0;
	int price = 0;
	for(int j=1;j<=m;j++)
	{
		cin >> arr[j];
	}
	sort(arr+1,arr+m+1);
	if(n<m)
	{
		i = m - n + 1;
	}
	for(i;i<=m;i++)
	{
		if(arr[i]*(m-i+1)>money)
		{
			money = arr[i]*(m-i+1);
			price = arr[i];
		}
	}
	cout << price  << ' ' << money;
	return 0;
}
*/
/*
#include<cstdio>
int main()
{
    long double a;
    scanf("%11Lf", &a);//%11LF，未知表达
    printf("%.8Lf\n", a/23);
    return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
	int n;
	cin >> n;
	int arr[10];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	if(prev_permutation(arr,arr+n))//STL函数
	{
		for(int j=0;j<n;j++)
		{
			cout << arr[j] << " ";
		}
	}
return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	char str[10];
	int arr[10];
	for(int i=0;i<n;i++)
	{
		cin >> str[i];
		arr[i] = str[i] - '0';
	}
	int sum = 0;
	while(prev_permutation(arr,arr+n))
	{
		sum++;
	}
	cout << sum+1;
	return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct People
{
	string name;
	string position;
	long long bg;
	int level;
	int num;
} person[111];
bool cmp1(People x,People y)
	{
		if(x.bg != y.bg)
		{
			return x.bg > y.bg;
		}
		else
		{
			return x.num <y.num;
		}
	}
int change(string a)
{
    if(a=="BangZhu") return 0;
    if(a=="FuBangZhu") return 1;
    if(a=="HuFa") return 2;
    if(a=="ZhangLao") return 3;
    if(a=="TangZhu") return 4;
    if(a=="JingYing") return 5;
    if(a=="BangZhong") return 6;
}
bool cmp2(People x, People y)
{
	if(x.position == y.position)
	{
		if(x.level != y.level)
		{
			return x.level > y.level;
		}
		else
		{
			return x.num < y.num;
		}
	}
	else
	{
		return change(x.position) < change(y.position);//缺少该行，导致第二个sort函数排序错误！！！
	}
}	
int main()
{
	int n;
	cin >> n;
	int i;
	for(i=0;i<n;i++)
	{
		cin >> person[i].name >> person[i].position >> person[i].bg >> person[i].level;
		person[i].num = i;
	}
	sort(person+3,person+n,cmp1);
	for(i=3;i<n;i++)
	{
		if(i>2 && i<=4)
		{
			person[i].position = "HuFa";
		}
		else if(i>4 && i<=8)
		{
			person[i].position = "ZhangLao";
		}
		else if(i>8 && i<=15)
		{
			person[i].position = "TangZhu";
		}
		else if(i>15 && i<=40)
		{
			person[i].position = "JingYing";
		}
		else
		{
			person[i].position = "BangZhong";
		}
	}
	sort(person,person+n,cmp2);
	for(i=0;i<n;i++)
	{
		cout << person[i].name << ' ' << person[i].position << ' ' << person[i].level << endl;
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for(int i=0;i<=100;i++)
	{
		for(int j=0;j<=100;j++)
		{
			for(int k=0;k<=100;k++)
			{
				for(int p=0;p<=100;p++)
				{
					if(i*i+j*j+k*k+p*p == n)
					{
						sum ++;
					}
				}
			}
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x1, y1;
	int x2, y2;
	int n;
	char ch;
	int sum = 0;
	cin >> x1 >> y1 >> x2 >> y2 >> n;
	if(x1==x2 && y1==y2)
	{
		cout << 0;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		cin >> ch;
		if(ch == 'E')
		{
			if(abs(x1+1-x2) < abs(x1-x2))
			{
				x1 ++;
				sum ++;
				if(x1==x2 && y1==y2)
				{
					cout << sum;
					return 0;
				}
			}
		}
		else if(ch == 'S')
		{
			if(abs(y1-1-y2) < abs(y1-y2))
			{
				y1 --;
				sum ++;
				if(x1==x2 && y1==y2)
				{
					cout << sum;
					return 0;
				}
			}
		}
		else if(ch == 'W')
		{
			if(abs(x1-1-x2) < abs(x1-x2))
			{
				x1 --;
				sum ++;
				if(x1==x2 && y1==y2)
				{
					cout << sum;
					return 0;
				}
			}
		}
		else if(ch == 'N')
		{
			if(abs(y1+1-y2) < abs(y1-y2))
			{
				y1 ++;
				sum ++;
				if(x1==x2 && y1==y2)
				{
					cout << sum;
					return 0;
				}
			}
		}
	}
	cout << -1;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int r, b, c, d, e;
	cin >> r >> b >> c >> d >> e;
	int sum;
	if(r<b)
	{
		sum = e*r*2+(b-r)*d;
	}
	else
	{
		sum = e*b*2+(r-b)*c;
	}
	cout << max(r*c+b*d,sum);
	return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int arr[10];
int main()//全排列
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		arr[i] = i;
	}
	int aim = 1;
	while(aim!=0)
	{
		for(int i=1;i<=n;i++)
		{
			cout << setw(5) << arr[i];
		}
		cout << endl;
		aim = 0;
		for(int j=n;j>0;j--)
		{
			if(arr[j-1]<arr[j])
			{
				aim = j-1;
				break;
			}
		}
		if(aim==0)
		{
			break;
		}
		for(int j=n;j>0;j--)
		{
			if(arr[aim]<arr[j])
			{
				int change = arr[aim];
				arr[aim] = arr[j];
				arr[j] = change;
				break;
			}
		}
		sort(arr+aim+1,arr+n+1);
	}
	return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int arr[21];
int main()
{
    int n,r;
	cin >> n >> r;
	int i, j;
    for(i=r+1;i<=n;++i)
	{
		arr[i] = 1;
	}
    do{
        for(j=1;j<=n;j++)
		if(arr[j]==0)
		{
			cout << setw(3) << j;
		}
		cout << endl;
    }while(next_permutation(arr+1,arr+n+1));
    return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
int arr[21];
int a[21];
int main()
{
	int n, k;
	cin >> n >> k;
	for(int i=1;i<=n;i++)
	{
		cin >> arr[i];
	}
	sort(arr+1,arr+n+1);
	for(int i=k+1;i<=n;i++)
	{
		a[i] = 1;
	}
	int sum = 0;
	int flag = 0;
	int num = 0;
	do
	{
		flag = sum = 0;
		for(int j=1;j<=n;j++)
		{
			if(a[j]==0)
			{
				sum += arr[j];
			}
		}
		for(int k=2;k<=sqrt(sum);k++)
		{
			if(sum%k==0 && sum!=k)
			{
				flag++;
			}
		}
		if(flag==0 && sum!=1)
		{
			num++;
		}
	}while(next_permutation(a+1,a+n+1));
	cout << num;
	return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int arr[10005];
int main()
{
	int n, num;
	cin >> n >> num;
	for(int i=1;i<=n;i++)
	{
		cin >> arr[i];
	}
	int flag = 1;
	while(flag!=num+1)
	{
		next_permutation(arr+1,arr+n+1);//STL函数实现全排列
		flag++;
	}
	for(int i=1;i<=n;i++)
	{
		cout << arr[i] << ' ';
	}
	return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
string arr;
int w[51];
int b[51];
int r[51];
int main()
{
	int n, m;
	cin >> n >> m;
	int sum = 2500;
	int all = 0;
	for(int i=1;i<=n;i++)
	{
		cin >> arr;
		for(int j=0;j<m;j++)
		{
			if(arr[j] != 'W')
			w[i]++;
			if(arr[j] != 'B')
			b[i]++;
			if(arr[j] != 'R')
			r[i]++;
		}
	}
	for(int i=2;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			all = 0;
			for(int k=1;k<i;k++)
			{
				all += w[k];
			}
			for(int k=i;k<j;k++)
			{
				all += b[k];
			}
			for(int k=j;k<=n;k++)
			{
				all += r[k];
			}
			sum = min(all, sum);
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
	cin >> str;
	int i;
	int sum = 0;
    for(i=0;i<str.length()-1;i++)
	{
        if(str[i] != str[i+1])
		{
			sum++;
		}
	}
    if(str[str.length()-1]=='0')
	{
		sum ++;
	}
    cout << sum;
    return 0;       
}
*/
/*
#include<iostream>
using namespace std;
char arr[101][101];
int main()
{
	int r, c, k;
	cin >> r >> c >> k;
	for(int i=0;i<r;i++)
	{
		cin >> arr[i];
	}
	int flag1 = 0;
	int flag2 = 0;
	int sum = 0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			for(int a=j,b=i;a<k+j;a++,b++)
			{
				if(arr[i][a] != '.')
				{
					flag1++;
				}
				if(arr[b][j] != '.')
				{
					flag2++;
				}
			}
			if(flag1 == 0)
			{
				sum++;
			}
			if(flag2 == 0)
			{
				sum++;
			}
			flag1 = flag2 = 0;
		}
	}
	if(k!=1)
	{
		cout << sum;
	}
	else
	cout << sum/2;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int a[2222]={6,2,5,5,4,5,6,3,7,6},d[10]={6,2,5,5,4,5,6,3,7,6};
int main()
{
	int sum;
	cin >> sum;
	sum -= 4;
	for(int i=10;i<=2222;i++)
	{
			int j=i;
			while(j>=1)
			{
				a[i] += d[j%10];
				j /= 10;
			}
	}
	int digit = 0;
	for(int i=0;i<=1111;i++)
	{
		for(int j=0;j<=1111;j++)
		{
			if(a[i]+a[j]+a[i+j] == sum)
			{
				digit ++;
			}
		}
	}
	cout << digit;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int s = 0;
int recursion(int num, int k)
{
	if(num-k>0 && (num-k)%2==0)
	{
		s = recursion((num+k)/2, k) + recursion((num-k)/2, k);
	}
	else
	{
		s = 1;
	}
	return s;
}
int main()
{
	int n, k;
	cin >> n >> k;
	cout << recursion(n, k);
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
void gcd (int n, char a, char b, char c)
{
	if (n==1)
	{
		cout << a << "-->" << b << endl;
	}
	else
	{
		gcd(n-1, a, c, b);
		cout << a << "-->" << b << endl;
		gcd(n-1, c, b, a);
	}
}
int main()
{
	int m;
	cin >> m;
	gcd(m, 'a', 'b', 'c');
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int BinarySearch_Recursion(int *a, const int low, const int high, const int x)  //利用递归
{
	if (low <= high)
	{
		int mid = low + (high - low)/2;
		if (x == a[mid])
		{
			return mid;
		}
		else if (x < a[mid])
		{
			return BinarySearch_Recursion(a, low, mid - 1, x);
		}
		else if (x > a[mid])
		{
			return BinarySearch_Recursion(a, mid + 1, high, x);
		}
	}
	return -1;
}
int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int num = -5;
	int result1 = BinarySearch_Recursion(a, 0, 9, num);
	if (result1 == -1)
	{
		cout << "递归：未找到！" << endl;
	}
	else
	{
		cout << "递归：在a[" << result1 << "]里找到" << num << endl;
	}
	return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;
// 排列组合（Permutations）
void Permutations(char *p, const int k, const int m)  //利用递归
{
	if (k == m)
	{
		for (int i = 0; i <= m; i++)
		{
			cout << p[i];
		}
		cout << endl;
	}
	else
	{
		for (int i = k; i <= m; i++)
		{
			swap(p[k], p[i]);
			Permutations(p, k + 1, m);
			swap(p[k], p[i]);
		}
	}
}
int main()
{
	char s[] = "abc";
	Permutations(s, 0, 2);  // 0指a；2指c
		return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
string str;
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> str;
		if(str[str.length()-1]%2==0)
		{
			cout << "even" << endl;
		}
		else
		{
			cout << "odd" << endl;
		}
	}
    return 0;
}
*/
/*
#include<iostream>
#include<cmath>
using namespace std;
int s[101][101];
int main()
{
	int n;
	int m;
	int r;
	int sum = 0;
	cin >> n >> m >> r;
	for(int i=0;i<m;i++)
	{
		int a;
		int b;
		cin >> a >> b;
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=n;k++)
			{
				if(sqrt(pow(j-a,2)+pow(k-b,2)) <= r)
				{
					s[j][k]++;
				}
			}
		}
	}
	for(int j=1;j<=n;j++)
	{
		for(int k=1;k<=n;k++)
		{
			if(s[j][k])
			{
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int a[241][241];
int main()
{
	int x, y, i;
	int sum = 0;
	cin >> x >> y >> i;
	for(int j=1;j<=i;j++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for(int k=x1;k<=x2;k++)
		{
			for(int h=y1;h<=y2;h++)
			{
				a[k][h]++;
			}
		}
	}
	for(int j=1;j<=x;j++)
	{
		for(int k=1;k<=y;k++)
		{
			if(a[j][k])
			{
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string str1, str2;
	cin >> str1 >> str2;
	for(int i=0;i<str1.length();i++)
	{
		if(str1[i] < str2[i])
		{
			cout << -1;
			return 0;
		}
		
	}
	cout << str2;
	return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[11] = {0};
	a[10] = 9999;
	int sum = 0;
	for(int i=0;i<10;i++)
	{
		int num;
		cin >> num;
		a[i] = num%42;
	}
	sort(a,a+10);
	for(int i=0;i<10;i++)
	{
		if(a[i]!=a[i+1])
		{
			sum++;
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double num;
	cin >> num;
	cout << fixed << setprecision(6)<< M_PI*num*num << endl;//调用math使用M_PI来代表π的值
	cout << 2*num*num;
	return 0;
}
*/
/*
#include<iostream>//P4327 [COCI2006-2007#1] Okviri
#include<string>
using namespace std;
char a[6][64];
int main()
{
	string str;
	cin >> str;
	for(int j=1;j<=3;j++)
	{
		if(j==1)
		{
			for(int i=1;i<=str.length();i++)
			{
				if(i%3==0)
				{
					a[j][4*i-1] = '*';
				}
				else
				{
					a[j][4*i-1] = '#';
				}
			}
		}
		else if(j==2)
		{
			for(int i=1;i<=str.length()*4;i+=2)
			{
				if(a[1][i] != 0)
				{
					a[2][i-1] = a[2][i+1] = a[1][i];
				}
			}
		}
		else if(j==3)
		{
			for(int i=1;i<=str.length();i++)
			{
				a[3][4*i-1] = str[i-1];
				a[3][4*i-1-2] = a[3][4*i-1+2] = '#';
			}
			for(int i=1;i<=str.length();i++)
			{
				if(i%3==0)
				{
					a[3][4*i-1-2] = a[3][4*i-1+2] = '*';
				}
			}
		}
	}
	for(int i=1,k=1;k<=5;i++,k++)
	{
		if(k>3)
		{
			i = 6-k;
		}
		for(int j=1;j<=str.length()*4+1;j++)
		{
			if(a[i][j] == 0)
			{
				cout << '.';
			}
			else 
			{
				cout << a[i][j];
			}
		}
		cout << endl;
	}
	return 0;
}
*/
/*
#include<iostream>//题解中有采用位运算的介绍
#include<algorithm>//洛谷酸度
#include<cstring>
#include<cmath>
using namespace std;
int s[12];
int b[12];
int a[12];
int main()
{
	int n;
	int minn = 9999999;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> s[i] >> b[i];
	}
	for(int k=1;k<=n;k++)
	{
		memset(a, 0, sizeof(a));  
		for(int i=k+1;i<=n;i++)
		{
			a[i] = 1;
		}
		do
		{
			int acid = 1;
			int bitter = 0;
			for(int j=1;j<=n;j++)
			{
				if(a[j] == 0)
				{
					acid   *= s[j];
					bitter += b[j];
				}
			}
			minn = min(minn,abs(acid-bitter));
		}while(next_permutation(a+1,a+n+1));
	}
	cout << minn;
	return 0;
}
*/
/*
#include<iostream>//高精度乘法
#include<string>
using namespace std;
int a1[5001];
int a2[5001];
int sum[5001];
string str1, str2;
int main()
{
	cin >> str1 >> str2;
	if(str1=="0" || str2=="0")
	{
		cout << 0;
		return 0;
	}
	for(int i=str1.length()-1, j=0;i>=0;i--,j++)
	{
		a1[j] = str1[i]-'0';
	}
	for(int i=str2.length()-1, j=0;i>=0;i--,j++)
	{
		a2[j] = str2[i]-'0';
	}
	for(int i=0;i<=str1.length();i++)
	{
		for(int j=0;j<=str2.length();j++)
		{
			sum[i+j] += a1[i]*a2[j];
		}
	}
	for(int i=0;i<str1.length()+str2.length();i++)
	{
		if(sum[i] >= 10)
		{
			sum[i+1] += sum[i]/10;
			sum[i] %= 10;
		}
	}
	int flag = 0;
	for(int i=str1.length()+str2.length();i>=0;i--)
	{
		if(flag==0 && sum[i]==0)
		{
			continue;
		}
		else
		{
			cout << sum[i];
			flag++;
		}
	}
	return 0;
}
*/
/*
#include<iostream>//P1591 阶乘数码
using namespace std;//高精度阶乘
int a[9999];
int main()
{
	int temp,digit;
	int n, m;//temp每次的得数   digit每次得数的位数  
	cin >> n;
	for(int k=0;k<n;k++)
	{
		int m, aim;
		cin >> m >> aim;
		int sum = 0;
		a[0]=1;//从1开始乘 
		digit=1;
		for(int i=2;i<=m;i++)
		{
			int num=0;
			for(int j=0;j<digit;j++) 
			{
				temp=a[j]*i+num;//将一个数的每一位数都分别乘以i， 
				a[j]=temp%10;//将一个数的每一位数利用数组进行储存
				num=temp/10;
			}
			while(num)//判断退出循环后，num的值是否为0 
			{
				a[digit]=num%10;//继续储存 
				num=num/10;
				digit++;
			}
		}
		for(int i=digit-1;i>=0;i--)
		{
			if(a[i] == aim)
			{
				sum++;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long a[101];
	long long b[101];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++)
	{
		if(b[i]<a[i])
		{
			cout << "NE";
			return 0;
		}
	}
	cout << "DA";
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		int num;
		cin >> num;
		sum += (num%2);
	}
	if(sum%2)
	{
		cout << "Alice";
	}
	else
	{
		cout << "Bob";
	}
	return 0;
}
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double sum = 0;
	int digit = 0;
	int f1 = 0;
	int f2 = 0;
	int num;
	for(int i=0;i<n;i++)
	{
		cin >> num;
		f1 += num;
	}
	for(int i=0;i<n;i++)
	{
		cin >> num;
		f2 += num;
	}
	digit = f1-f2;
	sum = (f1*3.0-f2*2.0)/digit;
	cout << fixed << setprecision(6) <<  sum;
	return 0;
}
*/
/*
#include<iostream>//洛谷最大乘积
using namespace std;
int a[10001];
int b[10001];
int main()
{
	int n;
	cin >> n;
	int num = 2;
	int sum = 0;
	int temp, digit;
	if(n==3)
	{
		cout << "1 2\n2";
	}
	else if(n==4)
	{
		cout << "1 3\n3";
	}
	while(sum <= n)
	{
		sum += num;
		a[num++]++;
	}
	sum -= n;
	if(sum == 1)
	{
		a[2]--;
		a[num-1]--;
		a[num]++;
	}
	else if(sum > 1)
	{
		a[sum]--;
	}
	b[0] = 1;
	digit=1;
	int figure=0;
	for(int i=2;i<=num;i++)
	{
		if(a[i]!=0)
		{
			cout << i << ' ';
			for(int j=0;j<digit;j++) 
			{
				temp = b[j]*i+figure;
				b[j] = temp%10;
				figure = temp/10;
			}
			while(figure)
			{
				b[digit] = figure%10;
				figure /= 10;
				digit++;
			}
		}
	}
	cout << endl;
	for(int i=digit-1;i>=0;i--)
	{
		cout << b[i];
	}
	return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char a[4] = {'A', 'B', 'C', 'D'};
	string str[222];
	string aim_1,aim_2;
	int n, q;
	cin >> n >> q;
	for(int i=1;i<=n*2;i+=2)
	{
		cin >> str[i] >> str[i+1];
	}
	for(int i=1;i<=q;i++)
	{
		cin >> aim_1;
		for(int j=1;j<=n*2;j+=2)
		{
			if(aim_1 == str[j])
			{
				for(int k=0;k<4;k++)
				{
					cin >> aim_2;
					if(aim_2 == str[j+1])
					{
						cout << a[k] << endl;
					}
				}
			}
		}
	}
	return 0;
}
*/
/*
#include<iostream>//P5594 【XR-4】模拟赛
using namespace std;
int a[1001][1001];
int b[1001];
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			int t;
			cin >> t;
			a[t][j]++;
		}
	}
	int sum = 0;
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j])
			{
				sum++;
			}
		}
		cout << sum << ' ';
		sum = 0;
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int a[11];
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	for(int i=0;i<k;i++)
	{
		cin >> a[i];
	}
	int sum = 0;
	int time = 0;
	while(sum<n)
	{
		sum += m;
		for(int i=0;i<k;i++)
		{
			if(sum == a[i])
			{
				m++;
			}
		}
		time++;
	}
	cout << time;
	return 0;
}
*/
/*
#include<iostream>//P5690 [CSP-S2019 江西] 日期
using namespace std;
int main()
{
	int month, day;
	char ch;
	cin >> month >> ch >> day;
	int sum = 0;
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	{
		if(day<=0 || day>31)
		{
			sum++;
		}
	}
	else if(month==4 || month==6 || month==9 || month==11)
	{
		if(day<=0 || day>30)
		{
			sum++;
		}
	}
	else if(month==2)
	{
		if(day<=0 || day>28)
		{
			sum++;
		}
	}
	else if(month>12 || month==0)
	{
		sum++;
		month %= 10;
		if( month==0 || month==1 || month==2 || month==3 || month==5 || month==7 || month==8)
		{
			if(day<=0 || day>31)
			{
				sum++;
			}
		}
		else if(month==4 || month==6 || month==9)
		{
			if(day<=0 || day>30)
			{
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int v, v0;
	cin >> v >> v0;
	if(v0 > v)
	{
		cout << 0;
		return 0;
	}
	double maxn = 0;
	int sum = 0;
	for(int i=1;v>v0*i;i++)
	{
		double d = 0;
		d = 0.3*sqrt(v*1.0/i-v0)*i;
		if(d >= maxn)
		{
			if(d==maxn)
			{
				cout << 0;
				return 0;
			}
			maxn = d;
			sum = i;
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//P5831 [USACO19DEC]Cow Gymnastics B
using namespace std;
int a[19][29], b[19][29];
int main()
{
	int n, k;
	cin >> k >> n;
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin >> a[i][j];
			b[i][a[i][j]] = j;
		}
	}
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int flag = 0;
			for(int t=1;t<=k;t++)
			{
				if(b[t][i]<b[t][j])
				{
					flag++;
				}
			}
			if(flag == k)
			{
				sum++;
			}
		}
	}
	cout << sum;
	
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(void)
{
	int i, flag = 0;                         
	char ch;
	const char *color[5]= {"red", "blue", "yellow", "green", "black" };
	cin >> ch;
	for(i = 0; i < 5; i++)
	{
        if(*color[i]==ch)
		{
			flag = 1;
			cout << color[i];
		}
	}
	if(flag == 0)
	{
		cout << "Not Find";
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int a = 9;;
	int *pci;
	pci = &a;
	cout << a;
	cout << endl << *pci ;
	a++;
	cout << endl << *pci;
	(*pci)++;
	cout << endl << *pci;
	return 0;
}
*/
/*
#include <iostream>
#include <climits>            // use limits.h for older systems
int main()
{
    using namespace std;
    int n_int = INT_MAX;       // initialize n_int to max int value
    short n_short = SHRT_MAX;    // symbols defined in climits file
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
const int mod=1e9+7;
int b[5555];
int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		int num;
		cin >> num;
		b[num]++;
	}
	int ans=0;
	for(int i=2;i<=5000;i++)
	{
		for(int j=1;j<=i/2;j++)
		{
			int k=i-j;
			if(k!=j && b[i]>=2 && b[j]>=1 && b[k]>=1)
			{
				ans += ((b[i]*(b[i]-1)/2%mod)*(b[j]%mod)*(b[k]%mod)%mod) % mod;
			}
			else if(k==j && b[i]>=2 && b[j]>=2)
			{
				ans += ((b[i]*(b[i]-1)/2%mod)*(b[j]*(b[j]-1)/2%mod)) % mod;
			}
			ans%=mod;
		}
	}
	cout << ans%mod;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int a[10000001];
int main()
{
	int n;
	int m;
	int p;
	int num;
	cin >> n >> m >> p;
	for(int i=1;i<=n;i++)
	{
		cin >> num;
		for(int j=1;j<=num;j++)
		{
			int first;
			cin >> first;
			a[first]++;
		}
	}
	int sum = 0;
	for(int i=1;i<=m;i++)
	{
		if(a[i] == p)
		{
			sum++;
		}
	}
	cout << sum << endl;
	for(int i=1;i<=m;i++)
	{
		if(a[i] == p)
		{
			cout << i << ' ';
		}
	}
	return 0;
}
*/
/*
#include<iostream>//P5832 [USACO19DEC]Where Am I? B
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string str1;
	cin >> str1;
	for(int i=2;i<n;i++)
	{
		for(int j=0;j<=n-i;j++)
		{
			string str2 = str1.substr(j,i);
			if(str1.find(str2,j+1) != string::npos)
			{
				break;
			}
			if(j==n-i)
			{
				cout << i;
				return 0;
			}
		}
	}
}
*/
/*
#include<iostream>
#include<algorithm>
using namespace std;
int a[8];
int b[8] = {0, 0, 0, 1, 1, 1, 1, 1};
int c[8];
int main()
{
	int maxn = 0;
	for(int i=0;i<8;i++)
	{
		cin >> a[i];
	}
	do
	{
		int sum = 0;
		for(int i=0;i<8;i++)
		{
			if(b[i])
			{
				sum += a[i];
			}
		}
		if(sum>maxn)
		{
			maxn = sum;
			for(int i=0;i<8;i++)
			{
				c[i] = b[i];
			}
		}
	}while(next_permutation(b,b+8));
	cout << maxn << endl;
	for(int i=0;i<8;i++)
	{ 
		if(c[i])
		{
			cout << i+1 << ' ';
		}
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	long long s = 0;
	long long i = 0;
	long long r = 0;
	double a = 0;
	double b = 0;
	double add = 0;
	double cure = 0;
	int n = 0;
	cin >> s >> i >> n >> a >> b;
	for(int j=0;j<n;j++)
	{	
		if((s*i*a) > int(s*i*a))
		{
			add = int(s*i*a)+1;
		}
		else
		{
			add = s*i*a;
		}
		if(add>s)
		{
			add = s;
		}
		if((i*b) > int(i*b))
		{
			cure = int(i*b)+1;
		}
		else
		{
			cure = i*b;
		}
		s -= add;
		r += cure;
		i += add-cure;
	}
	cout << s << ' ' << i << ' ' << r;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{	
	int sum = 0;
	int a[4];
	for(int i=0;i<4;i++)
	{
		cin >> a[i];
	}
	for(int i=0;i<4;i++)
	{
		int left = 0;
		int right = 0;
		for(int j=0;j<a[i];j++)
		{
			int num;
			cin >> num;
			if(left<=right)
			{
				left += num;
			}
			else
			{
				right += num;
			}
		}
		sum += max(left,right);
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//P2368 EXCEEDED WARNING B
using namespace std;
int main()
{
	int n;
    scanf("%d",&n);
    if (n<9)
	{
		cout << 0;
	}
    else if (n==9)
	{
		cout << 8;
	}
    else 
    {
		cout << 72;
        for (int i=0;i<n-10;i++)
		{
			cout << 0;
		}
    }
    return 0;
}
*/
/*


//从这开始，我决定在每段程序写下必要的注释，为了帮助我在以后某一天回看题目时能够迅速回想起解题思路
#include<iostream>//P6068 『MdOI R1』GCD? GCD!
#include<cmath>
using namespace std;
int RC(int num)
{
	for(int i=2;i<sqrt(num)+1;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	cin >> n;
    while(n--)
	{
		int num;
        cin >> num;
        if(num<=5)
		cout << -1 << endl;
		else if(RC(num)>0)
		{
			cout << 1 << endl;//如果是素数那么将它分成3个互不相等的数，这三个数的最大公约数是1
		}
        else
		{
            int g=0;
            for(int i=1;i<=sqrt(num);i++)//i代表可能的公约数
			{
                if(num%i==0)//能被整除，说明i是那3个数的公约数
				{
                    if(i>=6)
					g = max(g,num/i);
                    if(num/i>=6)//num/i代表那3个数之和，他们必须大于5，因为最小三个不相同的数为1，2,3
					g = max(g,i);
                }
            }
            if(g)
			cout << g << endl;
        }
    }
    return 0;
}
*/

/*
#include<iostream>//P1893 山峰暸望
using namespace std;
longlong a[11111];
int main()
{
	int n;
	cin >> n;
	int maxn = 0;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)//枚举每个高度
	{
		int sum = 1;
		for(int j=i;j>1;j--)
		{
			if(a[j]>=a[j-1])
			{
				sum++;
			}
			else
			{
				break;
			}
		}
		for(int j=i;j<n;j++)
		{
			if(a[j]>=a[j+1])
			{
				sum++;
			}
			else
			{
				break;
			}
		}
		maxn = max(sum,maxn);
	}
	cout << maxn;
	return 0;
}
*/
/*
#include<iostream>//P1862 输油管道问题
#include<cmath>
using namespace std;
int a[11111];
int b[11111];
int main()
{
	int n;
	cin >> n;
	int maxn = -100000;
	int minn = 100000;
	for(int i=1;i<=n;i++)
	{
		cin >> b[i];//x坐标没有用
		cin >> a[i];
		maxn = max(maxn,a[i]);//找到n个油井y坐标的最大值和最小值，以此为范围进行枚举
		minn = min(minn,a[i]);
	}
	int aim = 999999999;//油井到主管道之间的输油管道最小长度总和，太小会出错
	for(int i=minn;i<=maxn;i++)
	{
		int sum = 0;
		for(int j=1;j<=n;j++)
		{
			sum += abs(i-a[j]);
		}
		aim = min(aim,sum);
	}
	cout << aim;
	return 0;
}
*/
/*
#include<iostream>//https://www.luogu.com.cn/problem/P5855
#include<string>
using namespace std;
int a[20];
int main()
{
    int n;
	int k;
	cin >> n >> k;
	string str_aim;//定义目标密码
	cin >> str_aim;
	string str[20];//储存每一位数密码的范围
	long long sum = 1;//用以记录尝试的最大值
	int num;
	for(int i=0;i<n;i++)
	{
		cin >> num;
		sum *= num;//相乘求得最大值
		cin >> str[i];
		if(str[i].find(str_aim[i]) == string::npos)
		{
			cout << -1;//如果str_aim第i个字符，在str[i]中找不到，就意味着他永远试不出密码
			return 0;
		}
	}
	int sum1 = 0;
	string str_guess;//定义已经尝试过的密码
	for(int i=0;i<k;i++)
	{
		int flag = 0;
		cin >> str_guess;
		if(str_guess == str_aim)
		{
			cout << 0;//如果已经尝试过的密码与正确密码一致，则不再需要继续尝试
			return 0;
		}
		for(int j=0;j<n;j++)
		{
			if(str[j].find(str_guess[j]) == string::npos)
			{
				flag++;//如果str_guess第j个字符，在str[j]中找不到,代表这个密码不在原文中的“尝试范围”内
			}
		}
		if(flag==0)
		{
			sum1++;//flag为0，代表改str_guess在“尝试范围”内，则最大猜测数要减去1
		}
	}
	cout << sum-sum1;
	return 0;
}
*/
/*
#include<iostream>//P1927 防护伞
#include<cmath>
#include<cstdio>
#define pi 3.1415926535
using namespace std;
int x[1111];
int y[1111];
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> x[i] >> y[i];
	}
	double sum = 1e11;
	double maxn = 0;
	double radius = 0;
	for(int i=0;i<n;i++)
	{
		double maxn = 0;
		for(int j=0;j<n;j++)
		{
			radius = sqrt(pow(x[i]-x[j],2) + pow(y[i]-y[j],2));
			maxn = max(radius,maxn);
		}
		sum = min(maxn,sum);
	}
	printf("%.4f", sum*sum*pi);
	return 0;
}
*/
/*
#include<iostream>//P2693 [USACO1.3]号码锁 Combination Lock
using namespace std;
int a[31];//用下标1-30记录两种密码共六位数的容错范围，每个数的容错范围占据5个数组元素
int main()
{
	int n;
	cin >> n;
	if(n<5)
	{
		cout << n*n*n;//小于5要进行特判
		return 0;
	}
	int num;
	int sum = 250;//锁的密码最大个数为5的3次方,也就是农夫所设密码与预设密码在容错范围内没有任何重合
	for(int i=3;i<=30;i+=5)
	{
		cin >> num;
		a[i-2] = num-2;
		a[i-1] = num-1;
		a[i] = num;//密码的容错为左右各两个位置
		a[i+1] = num+1;
		a[i+2] = num +2; 
	}
	for(int i=1;i<=30;i++)
	{
		if(a[i]>n)
		{
			a[i] -= n;//锁为转盘,导致第一个1与n相邻
		}
		else if(a[i]<1)
		{
			a[i] += n;
		}
	}
	for(int i=1;i<=5;i++)
	{
		for(int j=6;j<=10;j++)
		{
			for(int k=11;k<=15;k++)
			{
				for(int x=16;x<=20;x++)
				{
					for(int y=21;y<=25;y++)
					{
						for(int z=26;z<=30;z++)
						{
							if(a[i]==a[x] && a[j]==a[y] && a[k]==a[z])
							{
								sum--;//枚举：如果密码i, j, k 与密码x, y, z 一致,代表农夫所设密码与预设密码有重合，需减1
							}
						}
					}
				}
			}
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//P7772 [COCI2009-2010#2] FAKTOR
using namespace std;
int main()
{
	double a;
	int  b;
	double n;
	cin >> a >> b;
	n = a*b;
	while(n/a>b-1)
	{
		n--;
	}
	cout << n+1;
	return 0;
}
*/
/*
#include<iostream>//P8680 [蓝桥杯 2019 省 B] 特别数的和
#include<cstring>
#include<cstdio>
using namespace std;
char str[10001];
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		sprintf(str,"%d",i);//该处若换成itoa(str,i,10)在洛谷IDE里会显示头文件未声明，尚且找不到C++里应该用什么头文件
		char *a = strchr(str, '2');
		char *b = strchr(str, '0');
		char *c = strchr(str, '1');
		char *d = strchr(str, '9');
		if(a||b||c||d)
		{
			sum += i;
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<cstdio>
int main()
{
	//一维数组
	int a[5] = { 1, 2, 3, 4, 5 };
	//步长为5的数组指针，即数组里有5个元素
	int (*p)[5];
	//把数组a的地址赋给p，则p为数组a的地址，则*p表示数组a本身
	p = &a;
	//%p输出地址, %d输出十进制
	//\n回车
	//在C中，在几乎所有使用数组的表达式中，数组名的值是个指针常量，也就是数组第一个元素的地址，它的类型取决于数组元素的类型。
	printf("%p\n", a); //输出数组名，一般用数组的首元素地址来标识一个数组，则输出数组首元素地址
	printf("%p\n", p); //根据上面，p为数组a的地址，输出数组a的地址
	printf("%p\n", *p); //*p表示数组a本身，一般用数组的首元素地址来标识一个数组
	printf("%p\n", &a[0]); //a[0]的地址
	printf("%p\n", &a[1]); //a[1]的地址
	printf("%p\n", p[0]); //数组首元素的地址
	printf("%d\n", **p); //*p为数组a本身，即为数组a首元素地址，则*(*p)为值，当*p为数组首元素地址时，**p表示首元素的值1
	printf("%d\n", *p[0]); //根据优先级，p[0] 表示首元素地址，则*p[0]表示首元素本身，即首元素的值1
	printf("%d\n", *p[1]); //为一个绝对值很大的负数，不表示a[1]...表示什么我还不知道
	//将二维数组赋给指针
	int b[3][4];
	int(*pp)[4]; //定义一个数组指针，指向含4个元素的一维数组
	pp = b; //将该二维数组的首地址赋给pp，也就是b[0]或&b[0]，二维数组中pp=b和pp=&b[0]是等价的
	pp++; //pp=pp+1，该语句执行过后pp的指向从行b[0][]变为了行b[1][]，pp=&b[1]
    return 0;
}
*/
/*
#include<iostream>//P3397 地毯
using namespace std;
int a[1111][1111];
int main()
{
	int n, m;
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for(int j=x1;j<=x2;j++)
		{
			for(int k=y1;k<=y2;k++)
			{
				a[j][k]++;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
*/
/*
#include<iostream>//P1458 [USACO2.1]顺序的分数 Ordered Fractions
#include<algorithm>
using namespace std;
struct fraction
{
	double figure;
	int a,b;
}num[99999];
bool cmp(fraction x, fraction y)
{
	return x.figure < y.figure;
}
int main()
{
	int n;
	cin >> n;
	int k = 0;
	for(int j=2;j<=n;j++)//枚举分母,从2开始避免分数出现1/1的情况
	{
		for(int i=1;i<j;i++)//枚举分子，从一开始，避免出现0/1的情况
		{
			int x1 = i;
			int x2 = j;
			while(x1!=x2)//求最大公约数，将分数化成最简
			{
				if(x1>x2)
				{
					x1 -= x2;
				}
				else if(x1<x2)
				{
					x2 -= x1;
				}
			}
			num[k].figure = (i/x1)*1.0/(j/x1);
			num[k].a = i/x1;
			num[k].b = j/x1;
			k++; 
		}
	}
	sort(num,num+k,cmp);//从小到大排序
    cout << "0/1" << endl;//易知不管输入值n为多少，必输出该分数
	for(int i=0;i<k;i++)
	{
        int flag = 0;
        for(int j=0;j<i;j++)
        {
            if(num[i].figure == num[j].figure)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
		{
			cout << num[i].a << '/' << num[i].b << endl;
        }
	}
	cout << "1/1";//易知不管输入值n为多少，必输出该分数
	return 0;
}
*/
/*
#include<iostream>//P6437 [COCI2011-2012#6] JACK
#include<algorithm>
using namespace std;
int arr[111];
int a[111];
int main()
{
	int n, aim;
	cin >> n >> aim;
	for(int i=1;i<=n;i++)
	{
		cin >> arr[i];
	}
	for(int i=n-3+1;i<=n;i++)//n个数中最后3个数赋值为1
	{
		a[i] = 1;
	}
	int maxn = 0;//定义所要求的和的最大值
	do
	{
		int sum = 0;
		for(int j=1;j<=n;j++)
		{
			if(a[j]==1)
			{
				sum += arr[j];
			}
		}
		if(sum>maxn && sum<=aim)
		{
			maxn = sum;
		}
	}while(next_permutation(a+1,a+n+1));//将数组a中元素改为下一字典序以达到从n中任选3个数的目的
	cout << maxn;
	return 0;
}
*/
/*
#include<iostream>//P8301 [CoE R4 A/Stoi2041] 娘子
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string a;
	string b;
	cin >> a;
	cin >> b;
	int sum1 = 0;
	int sum2 = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='1')
		{
			sum1++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]=='1')
		{
			sum2++;
		}
	}
	if(sum1>sum2)
	{
		cout << sum1-sum2;
	}
	else
	{
		cout << sum2-sum1;
	}
	return 0;
}
*/
/*
#include<iostream>//P1003 [NOIP2011 提高组] 铺地毯
using namespace std;
int a[10001], b[10001], g[10001], k[10001]; 
int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i] >> b[i] >> g[i] >> k[i];
		
	}
	int x, y;
	cin >> x >> y;
	int aim = -1;
	for(int i=1;i<=n;i++)
	{
		if(x>=a[i]&&x<=a[i]+g[i] && y>=b[i]&&y<=b[i]+k[i])//判断目标位置是否在第i层地毯上
		{
			aim = i;
		}
	}
	cout << aim;
	return 0;
}
*/
/*
#include<iostream>
#include<cmath>
using namespace std;
int factorial(int m)
{
	int all = 1;
	for(int i=1;i<=m;i++)
	{
		all *= i;
	}
	return all;
}
int main()
{
	int n;
	cin >> n;
	unsigned long long sum1 = 0;
	double sum2 = 0;
	for(int i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			sum2 += 1.0/factorial(i);
		}
		else
		{
			sum2 -= 1.0/factorial(i);
		}
	}
	sum1 = factorial(n)*sum2;
	cout << sum1;
	return 0;
}
*/
/*
#include<iostream>//P1595 信封问题（错排问题）
using namespace std;
long long a[50] = {1,0};
int main()
{
	int n;
    cin >> n;
    for(int i=2;i<=n;i++)
	{
		a[i] = (i-1)*(a[i-1]+a[i-2]);//找规律
	}
    cout << a[n];
    return 0;
}
*/
/*
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 10;

int n;
int state[N];   // 0 表示还没放数，1~n表示放了哪个数
bool used[N];   // true表示用过，false表示还未用过

void dfs(int u)
{
    if (u > n)  // 边界
    {
        for (int i = 1; i <= n; i ++ )
		cout << state[i] << ' ';// 打印方案
		cout << endl;
        return ;
    }
    // 依次枚举每个分支，即当前位置可以填哪些数
    for (int i = 1; i <= n; i ++ )
        if (!used[i])
        {
            state[u] = i;
            used[i] = true;
            dfs(u + 1); //递归搜索下一个位置
            // 恢复现场
            state[u] = 0;  //回溯
            used[i] = false;
        }
}

int main()
{
	cin >> n;
    dfs(1);//从第一个位置开始搜索遍历
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long num1 = 1;
	long long num2 = 2;
	long long num = 0;
	for(int i=0;i<n-2;i++)
	{
		num = num1+num2;
		num1 = num2;
		num2 = num;
	}
	cout << num;
	return 0;
}
*/
/*
#include<iostream>//P1255 数楼梯
using namespace std;
int a[6666],b[6666],c[6666];
int main()
{
    int n;
	int ans = 1;//代表位数
	cin >> n;
    if(n<3)
    {
		cout << n;
        return 0;
    }
	a[1]=1,b[1]=2;
    for(int i=0;i<n-2;i++)//n-2个数求斐波那契数列
    {
        for(int j=1;j<=ans;j++)
		c[j]=a[j]+b[j];//高精度加法
        for(int j=1;j<=ans;j++)
        {
            if(c[j]>9)
            {
                c[j+1]+=c[j]/10;
                c[j]%=10;
                if(j>=ans)
				{
					ans++;//必须进位
				}
            }
        }
        for(int j=1;j<=ans;j++)
		{
			a[j]=b[j];//递推
		}
        for(int j=1;j<=ans;j++)
		{
			b[j]=c[j];
		}
    }
    for(int i=ans;i>0;i--)
	{
		cout << b[i];//逆序输出
	}
    return 0;
}
*/
/*
#include <stdlib.h>
#include <stdio.h>
int a[10], n, book[10];
void dfs(int step)
{
    int i;
    if(step==n+1)
    {
        for(i=1; i<=n; i++)
            printf("%d ", a[i]);
        printf("\n");
        return;
    }
    for(i=1; i<=n; i++)
    {
        if(!book[i])
        {
            a[step] = i;
            book[i] = 1;
            dfs(step+1);
            book[i] = 0;
        }
    }
}

int main()
{
    scanf("%d", &n);
    dfs(1);
    return 0;
}
*/
/*
#include<iostream>//https://blog.csdn.net/qq_34123044/article/details/111411457
using namespace std;
int a[100], n, book[100], count=0;
void dfs(int step)
{
    int i;
    if(step==n+1 && ((a[1]+a[4]-a[7])*100+(a[2]+a[5]-a[8])*10+a[3]+a[6]-a[9]==0))
    {
        count++;
        return;
    }
    for(i=1; i<=n; i++)
    {
        if(!book[i])
        {
            a[step] = i;
            book[i] = 1;
            dfs(step+1);
            book[i] = 0;
        }
    }
}

int main()
{
    n = 9;
    dfs(1);
	cout << count/2;
    return 0;
}
*/
/*
#include<cstdio>//P1795 无穷的序列
#include<cmath>
int main()
{
	int n;
	scanf("%d", &n);//使用cin和cout将导致超时
	for(int i=0;i<n;i++)
	{
		unsigned int num;
		scanf("%u", &num);
		unsigned int figure = sqrt((num-1)*2);
		if(figure*(figure+1)/2+1==num)//运用数列规律，第n个1出现位置在n*(n-1)/2+1
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}
*/
/*
#include<cstdio>//P8830 [传智杯 #3 练习赛] 评委打分
int main()
{
	int n;
	int maxn = 0;
	int minn = 101
	scanf("%d", &n);
	double score = 0;
	for(int i=1;i<=n;i++)
	{
		int num;
		scanf("%d", &num);//使用cin和cout将导致超时
		if(num>maxn)
		{
			maxn = num;
		}
		if(num<minn)
		{
			minn = num;
		}
		score += num;
		if(i>=3)
		{
			printf("%.2f\n",(score-maxn-minn)*1.0/(i-2));
		}
	}
}
*/
/*
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int a[111111];
long long b[111111];
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	for(int i=n-2;i<=n;i++)
	{
		a[i] = 1;
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &b[i]);
	}
	long long maxn = 0;
	do
	{
		long long sum = 0;
		long long figure = 0;
		for(int i=1;i<=n;i++)
		{
			if(a[i])
			{
				sum += b[i];
				figure += b[i]%k;
			}
		}
		if(figure%k==0)
		{
			maxn = max(sum,maxn);
		}
	}while(next_permutation(a+1,a+1+n));
	printf("%lld", maxn);
	return 0;
}
*/
/*
#include<iostream>
using namespace std;

int n, r, ans;  //r个数进行全排列  ans为排列个数 
int book[10]; //标记是否被访问
int a[10]; //记录每次的排列数据

void DFS(int cur){ //从{1,2,...,n}中取r个数构成的排列
	if(cur == r){ //已经去够r个数 
		for(int i = 0; i < cur; i++){ //循环输出 
			cout << a[i] << ' ';
		}
		cout << endl;
		ans++;  //数量加1 
		return ;
	}
	
	for(int i = 0; i <n; i++){  //循环遍历保证不漏 
		if(!book[i]){ //若没访问过 
			book[i] = 1; //标记已访问
			a[cur] = i+1; //i符合条件加入
			DFS(cur + 1); //寻找一个数字 
			book[i] = 0; //回溯：清除标记
		}
	} 
} 

int main(){
	cin >> n >> r;
	DFS(0);
	
	cout << ans << endl;
	return 0; 
}
*/
/*
#include<iostream>//[NOIP2001 提高组] 一元三次方程求解https://www.luogu.com.cn/problem/P1024
#include<iomanip>
using namespace std;
int main()
{
	double a;
	double b;
	double c;
	double d;
	cin >> a >> b >> c >> d;
	for(double i=-100;i<=100;i+=0.001)
	{
		double j = i+0.001;//答案保留两位小数，因此步长设为0.01？尚且不清楚
		if((i*i*i*a+i*i*b+i*c+d)*(j*j*j*a+j*j*b+j*c+d)<0)//依据题目末尾提示
		{
			cout << fixed << setprecision(2) << i << ' ';
		}
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	typedef int* str;
	str a;
	int b = 5;
	a = &b;
	cout << a << "\n";
	int c[10] = {5,4,3,2,1};
	int *p;
	p = c;
	cout << *p << "\n";

	return 0;
}
*/
/*
#include<iostream>//[NOI Online #3 提高组] 水壶 https://www.luogu.com.cn/problem/P6568
using namespace std;
int a[1111111];//两个数组用以求前缀和
int num[1111111];//元素做大值为1e6个1e3相加，未超过21亿，可以使用int
int main()
{
	int n;
	int k;
	cin >> n >> k;
	for(int i=1;i<=n;i++)
	{
		cin >> num[i];
	}
	for(int i=1;i<=n;i++)
	{
		a[i] = a[i-1] + num[i];//计算前缀和
	}
	int maxn = 0;
	for(int i=1;i+k<=n;i++)
	{
		int sum = a[i+k]-a[i-1];//选定的k个数相加
		maxn = max(maxn,sum);//最大水量
	}
	cout << maxn;
	return 0;
}
*/
/*
#include<iostream>//母舰 https://www.luogu.com.cn/problem/P2813
#include<algorithm>
using namespace std;
int a[111111];//储存防御系统的数值
int b[111111];//储存攻击系统的数值
int main()
{
	int m;
	int n;
	cin >> m >> n;
	for(int i=0;i<m;i++)
	{
		cin >> a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin >> b[i];
	}
	sort(a,a+m);
	sort(b,b+n);//排序，尽量让“小数值”的攻击系统击破防御系统
	int flag = 0;
	for(int i=0;i<n;i++)
	{
		if(a[flag]==0)//防御系统值为0;
		{
			flag++;
		}
		if(a[flag]<b[i] && a[flag]!=0)
		{
			b[i]=0;//攻击系统数值归0
			flag++;
		}
	}
	if(flag<m)
	{
		cout << 0;//如果未能攻破所有防御系统，输出0
		return 0;
	}
	int sum;
	for(int i=0;i<n;i++)
	{
		sum += b[i];
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//营养膳食https://www.luogu.com.cn/problem/P2095
#include<algorithm>
using namespace std;
int kind[111];//储存每种食物可以吃的最大份数
struct food
{
	int fat;//定义脂肪
	int num;//定义食物种类
}f[222];
bool cmp(food x, food y)
{
	return x.fat > y.fat;
}
int main()
{
	int n;
	int m;
	int k;
	cin >> n >> m >> k;
	for(int i=1;i<=k;i++)
	{
		cin >> kind[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin >> f[i].fat >> f[i].num;
	}
	sort(f+1,f+n+1,cmp);//从大到小排列
	int f_sum = 0;//总脂肪数
	int k_sum = 0;//总使用份数
	for(int i=1;i<=n;i++)
	{
		if(kind[f[i].num]>0 && k_sum!=m)//k_sum==m代表已经吃饱
		{
			kind[f[i].num]--;
			k_sum++;
			f_sum += f[i].fat;
		}
	}
	cout << f_sum;
	return 0;
}
*/
/*
#include<iostream>//[USACO1.3]滑雪课程设计Ski Course Designhttps://www.luogu.com.cn/problem/P3650
#include<algorithm>
using namespace std;
int a[1111];
int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	int maxn = 1e9;
	for(int i=a[i];i<=a[n];i++)//从最小高度开始枚举
	{
		int sum = 0;
		for(int j=1;j<=n;j++)
		{
			if(a[j]<i)
			{
				sum += (i-a[j])*(i-a[j]);//计算当山峰最低高度为i时，把其他山峰高度增减至(i,i+17)时的总花费金额
			}
			else if(a[j]>i+17)
			{
				sum += (a[j]-i-17)*(a[j]-i-17);
			}
		}
		maxn = min(sum,maxn);//取最小值
	}
	cout << maxn;
	return 0;
}
*/
/*
#include<iostream>//独木桥https://www.luogu.com.cn/problem/P1007
#include<string>
using namespace std;
int main()
{
	int s;
	cin >> s;//定义桥长度
	int n;
	cin >> n;//定义人数
	int maxn = 0;//单个人走出桥最长时间
	int minn = 0;//单个人走出桥最短时间
	int maxe = 0;//全部人走出桥最长时间
	int mine = 0;//全部人走出桥最短时间
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		maxn = max(x,s-x+1);
		minn = min(x,s-x+1);
		maxe = max(maxe,maxn);
		mine = max(mine,minn);//尚且不能用文字进行较好解释
	}
	cout << mine << ' ' << maxe;
	return 0;
}
*/
/*
#include<iostream>//[NOIP2014 普及组] 珠心算测验https://www.luogu.com.cn/problem/P2141
using namespace std;
int a[101];
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			int s = 0;
			for(int k=j+1;k<n;k++)
			{
				if(a[i]==a[j]+a[k])
				{
					sum++;
					s++;
					break;
				}
			}
			if(s==1)
			{
				break;
			}
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//[USACO08DEC]Hay For Sale Shttps://www.luogu.com.cn/problem/P2925
using namespace std;//一维背包问题
#include <algorithm>
int a[55555];
int b[5555];
int main()
{
	int c;
	int h;
	cin >> c >> h;
	for(int i=0;i<h;i++)
	{
		cin >> b[i];
	}
	for(int i=0;i<h;i++)
	{
		for(int j=c;j>=b[i];j--)
		{
			a[j] = max(a[j],a[j-b[i]]+b[i]);
		}
		if(a[c]==c)
		{
			cout << c;
			return 0;
		}
	}
	cout << a[c];
	return 0;
}
*/
/*
#include<iostream>//【深基12.例1】部分背包问题https://www.luogu.com.cn/problem/P2240
#include<algorithm>//该题实际上考察的是贪心算法
#include<cstdio>
using namespace std;
struct value
{
	int m;//定义金币质量
	int v;//定义金币价值
	double per;//定义单位价值
}a[111];
bool cmp(value x, value y)
{
	return x.per>y.per;
}
int main()
{
	int n;
	int t;
	cin >> n >> t;
	for(int i=0;i<n;i++)
	{
		cin >> a[i].m >> a[i].v;
		a[i].per = a[i].v*1.0/a[i].m;
	}
	sort(a,a+n,cmp);//按单位价值从大到小排序
	double sum = 0;//计算总价值
	for(int i=0;i<n;i++)//从单位价值最大的金币堆开始拿
	{
		if((t-a[i].m)>=0)
		{
			sum += a[i].v;//如果背包能装下这堆，则全拿
			t -= a[i].m;
		}
		else
		{
			sum += a[i].per*t;//背包装不下这一堆金币，则用这堆金币的一部分装满背包
			printf("%.2f", sum);
			return 0;
		}
	}
	printf("%.2f", sum);
	return 0;
}
*/
/*
#include<iostream>//排队接水https://www.luogu.com.cn/problem/P1223
#include<algorithm>
#include<cstdio>
using namespace std;
struct people
{
	int time;//定义等待时间
	int num;//定义序号
}a[1111];
bool cmp(people x, people y)
{
	return x.time < y.time;
}
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i].time;
		a[i].num = i;
	}
	sort(a,a+n,cmp);//按等待时间从小到大排序
	double sum = 0;//计算总时间
	for(int i=n-1;i>=1;i--)
	{
		for(int j=i-1;j>=0;j--)
		{
			sum += a[j].time;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout << a[i].num+1 << ' ';
	}
	printf("\n%.2f", sum/n);
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	int s;
	cin >> n >> s;
	long long sum = 0;
	int unit = 0;
	for(int i=0;i<n;i++)
	{
		int c;
		int y;
		cin >> c >> y;
		if(i==0)
		{
			unit = c;
		}
		else
		{
			unit = min(unit+s,c);
		}
		sum += unit*y;
	}
	cout << sum;
	return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 7;
ll a[maxn], b[maxn];
int main()
{
	ll n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	sort(a, a+n);
	int t = 0;
	ll ans = a[n-1] * a[n-1];
	for(int i=n-1, j = 0; i>j; i--, j++)
	{
		b[t++] = a[i];
		b[t++] = a[j];
	}
	if(n & 1) b[t++] = a[n / 2];
	for(int i=1; i<t; i++)
	{
		ans += (b[i] - b[i-1]) * (b[i] - b[i-1]);
	}
	cout << ans << "\n";
	return 0;
}
*/
/*
#include<iostream>//[NOIP2007 普及组] 纪念品分组https://www.luogu.com.cn/problem/P1094
#include<algorithm>
using namespace std;
int a[10];
int main()
{
	int w;//定义价格上限
	int n;//定义总件数
	cin >> w >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+n+1);//从小到大排序
	int sum = 0;
	for(int i=1,j=n;i<=j;i++,j--)
	{
		if(a[j]+a[i]>w)
		{
			sum++;
			i--;//尚且无法用语言描述，请结合题目案例一理解这句话
		}
		else
		{
			sum++;
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>[USACO1.3]混合牛奶 Mixing Milkhttps://www.luogu.com.cn/problem/P1208
#include<algorithm>//与P2240思路一致
using namespace std;
struct milchigs
{
	int unit;
	int milk;
}a[1111111];
bool cmp(milchigs x, milchigs y)
{
	return x.unit < y.unit;
}
int main()
{
	int sum;
	int n;
	cin >> sum >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i].unit >> a[i].milk;
	}
	sort(a,a+n,cmp);
	int money = 0;
	for(int i=0;i<n;i++)
	{
		if((sum-a[i].milk)>=0)
		{
			sum -= a[i].milk;
			money += a[i].unit*a[i].milk;
		}
		else
		{
			money += sum*a[i].unit;
			cout << money;
			return 0;
		}
	}
	cout << money;
	return 0;
}
*/
/*
#include<iostream>//学生分组https://www.luogu.com.cn/problem/P1109
using namespace std;
int a[55];
int main()
{
	int n;
	cin >> n;
	double sum = 0;//计算总人数
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];//输入每组人数
		sum += a[i];
	}
	int left;//定义下限
	int right;//定义上限
	cin >> left >> right;
	if(sum/n<left || sum/n>right)
	{
		cout << -1;//人数平均值在上下限范围之外则不可能完成分组
		return 0;
	}
	int num1 = 0;
	int num2 = 0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]<left)
		{
			num1 += left-a[i];//如果该组人数小于下限，计算需要往该组调入的人数
		}
		if(a[i]>right)
		{
			num2 += a[i]-right;//如果该组人数大于上限，计算需要往该组调出的人数
		}
	}
	cout << max(num1, num2);//输出二者最大值
	return 0;
}
*/
/*
#include<iostream>//陶陶摘苹果（升级版https://www.luogu.com.cn/problem/P1478
#include<algorithm>
using namespace std;
struct apple
{
	int x;//定义苹果高度
	int y;//定义摘下这个苹果所花的力气
}a[5555];
bool cmp(apple r, apple t)
{
	return r.y < t.y;
}
int main()
{
	int n;
	int s;
	cin >> n >> s;
	int h;
	int b;
	cin >> h >> b;
	for(int i=0;i<n;i++)
	{
		cin >> a[i].x >> a[i].y;
	}
	sort(a,a+n,cmp);//按所花力气从小到大排序
	int sum = 0;//定义能摘到苹果的数量
	for(int i=0;i<n;i++)
	{
		if((s-a[i].y)>=0)//如果力气还没有用完
		{
			if(h+b >= a[i].x)
			{
				sum++;
				s -= a[i].y;
			}
		}
		else
		{
			cout << sum;//力气用完就输出答案
			return 0;//提前结束程序
		}
	}
	cout << sum;//摘下了全部苹果
	return 0;
}
*/
/*
#include<iostream>//[MtOI2019]永夜的报应https://www.luogu.com.cn/problem/P5514
using namespace std;
int main()
{
	int n;
	cin >> n;
	int num;
	cin >> num;
	for(int i=0;i<n-1;i++)//规律：a^=b <= a+b
	{
		int figure;
		cin >> figure;
		num ^= figure;
	}
	cout << num;
	return 0;
}
*/
/*
#include<iostream>//[传智杯 #3 决赛] 商店https://www.luogu.com.cn/problem/P8837
#include<algorithm>
using namespace std;
unsigned int a[111111];
unsigned int b[111111];
int main()
{
	int n;
	int m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];//输入n个人的钱
	}
	for(int i=1;i<=m;i++)
	{
		cin >> b[i];输入m个物品的价格
	}
	sort(a+1,a+n+1);//从小到大排序
	sort(b+1,b+m+1);
	int sum = 0;//定义能买到物品的人的数量
	for(int i=1,j=1;i<=n&&j<=m;i++,j++)
	{
		if(a[i]>=b[j])
		{
			sum++;
		}
		else
		{
			j--;//每经历一次循环j的值会加1,该语句为了阻止j值的增加
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//下题的另一种思路,但存在尚未被解释的错误
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int sum = 0;
		int len = 0;//定义原始字符串长度
		cin >> len;
		string a;//定义原始回文字符串
		string b;//定义被删除了一个字符的字符串
		cin >> a;
		for(int h=0;h<len;h++)
		{
			b = a;
			b[h] = '#';//删除第b[h]个字符
			int flag = 0;
			for(int j=0,k=len-1;j<k;j++,k--)
			{
				if(b[j]=='#')
				{
					j++;//通过略过被标记的字符，达到看似是删除字符的效果
				}
				else if(b[k]=='#')
				{
					k--;
				}
				if(b[j]!=b[k])//如果两个字符不一样
				{
					flag++;//添加标记,代表该字符串不是回文字符串
					break;
				}
			}
			if(!flag)
			{
				sum++;
			}
		}
		cout << sum << '\n';
	}
	return 0;
}
*/
/*
#include<iostream>//Palindromic Indices https://www.luogu.com.cn/problem/CF1682A
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int sum = 1;
		int len = 0;
		cin >> len;
		string str;
		cin >> str;//输入字符串
		int j = len/2;//定义字符串中间位置
		for(int k=j+1;k<len;k++)
		{
			if(str[k]==str[j])//查找str[j]右侧有几个字符与之一致
			{
				sum++;
			}
			else
			{
				break;
			}
		}
		for(int k=j-1;k>=0;k--)
		{
			if(str[k]==str[j])//查找str[j]左侧有几个字符与之一致
			{
				sum++;
			}
			else
			{
				break;
			}
		}
		cout << sum << '\n';
	}
	return 0;
}
*/
/*
#include<iostream>//公路维修问题https://www.luogu.com.cn/problem/P2242
#include<algorithm>
using namespace std;
int a[15555];
int b[15555];
int main()
{
	int n;
	int m;
	int sum = 0;
	cin >> n >> m >> a[0];
    for(int i=1;i<n;i++)
	{
        cin >> a[i];
        b[i-1]=a[i]-a[i-1];
    }
	sum = a[n-1]-a[0];//计算从第一个坑到最后一个坑的距离
    sort(b,b+n,greater<int>());//相邻两个坑之间的距离从大到小排列
    for(int i=0;i<m-1;i++)//对m处地段管制,则要将第一个坑到最后一个坑这段路划分m-1次
	{
		sum -= b[i];减去两个坑之间距离最大的m-1个距离
	}
	cout << sum+m;
    return 0;
}
*/
/*
#include<iostream>鸿山洞的灯https://www.luogu.com.cn/problem/P1610
#include<algorithm>
using namespace std;
int a[111111];
int main()
{
	int n;
	int dist;
	cin >> n >> dist;
	int sum = 0;//定义删除的灯数
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+n+1);//从小到大排序
	for(int i=2;i<n;i++)
	{
		if(a[i+1]-a[i-1]<=dist)
		{
			a[i] = a[i-1];//让a[i]的左侧一直保持是开着的并且离它最近的灯的坐标
			sum++;
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//美元汇率https://www.luogu.com.cn/problem/P1968
#include<cstdio>
using namespace std;
int a[111];
int main()
{
    int n;
    cin >> n;
	double sum = 1;
    for(int i=0;i<n;i++)
	{
        cin >> a[i];//储存汇率
    }
    for(int i=0;i<n-1;i++)
	{
        if(a[i]>a[i+1])//如果今天的美元比明天值钱
		{ 
            sum *= a[i]*1.0/a[i+1]; 
        } 
    }
	printf("%.2f", sum*100);//汇率乘以100
    return 0;
}
*/
/*
#include<iostream>// 坚果保龄球https://www.luogu.com.cn/problem/P1413
#include<algorithm>
using namespace std;
struct zombie
{
	int row;//定义僵尸出现的行数
	int time;//定义僵尸出现的时间
}z[11];
bool cmp(zombie x, zombie y)
{
	if(x.row==y.row)
	{
		return x.time < y.time;
	}
	else
	{
		return x.row < y.row;
	}
}
int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> z[i].row >> z[i].time;//输入行数和时间
	}
	sort(z+1,z+n+1,cmp);//将行数和时间都从小到大排序，行数优先
	int sum = 0;//定义需要坚果数
	int down;//定义每一行第一次出现僵尸的时间
	for(int i=1;i<=n;i++)
	{
		if(z[i].row!=z[i-1].row)
		{
			sum++;//每次求另一行需要坚果数时，改行至少需要一个坚果
			down = z[i].time;//该行第一次出现僵尸的时间
		}
		if(z[i+1].time-down>=60)
		{
			sum++;//如果该行出现两个僵尸出现时间间隔超过59秒，则该行需增加一个坚果
			down = z[i+1].time;//刷新时间
		}
	}
	cout << sum;//输出坚果数
	return 0;
}
*/
/*
#include<iostream>//计算方差
#include<cmath>
using namespace std;
double a[6];
int main()
{
	double sum = 0;
	double num = 0;
	for(int i=1;i<=5;i++)
	{
		cin >> a[i];
		num += a[i];
	}
	num /= 5;
	cout << num << endl;
	for(int i=1;i<=5;i++)
	{
		sum += (a[i]-num)*(a[i]-num);
	}
	cout << sqrt(sum/4);
	return 0;
}
*/
/*
#include<iostream>//天然气井https://www.luogu.com.cn/problem/P1708
#include<algorithm>
using namespace std;
struct fuel
{
	int x;
	int y;
}a[55555],b[55555];
bool cmp(fuel a, fuel b)
{
	if(a.x == b.x)
	{
		return a.y>b.y;
	}
	else
	{
		return a.x<b.x;
	}
}
int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i].x >> a[i].y;
	}
	for(int i=1;i<=n;i++)
	{
		cin >> b[i].x >> b[i].y;
	}
	sort(a+1,a+n+1,cmp);
	sort(b+1,b+n+1,cmp);
	long long sum = 0;//必须long long
	for(int i=1;i<=n;i++)
	{
		sum += (b[i].x-a[i].x) + (a[i].y-b[i].y);
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//Salehttps://www.luogu.com.cn/problem/CF34B
#include<algorithm>
using namespace std;
int a[111];
int main()
{
	int n;
	int m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	int sum = 0;
	for(int i=1;i<=m;i++)
	{
		if(a[i]<0)//只记录负数数值价格
		{
			sum += 0-a[i];
		}
		else break;
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//リモコンhttps://www.luogu.com.cn/problem/AT_arc001_2
#include<cmath>
using namespace std;
int main()
{
	int a;
	int b;
	cin >> a >> b;
	int num = a-b;//定义差值
	num = abs(num);
	int sum = 0;
	while(num!=0)
	{
		if(num>=8)
		{
			num = abs(num);
			num -= 10;
			sum++;
		}
		else if(num>=3)
		{
			num = abs(num);
			num -= 5;
			sum++;
		}
		else
		{
			num = abs(num);
			num -= 1;
			sum++;
		}
	}
	cout << sum << endl;//必须加换行符
	return 0;
}
*/
/*
#include<iostream>// [NOIP2013 提高组] 积木大赛https://www.luogu.com.cn/problem/P1969
using namespace std;//不开O2,有测试点超时
int a[111111];
int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];//读入数据
	}
	long long sum = 0;//防止爆数据
	for(int i=1;i<=n;i++)
	{
		while(a[i])
		{
			for(int j=i;j<=n;j++)
			{
				if(a[j])
				{
					a[j]--;
				}
				else break;
			}
			sum++;
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//[USACO09MAR]Sand Castle Shttps://www.luogu.com.cn/problem/P2945
#include<algorithm>
using namespace std;
int c1[25555];//每个城齿现有高度
int c2[25555];//调整后城齿的高度，该高度没有顺序而言
int main()
{
	int n;
	int add;//增加一个单位高度所需钱
	int reduce;//减少一个单位所需钱
	cin >> n >> add >> reduce;
	for(int i=1;i<=n;i++)
	{
		cin >> c1[i] >> c2[i];
	}
	sort(c1+1,c1+n+1);//从小到大排序
	sort(c2+1,c2+n+1);
	unsigned int sum = 0;//定义总耗费的资金
	for(int i=1;i<=n;i++)
	{
		if(c1[i]>c2[i])
		{
			sum += (c1[i]-c2[i])*reduce;
		}
		else if(c1[i]<c2[i])
		{
			sum += (c2[i]-c1[i])*add;
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//燃料搜集https://www.luogu.com.cn/problem/P7700
#include<algorithm>
using namespace std;
struct star
{
	int a;//定义去这个星球耗费的燃料
	int b;//定义定义去这个星球可获得的燃料(该星球可挖掘燃料-去这里需耗费的燃料)
}s[111111];
bool cmp(star x, star y)
{
	return x.a < y.a;
}
int main()
{
	int n;
	int start;
	cin >> n >> start;
	int sum_fuel;//定义总可获得的燃料
	int j = 0;
	for(int i=1;i<=n;i++)
	{
		int ai;//该星球可挖掘燃料
		int bi;//去该星球耗费的燃料
		cin >> ai >> bi;
		if(i==start)
		{
			sum_fuel = ai;//定义初始已获得的燃料
		}
		else if(ai-bi>=0)
		{
			j++;
			s[j].a = bi;
			s[j].b = ai-bi;
		}
	}
	sort(s+1,s+j+1,cmp);//按需耗费的燃料数从小到大排序,并且s[i].b都为正数
	int sum = 1;
	for(int i=1;i<=j;i++)
	{
		if(sum_fuel-s[i].a>=0)//如果飞船所剩燃料足够去这个星球
		{
			sum_fuel += s[i].b;
			sum++;
		}
		else break;
	}
	cout << sum_fuel << endl << sum;
	return 0;
}
*/
/*
#include<iostream>// 删数问题https://www.luogu.com.cn/problem/P1106
#include<string>
using namespace std;
int main()
{
    string str;
	int n;//定义要删除的数字个数
	cin >> str >> n;
	int len = str.length();//获取字符串长度
	for(int i=0;i<n;i++)//删除n个数字
	{
		for(int j=0;j<len;j++)
		{
			if(str[j]>str[j+1])//如果该位数字比下一位大
			{
				for(int k=j;k<len;k++)
				{
					str[k] = str[k+1];//就将后面的数字全部往前移动一位,达到删除该数字的目的
				}
				len--;//删除后,字符串长度减少
				break;
			}
		}
	}
	int flag = 0;
	for(int i=0;i<len;i++)
	{
		if(str[i]!='0'||flag!=0)//如果该数字不是前导0
		{
			cout << str[i];//输出该数字
			flag++;
		}
	}
	if(flag==0)//如果字符串全是0
	{
		cout << 0;//只需输出输出一个0
	}
    return 0;
} 
*/
/*
#include<iostream>//[NOIP2002 普及组] 过河卒https://www.luogu.com.cn/problem/P1002
#include<algorithm>
using namespace std;
long long dp[30][30];//储存到dp[i][j]的路线的条数
int main()
{
	int mx[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
	int my[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
	int x, y;//定义马的位置
	int a, b;//定义卒目标位置
	cin >> a >> b >> x >> y;
	dp[x][y] = -1;
	for(int i=0;i<8;i++)
	{
		if(x+mx[i]>=0 && x+mx[i]<=a && y+my[i]>=0 && y+my[i]<=b)
		{
			dp[x+mx[i]][y+my[i]] = -1;//标记马走一步可抵达的八个坐标，卒不能经过这里
		}
	}
	for(int i=0;i<=a;i++)
	{
		if(dp[i][0]!=-1)
		{
			dp[i][0] = 1;//第1列全部标记为只有一条路线可以走
		}
		else
		{
			for(int j=i;j<=b;j++)
			dp[j][0] = 0;
			break;
		}
	}
	for(int i=0;i<=b;i++)
	{
		if(dp[0][i]!=-1)
		{
			dp[0][i] = 1;//第1行全部标记为只有一条路线可以走
		}
		else
		{
			for(int j=i;j<=b;j++)
			dp[0][j] = 0;
			break;
		}
	}
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			if(dp[i][j]==-1)
			{
				dp[i][j] = 0;//遇到马或马可抵达的八个坐标就将0赋给该点坐标，表示不能到该坐标
			}
			else
			{
				dp[i][j] = dp[i-1][j]+dp[i][j-1];//核心规律
			}
		}
	}
	cout << dp[a][b];//输出去目标坐标路线的条数
	return 0;
}
*/
/*
#include<iostream>//[NOI2000] 青蛙过河https://www.luogu.com.cn/problem/P1244
#include<cmath>
using namespace std;
int main()
{
	int n;
	int m;
	cin >> n >> m;
	cout << (m+1)*pow(2,n);//找规律
	return 0;
}
*/
/*
#include<iostream>//上学路线https://www.luogu.com.cn/problem/P1958
#include<algorithm>
using namespace std;
long long dp[20][20];//储存到dp[i][j]的路线的条数
int main()
{
	int a, b;
	int n;
	cin >> a >> b >> n;
	for(int i=0;i<n;i++)
	{
		int x, y;
		cin >> x >> y;
		dp[x][y] = -1;
	}
	for(int i=1;i<=a;i++)
	{
		if(dp[i][1]!=-1)
		{
			dp[i][1] = 1;//第1列全部标记为只有一条路线可以走
		}
		else
		{
			for(int j=i;j<=b;j++)
			dp[j][1] = 0;
			break;
		}
	}
	for(int i=1;i<=b;i++)
	{
		if(dp[1][i]!=-1)
		{
			dp[1][i] = 1;//第1行全部标记为只有一条路线可以走
		}
		else
		{
			for(int j=i;j<=b;j++)
			dp[1][j] = 0;
			break;
		}
	}
	for(int i=2;i<=a;i++)
	{
		for(int j=2;j<=b;j++)
		{
			if(dp[i][j]==-1)
			{
				dp[i][j] = 0;
			}
			else
			{
				dp[i][j] = dp[i-1][j]+dp[i][j-1];//核心规律
			}
		}
	}
	cout << dp[a][b];//输出去目标坐标路线的条数
	return 0;
}
*/
/*
#include<iostream>//动态规划——数字金字塔
using namespace std; 
int a[1111][1111];//储存点(i,j)的数值
int dp[1111][1111];//存储点(i,j)到顶端路径的最大和
//递推法，从上往下计算
int main()
{
	int n;
	cin >> n;
	for( int i = 1; i <= n; i++ )
	{
		for( int j = 1; j <= i; j++ )
		{
			cin >> a[i][j];
		}
	}
	for( int i = 1; i <= n; i++ )
	{    
		for( int j = 1; j <= i; j++ )
		{
			dp[i][j] = max(dp[i-1][j-1],dp[i-1][j]) + a[i][j];
		}
	}
	int sum = 0;
	for( int j = 1; j <= n; j++ )
	{
		sum = max(sum,dp[n][j]);
	}
	cout << sum;
	return 0;
}
*/
/*
#include <iostream>
#include <algorithm>
using namespace std;
int D[20][20];//储存点(i,j)的数值
int n;
int maxsum[20][20];//存储点(i,j)到底边路径的最大和

// 递归法
// int MaxSum(int i,int j)
// {
//     
//     if( maxsum[i][j] != -1 )
// 		return maxsum[i][j];
// 		//最后一行
//     if(i == n-1)
//         maxsum[i][j] = D[n-1][j];
//     else{
//         maxsum[i][j] =max(MaxSum(i+1,j+1),MaxSum(i+1,j))+D[i][j];
//     }
//     return maxsum[i][j];
// }

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++)
        for(int j = 0;j <= i;j++)
            {cin >> D[i][j];
            maxsum[i][j] = -1; }
   //递推法，从下往上计算
    for(int j = 0;j < n;j++)
        maxsum[n-1][j] = D[n-1][j];
    for(int i = n-2;i>=0;i--)
        for(int j = 0;j <=i;j++)
            maxsum[i][j] = max(maxsum[i+1][j],maxsum[i+1][j+1])+D[i][j];
    cout << maxsum[0][0];
    return 0;
}
*/
/*
#include<iostream>//测试文件系统
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int prime(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	FILE *fp;
	if(!(fp = fopen("prime.tex","w")))
	{
		cout << "File open error!\n";
		exit(0);
	}
	for(int i=1;i<=500;i++)
	{
		if(prime(i)!=0)
		{
			fprintf(fp,"%d\n",i);
		}
	}
	if(fclose(fp))
	{
		cout << "Can not close the file\n";
		exit(0);
	}
	return 0;
}
*/
/*
#include<iostream>//三角形计数https://www.luogu.com.cn/problem/P2807
using namespace std;//需要自己数学规律
int a[501];
int b[501] = {0,2};//三个数组的含义难以用汉字解释
int c[501];
int main()
{
	int n;
	cin >> n;
	for(int i=1,j=6;i<=500;i++,j+=i+2)
	{
		a[i] = a[i-1]+j;
	}
	for(int i=1,k=2;k<=500;i++)
	{
		for(int j=1;j<=2;j++,k++)
		{
			b[k] = b[k-1]+i+1;
		}
	}
	for(int i=1;i<=500;i++)
	{
		c[i] = c[i-1]+b[i];
	}
	for(int i=0;i<n;i++)
	{
		int num;
		cin >> num;
		int sum = 0;
		if(num==1)
		{
			cout << 1 << "\n";
		}
		else if(num==2)
		{
			cout << 5 << "\n";
		}
		else
		{
			cout << 5+a[num-2]+c[num-2] << "\n";
		}
	}
	return 0;
}
*/
/*
#include<iostream>//斐波那契数列（升级版）https://www.luogu.com.cn/problem/P2626
using namespace std;
#define mod 2147483648
int main()
{
	int n;
	cin >> n;
	long long num1 = 1;
	long long num2 = 1;
	long long num = 0;
	for(int i=3;i<=n;i++)
	{
		num = num1+num2;
		num1 = num2;
		num2 = num;
	}
	num %= mod;
	cout << num << '=';
	for(int i=2;i<=num;i++)//该解法会超时，前往洛谷查看另一解法
	{
		if(num%i==0)
		{
			cout << i;
			num /= i;
			if(num !=1 )
			{
				cout << "*";
			}
			i--;
		}
	}                
	return 0;
}
*/
/*
#include<iostream>//数的计算https://www.luogu.com.cn/problem/P1028
using namespace std;
int a[1111];
int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{ 
		for(int j=1;j<=i/2;j++)
		{
			a[i]+=a[j]; 
		}
		a[i]++; 
	}
	cout << a[n];
return 0;
}
*/
/*
#include<iostream>幂次方https://www.luogu.com.cn/problem/P1010
#include<cmath>
using namespace std;
int num;
void dfs(int n)
{
	for(int i=14;i>=0;i--)
	{
		if(pow(2,i)<=n)
		{
			if(i>1)
			{
				cout << "2(";
				dfs(i);
				cout << ")";
			}
			else if(i==1)
			{
				cout << 2;
			}
			else if(i==0)
			{
				cout << "2(0)";
			}
			n -= pow(2,i);
			if(n!=0)
			{
				cout << "+";
			}
		}
	}
}
int main()
{
	cin >> num;
	dfs(num);
	return 0;
}
*/
/*
#include<iostream>//栈https://www.luogu.com.cn/problem/P1044
using namespace std;//未知题解
int f[20][20];
int n;
int main()
{
	cin >> n;
    for(int i=0;i<=n;i++)
	{
		f[i][0]=1;
	}
    for(int j=1;j<=n;j++)
		for(int i=0;i<=n-j;i++)
        {
			if(i>=1) 
			{
				f[i][j]=f[i-1][j]+f[i+1][j-1];
			}
			else if(i==0)
			{
				f[i][j]=f[i+1][j-1];
			}
        }
		cout << f[0][n];
    return 0;
}
*/
/*
#include<iostream>//兔八哥与猎人https://www.luogu.com.cn/problem/P1170
#include<cmath>
using namespace std;
int main()
{
	int n;
	int x1,y1;//定义猎人坐标
	int x2,y2;//定义兔子坐标
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int flag = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		int num1,num2;
		num1 = abs(x1-x2);//横坐标差值
		num2 = abs(y1-y2);//定义纵坐标差值
		if(num1==0||num2==0)//如果在同一行或同一列
		{
			if(num2!=1||num1!=1)//如果猎人与兔子距离不为1
			{
				cout << "yes" << "\n";
			}
			else
			{
				cout << "no" << "\n";
			}
			flag++;//表示该组数据已经经过判断，避免后面进行二次测试
		}
		while(num1!=num2&&flag==0)
		{
			if(num1>num2)
			{
				num1 -= num2;
			}
			else
			{
				num2 -= num1;
			}
		}
		//求出最大公约数
		if(!flag)
		{
			if(num1!=1)//如果猎人和兔子的横纵坐标成比例，那么他们直接绝对隔着数
			{
				cout << "yes" << "\n";
			}
			else
			{
				cout << "no" << "\n";
			}
		}
	}
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int t = n/m;
	int sum = 0;
	for(int i=1;i<=t;i++)
	{
		for(int j=i;j<n/2;j++)
		{
			for(int k=j;k<=n;k++)
			{
				if(i+j+k==n)
				{
					sum++;
				}
			}
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//数的划分https://www.luogu.com.cn/problem/P1025
using namespace std;
int sum = 0;//定义划分的种类数
void dfs(int start,int n1,int k1)
{
	if(k1==1)
	{
		sum++;
		return;
	}
	for(int i=start;i<=n1/k1;i++)//n1/k1代表当前循环最大值，避免不必要 循环测试
		dfs(i,n1-i,k1-1);//n1-i代表可划分的总数值还剩多少，k-1代表需要将剩余数值划分为k1-1个数
}
int main()
{
	int n, k;//n个数划分成k组
	cin >> n >> k;
	dfs(1,n,k);
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//Hanoi 双塔问题https://www.luogu.com.cn/problem/P1096
using namespace std;//高精度次幂计算
//汉诺塔公式,移动n层需要2的n次方减1次搬运，双塔在此基础上再乘以2
int a[9999];
int main()
{
	int n;
	cin >> n;
	a[1]=1;
	int x=0,k=1; 	//x表示需要进的数,k表示位数
	for(int i=1; i<=n; i++)
	{
		int x=0;
		for(int j=1; j<=k; j++)
		{
			a[j]=a[j]*2+x;
			x=a[j]/10;
			a[j]%=10;
			if(x!=0&&j==k) 	//当计算到最高位并且有进位时,位数加一
			{
				k++;
			}
		}
	}
	a[1] -= 1;//以上步骤计算2的n次方-1
	for(int j=1; j<=k; j++)
	{
		a[j]=a[j]*2+x;
		x=a[j]/10;
		a[j]%=10;
		if(x!=0&&j==k) 	//当计算到最高位并且有进位时,位数加一
		{
			k++;
		}
	}//再乘一次2
	for(int i=k;i>=1;i--)
	{
		cout << a[i];
	}
	return 0;
} 	
*/
/*
#include<iostream>//跳马问题https://www.luogu.com.cn/problem/P1644
using namespace std;
int a[50][2];//二维数组a[][2]储存了马能抵达n,m处所经过的坐标
int x[4]={2,1,-1,-2};//四种移动规则(按照顺时针方向)
int y[4]={1,2,2,1};
int sum = 0;//定义可行路线的总数
// void print(int n)
// {
//     t++;
//     cout<<"t="<<t<<endl;
//     for(int i=1;i<=n;i++)
//         cout<<a[i][0]<<","<<a[i][1]<<"    ";
//     cout<<endl;
// }
void search(int i,int n1, int m1)
{
    for(int j=0;j<=3;j++)//往4个方向跳
    {
        if(a[i-1][0]+x[j]>=0&&a[i-1][0]+x[j]<=n1&&a[i-1][1]+y[j]>=0&&a[i-1][1]+y[j]<=m1)//如果没有越界
        {
            a[i][0]=a[i-1][0]+x[j];//保存当前马的位置
            a[i][1]=a[i-1][1]+y[j];
            if(a[i][0]==n1 && a[i][1]==m1)
			{
				//print(i);
				sum++;
			}
            else search(i+1,n1,m1);
			//无须回溯，因为马
        }
    }
}
int main()
{
	int n, m;//定义目标坐标
	cin >> n >> m;
    search(1,n,m);
	cout << sum;
}
*/
/*
#include<iostream>// 放苹果https://www.luogu.com.cn/problem/P2386
using namespace std;//与“数的划分”(P1025)思路一致
int sum = 0;//定义划分的种类数
void dfs(int start,int n1,int k1)
{
	if(k1==1)
	{
		sum++;
		return;
	}
	for(int i=start;i<=n1/k1;i++)//n1/k1代表当前循环最大值，避免不必要的循环测试
		dfs(i,n1-i,k1-1);//n1-i代表可划分的总数值还剩多少，k-1代表需要将剩余数值划分为k1-1个数
}
int main()
{
	int t;//定义t组数据
	cin >> t;
	for(int i=0;i<t;i++)
	{
		int n, k; //n个苹果划分成k组，组里的苹果数可为0
		cin >> n >> k;
		dfs(0,n,k);
		cout << sum << "\n";
		sum = 0;//记得测试每组数据后刷新
	}
	return 0;
}
*/
/*
#include<iostream>//水晶灯火灵https://www.luogu.com.cn/problem/P1936
#include<cmath>
using namespace std;
long long f[1000] = {1,1};
int main()
{	
	long long num;
	cin >> num;
	int n = 2;
	while(f[n-1]+f[n-2]<=num)
	{
		f[n] = f[n-1]+f[n-2];
		n++;
	}
	cout << "m=" << f[n-2] << "\n" << "n=" << f[n-1];
	return 0;
}
*/
/*
#include<iostream>//用于找出上题存在的规律
#include<cmath>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=n;j++)
		{
			if(abs(j*j-j*i-i*i)==1)
			{
				cout << i << " " << j << "\n";
			}
		}
	}
	return 0;
}
*/
/*
#include<iostream>//快速幂||取余运算https://www.luogu.com.cn/problem/P1226
using namespace std;
int main()
{
	long long a, b, p, sum=1;//定义底数,指数,求余数,运算结果
	cin >> a >> b >> p;
	long long m = a;//定义a,b的副本
	long long n = b;
	//快速幂模板
    while(b>0)
    {
        if(b&1)
		{
            sum = sum*a%p;
		}
        a = a*a%p;
        b >>= 1;    
    }
	sum %= p;
	cout << m << '^' << n << " mod " << p << '=' << sum;
    return 0;
}
*/
/*
long long fastPower(long long base, long long power)//快速幂
//https://blog.csdn.net/qq_19782019/article/details/85621386
{
    long long result = 1;//下述操作中%1000用以求指数很大的次幂结果的最后三位数
    while (power > 0)
	{
        if (power & 1)//此处等价于if(power%2==1),判断power是否为奇数
		{
            result = result * base % 1000;
        }
        power >>= 1;//此处等价于power=power/2
        base = (base * base) % 1000;
    }
    return result;
}
*/
/*
#include<iostream>//正整数序列https://www.luogu.com.cn/problem/P3152
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum = 0;//定义操作次数
	//最少操作次数就是该数转换成2进制后的位数
	while(n)
	{
		n >>= 1;
		sum++;
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//选书https://www.luogu.com.cn/problem/P1657
using namespace std;
int a[6][2];
int b[6];
int n;
int sum = 0;
void dfs(int t)
{
	if(t==n+1)
	{
		sum++;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<=1;j++)
			{
				if((!b[i]) && (a[t][j]==i))
				{
					b[i]++;
					dfs(t+1);
					b[i] = 0;
				}
			}
		}
	}
}
int main()
{
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=1;j++)
		{
			cin >> a[i][j];
		}
	}
	dfs(1);
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>// IIIhttps://www.luogu.com.cn/problem/P1743
#include<cstdio>//DP未能成功，因为n最大为1e8,而数组无法开那么大
#include<string>
using namespace std;
long double dp[10000000][5];
int main()
{
	int n, m;
	cin >> n >> m;
	for(int i=0;i<=n;i++)
	{
		dp[i][0] = 1;
	}
	for(int i=0;i<=m;i++)
	{
		dp[0][i] = 1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			dp[i][j] = dp[i-1][j]+dp[i][j-1];
		}
	}
	cout << dp[n][m];
	//sprintf(a, "%lf" ,dp[n][m]);
	//string str = to_string(dp[n][m]);
	return 0;
}
*/
/*
#include<cstdio>//矩阵 IIIhttps://www.luogu.com.cn/problem/P1743
#include<iostream>//排列组合思想
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;//输入6,4,最终结果就是C10_6(组合符号)
	long double sum = 1;
	for (int i=n+1;i<=n+m;i++)
	{
		sum *= i;
	}
	for (int j=2;j<=m;j++)
	{
		sum /= j;
	}
	int num = 0;
	while(sum>=1e17)
	{
		sum /= 10;
		num++;
	}
	printf("%.0LF",sum) ;
	for(int i=0;i<num;i++)
	{
		cout << 0;
	}
	return 0 ;
}
*/
/*
#include<iostream>//编号https://www.luogu.com.cn/problem/P1866
#include<algorithm>//该题使用了排列组合的思想
using namespace std;
#define mod 1000000007//求余
int a[55];
int main()
{
	int n;
	long long sum = 1;//数据范围较大
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		sum *= a[i]-i+1;
		sum %= mod;//每次都要求余
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//zzc 种田https://www.luogu.com.cn/problem/P2660
using namespace std;
int main()
{
	long long m,n;
	long long minn;
	long long maxn;
	long long sum = 0;
	cin >> m >> n;
	minn = min(n, m);
	maxn = max(n, m);
	while(minn>1)
	{
		long long a = minn;
		long long b = a;
		sum += (minn*4)*(maxn/minn);
		a = maxn%minn;
		minn = min(a, b);
		maxn = max(a, b);
	}
	if(minn)
	{
		sum += 4*maxn;
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//Cow Line Shttps://www.luogu.com.cn/problem/P2952
using namespace std;//不开O2,有测试点超时
int a[100005] = {0, 1};//第一条指令必定是加入一头奶牛
int i;
int figure = 2;//定义第figure头奶牛
int length = 1;//定义数组长度
//定义四个函数,分别进行有且仅有的4种操作
void move_1(int a[])//左加
{
	for(int j=length;j>=1;j--)
	{
		a[j+1] = a[j];
	}
	a[1] = figure;
	figure++;
	length++;
}

void move_2(int a[])//右加
{
	a[length+1] = figure;
	figure++;
	length++;
}

void move_3(int a[], int num1)//左离
{
	int num2 = num1;
	for(int k=1;k<=num1;k++)
	{
		for(int j=num2+1;j<=length;j++)
		{
			a[j-1] = a[j];
		}
		length --;
		num2--;
	}
}

void move_4(int a[], int num1)//右离
{
	length -= num1;
}

int main()
{
	int s;//定义s次指令
	cin >> s;
	int flag = 0;
	for(i=1;i<=s-1;i++)//s-1是因为特判越过了第一条指令，总指令数要减1
	{
		char str1;
		char str2;
		int num = 0;
		cin >> str1;
		cin >> str2;
		if(!flag)//flag为0说明是第一条指令，该指令必定是加一头奶牛
		{
			i--;特判越过该指令
			flag++;
			continue;
		}
		if(str1=='A'&&str2=='L')
		{
			move_1(a);
		}
		else if(str1=='A'&&str2=='R')
		{
			move_2(a);
		}
		else if(str1=='D'&&str2=='L')
		{
			cin >> num;
			move_3(a, num);
		}
		else if(str1=='D'&&str2=='R')
		{
			cin >> num;
			move_4(a, num);
		}
	}
	for(int j=1;j<=length;j++)
	{
		cout << a[j] << "\n";
	}
	return 0;
}
*/
/*
#include<iostream>//特殊的质数肋骨 Superprime Ribhttps://www.luogu.com.cn/problem/P1218
#include<cmath>
using namespace std;
int n;

int prime(int p)//用以判断素数
{
	if(p==1)
	{
		return 0;
	}
	else if(p==2)
	{
		return 1;
	}
	else
	{
		for(int i=2;i<=sqrt(p);i++)
		{
			if(p%i==0)
			{
				return 0;//不是素数
			}
		}
	}
	return 1;//是素数
}

void dfs(int num, int sum)//储存当前位数和当前数字
{
	if(num==n+1)
	{
		cout << sum << "\n";//如果数字位数达到n就输出
	}
	else
	{
		for(int i=1;i<=9;i++)//未进行剪枝优化,枚举1-9每一位
		{
			if(prime(sum*10+i))//如果sum*10+i为素数
			{
				dfs(num+1,sum*10+i);//递归添加下一位数字
			}
		}
	}
}

int main()
{
	cin >> n;//设置特殊质数长度为n
	dfs(1,0);
	return 0;
}
*/
/*
#include<iostream>// 国王的魔镜https://www.luogu.com.cn/problem/P2799
#include<string>
using namespace std;
string str;//全局定义字符串

void dfs(int len1)
{
	if(len1%2==1)//如果当前字符串长度为奇数
	{
		cout << len1;
		return;
	}
	for(int i=0,j=len1-1;i<len1/2;i++,j--)//从两头向中间判断是否为回文字符串
	{
		if(str[i]!=str[j])
		{
			cout << len1;//一旦发现当前字符串不是回文字符，就输出
			return;
		}
	}
	dfs(len1/2);//字符串长度截半
}

int main()
{
	cin >> str;
	int len = str.length();//获取字符串长度
	dfs(len);
	return 0;
}
*/
/*
#include<iostream>//滑雪https://www.luogu.com.cn/problem/P1434
using namespace std;
int m, n;
int sum = 0;
int t[111][111];
int r[111][111];
int x[4] = {-1, 0, 1, 0};
int y[4] = {0, 1, 0, -1};

int dfs(int a, int b)
{
	if(r[a][b])
	{
		return r[a][b];
	}
	r[a][b] = 1;
	for(int h=0;h<4;h++)
	{
		int xx = a+x[h];
		int yy = b+y[h];
		if(xx>=1 && xx<=m && yy>=1 && yy<=n && t[a][b]>t[xx][yy])
		{
			dfs(xx,yy);
			r[a][b] = max(r[a][b],r[xx][yy]+1);
		}
	}
	return r[a][b];
}
int main()
{
	cin >> m >> n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin >> t[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			sum = max(sum,dfs(i,j));
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>
#include<string>
//#include<cstring>
using namespace std;
int n;
string s;
int main()
{
	cin>>n;
	cin>>s;
	for(int i=2;i<=n;++i)//由于第一个为原串，所以单独输入
	{
		string ss;
		cin>>ss;
		int x=s.find(ss[0]);//找到这个子树的根节点在原串中的位置
		s.erase(x,1);//清除根节点
		s.insert(x,ss);//加入子树
	}
	for(int i=0;i<s.size();++i)
	if(s[i]!='*') cout<<s[i];//不输出空节点
	else continue;
}
*/
/*
#include<iostream>//新二叉树https://www.luogu.com.cn/problem/P1305
#include<string>
using namespace std;
struct s
{
	char left;//定义二叉数左子树
	char right;//定义二叉树右子树
} tree[200];
void dfs(int s)
{
	if(s+'0'=='*')
	{
		return;
	}
	cout << char(s+'0');
	dfs(tree[s].left-'0');
	dfs(tree[s].right-'0');
}
int main()
{
	int n;//定义二叉树节点数
	string str;
	char t;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> str;
		if(i==0)
		{
			t = str[0];//第一串字符串的首字母就是根节点
		}
		tree[str[0]-'0'].left = str[1];//字符串第二个字母赋值给左子树
		tree[str[0]-'0'].right = str[2];//字符串第三个字母赋值给右子树
	}
	dfs(t-'0');//转换成数字
	return 0;
}
*/
/*
#include <iostream>//记忆化搜索斐波那契数列
#include <algorithm>
using namespace std;
const int MAXN=100;
int dp[MAXN];
int fabnaci(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    if(dp[n])
    {
        return dp[n];
    }
    else
    {
        dp[n]=fabnaci(n-1)+fabnaci(n-2);
        return dp[n];
    }
}
int main()
{
    int n;
    cin>>n;
    int res=fabnaci(n);
    cout<<res<<endl;
}

/*
#include <algorithm>
#include <stdio.h>
using namespace std;
char v[20];
int main()
{
    fill(v,v+10,'a');
    for (int i = 0; i <20; ++i)
        printf("%c ",v[i]);

    return 0;
}
*/
/*
#include <algorithm>
#include <stdio.h>
using namespace std;
char v[10][10];
int main(int argc, char const *argv[])
{
    fill(v[0],v[0]+10*10,'a');
    for (int i = 0; i <10; ++i){
        for (int j = 0; j <10 ; ++j){
            printf("%d ",v[i][j] );
        }
        printf("\n");
    }   
    return 0;
}
*/
/*
#include <iostream>//矩阵 IIhttps://www.luogu.com.cn/problem/P1722
using namespace std;
int a[505][505];
int main()
{
	int n;
	cin >> n;
	a[1][1] = 1;
	for (int i=2;i<=n*2;i++)
	{
		for (int j=(i+1)/2;j<=i;j++)
		{
			a[i][j] = (a[i-1][j]+a[i-1][j-1])%100;
		}
	}
	cout << a[n*2][n];
	return 0;
}
*/
/*
// https://blog.csdn.net/m0_53565874/article/details/123221584?utm_medium=distribute.pc_relevant.none-task-blog-2~default~baidujs_baidulandingword~default-5-123221584-blog-87948954.235^v28^pc_relevant_t0_download&spm=1001.2101.3001.4242.4&utm_relevant_index=8
#include<iostream>//动态规划之二维01背包问题
using namespace std;//以下代码源于上述网页
const int N=10;
int v[N];//储存每个物品体积值
int w[N];//储存每个物品的价值
int f[N][N];//f[i][j]代表(0-i)个物品放入j的容量的背包中的最大价值
int n,m;
int main()
{
	scanf("%d%d",&n,&m);//n个物品,m的背包容量
	for(int i=1;i<=n;i++) scanf("%d%d",&v[i],&w[i]);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=v[i])
			{
				f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
			}
		}    
	}
	printf("%d",f[n][m]); 
	return 0;
}
*/
/*
#include<iostream>//动态规划之一维01背包问题
using namespace std;
const int N=10;
int v[N];//储存每个物品体积值
int w[N];//储存每个物品的价值
int f[N];//f[j]代表(0-i)个物品放入j的容量的背包中的最大价值
int n,m;
int main()
{
	scanf("%d%d",&n,&m);//n个物品,m的背包容量
	for(int i=1;i<=n;i++) scanf("%d%d",&v[i],&w[i]);
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=v[i];j--)
		{
			f[j] = max(f[j],f[j-v[i]]+w[i]);
		}    
	}
	printf("%d",f[m]); 
	return 0;
}
*/
/*
#include<iostream>//动态规划之二维完全背包
using namespace std;
const int N=1010;
int n,m;//n表示所有物品的个数,m表示容量
int v[N],w[N];//v表示体积，w表示价值
int f[N][N];//表示状态
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=v[i])
			{
				f[i][j]=max(f[i][j],f[i][j-v[i]]+w[i]);
			}
		}
	}
	printf("%d \n   \n\n",f[n][m]);
	
	return 0;
}
*/
/*
#include<iostream>//动态规划之一维完全背包问题
using namespace std;
const int N=10;
int v[N];//储存每个物品体积值
int w[N];//储存每个物品的价值
int f[N];//f[j]代表(0-i)个物品放入j的容量的背包中的最大价值
int n,m;
int main()
{
	scanf("%d%d",&n,&m);//n个物品,m的背包容量
	for(int i=1;i<=n;i++) scanf("%d%d",&v[i],&w[i]);
	for(int i=1;i<=n;i++)
	{
		for(int j=v[i];j<=m;j++)
		{
			f[j] = max(f[j],f[j-v[i]]+w[i]);
		}   
	}
	printf("%d",f[m]); 
	return 0;
}
*/
/*
#include<iostream>//A+B Problem（再升级）https://www.luogu.com.cn/problem/
using namespace std;
bool isprime[1001];
long long dp[1001];
int main()
{
    for(int i=0;i<=1001;i++)
		isprime[i]=true;
    isprime[0]=isprime[1]=false;
    for(int i=2;i<=1001;i++)
	{
        if(isprime[i])
		{
            for(int j=2*i;j<=1001;j+=i)
			{
                isprime[j]=false;//false代表合数
            }
        }
    }
	int num;
	cin >> num;
	dp[0] = 1;
	for(int i=2;i<=num;i++)
	{
		if(isprime[i])
		{
			for(int j=i;j<=num;j++)
			{
				dp[j] += dp[j-i];
			}
		}
	}
	cout << dp[num];
}
*/
/*
#include<stdio.h>//动态规划之完全背包问题最终优化版
int f[10];
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i ++ ) {
        int v,w;
        scanf("%d %d", &v, &w);
        for (int j = v; j <= m; j++ ) {
            f[j] = (f[j] > f[j - v] + w) ? f[j] :f[j - v] + w;
        }
    }
    printf("%d\n", f[m]);
    return 0;
}
*/
/*
#include <iostream>//最大子段和https://www.luogu.com.cn/problem/P1115
#include <algorithm>
using namespace std;
int a[10];
int dp[10];
int main()
{
	int n;
    cin >> n;
	int maxn = -1e9;
    for(int i=1;i<=n;i++)
		cin >> a[i];
    for(int i=1;i<=n;i++)
	{
        dp[i] = max(dp[i-1] + a[i], a[i]);
        maxn = max(maxn, dp[i]);
    }
    cout << maxn;
    return 0;
}
*/
/*
#include<iostream>//路径计数2https://www.luogu.com.cn/problem/P1176
#include<algorithm>//与上学路线思路一致
using namespace std;
#define mod 100003
long long dp[1001][1001];
int main()
{
	int a;
	int n;
	cin >> a >> n;
	for(int i=0;i<n;i++)
	{
		int x, y;
		cin >> x >> y;
		dp[x][y] = -1;
	}
	for(int i=1;i<=a;i++)
	{
		if(dp[i][1]!=-1)
		{
			dp[i][1] = 1;
		}
		else
		{
			for(int j=i;j<=a;j++)
			dp[j][1] = 0;
			break;
		}
	}
	for(int i=1;i<=a;i++)
	{
		if(dp[1][i]!=-1)
		{
			dp[1][i] = 1;
		}
		else
		{
			for(int j=i;j<=a;j++)
			dp[1][j] = 0;
			break;
		}
	}
	for(int i=2;i<=a;i++)
	{
		for(int j=2;j<=a;j++)
		{
			if(dp[i][j]==-1)
			{
				dp[i][j] = 0;
			}
			else
			{
				dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;
			}
		}
	}
	cout << dp[a][a];
	return 0;
}
*/
/*
#include<iostream>//外星密码https://www.luogu.com.cn/problem/P1928
#include<string>
using namespace std;  

string str()
{
	int n;
	char c;
	string str1;
	string str2;
	while(cin >> c)
	{
		if(c=='[')
		{
			cin >> n;
			str2 = str();
			for(int i=0;i<n;i++)
			{
				str1 += str2;
			}
		}
		else if(c==']')
		{
			return str1;
		}
		else
		{
			str1 += c;
		}
	}
}

int main()  
{
	cout << str();
    return 0;     
}  
*/
/*
#include<iostream>// 递归函数的次数https://ac.nowcoder.com/acm/problem/24665
using namespace std;
#define mod 1000000
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	if(n<=3)
	{
		cout << 1;
		return 0;
	}
	else
	{
		int a1 = 1;
		int a2 = 1;
		int a3 = 1;
		for(int i=4;i<=n;i++)
		{
			sum = (a1+a2+a3+1)%mod;//前三项和加一等于该项
			a1 = a2;
			a2 = a3;
			a3 = sum;
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>// 禁止使用循环！https://www.nitacm.com/problem_show.php?pid=506
using namespace std;//使用递归实现循环的效果
long long sum = 0;
long long plus_s(long long num)
{
	if(num==0)
	{
		return sum;
	}
	else
	{
		long long num1;
		cin >> num1;
		sum += num1;
		return plus_s(num-1);
	}
}
int main()
{
	int n;
	cin >> n;
	cout << plus_s(n);
	return 0;
}
*/
/*
#include<iostream>//简单数组https://www.nitacm.com/problem_show.php?pid=112
#include<algorithm>
using namespace std;
int a[501];
int main()
{
	int flag1 = 0;
	int n;
	fill(a,a+501,100001);
	while(cin>>n)
	{
		int sum = 0;
		int flag = -1;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		if(sum<=0)
		{
			if(flag1)
			{
				cout << '\n';
			}
			flag1++;
			int flag = 0;
			sort(a,a+n,greater<int>());
			for(int i=0;i<n;i++)
			{
				if(a[i]==a[i-1])
				{
					continue;
				}
				else
				{
					if(flag)
						cout << ' ' << a[i];
					else
					{
						cout << a[i];
						flag++;
					}
				}
			}
		}
		else if(sum & 1)
		{
			if(flag1)
			{
				cout << '\n';
			}
			flag1++;
			int flag = 0;
			sort(a,a+n,greater<int>());
			for(int i=0;i<n;i++)
			{
				if(a[i] & 1)
				{
					if(flag)
						cout << ' ' << a[i];
					else
					{
						cout << a[i];
						flag++;
					}
				}
			}
		}
		else
		{
			if(flag1)
			{
				cout << '\n';
			}
			flag1++;
			int flag = 0;
			sort(a,a+n);
			for(int i=0;i<n;i++)
			{
				if(!(a[i]&1))
				{
					if(flag)
						cout << ' ' << a[i];
					else
					{
						cout << a[i];
						flag++;
					}
				}
			}
		}
	}
	return 0;
}
*/
/*
#include<iostream>// 迷宫https://www.luogu.com.cn/problem/P1605
using namespace std;
int x[4] = {1,0,-1,0};
int y[4] = {0,1,0,-1};
int a[6][6];
int sum = 0;
int n, m, t;//定义长，宽，与障碍数量
int x1, y1;//定义起始坐标
int x2, y2;//定义目标坐标

void dfs(int x_1, int y_1)
{
	if(x_1==x2&&y_1==y2)
	{
		sum++;//如果抵达最终目标就让路径数+1
		return ;
	}
	for(int i=0;i<4;i++)
	{
		int xx = x_1+x[i];
		int yy = y_1+y[i];
		if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&a[xx][yy]==0)//如果没有越界且该点没有走过
		{
			a[xx][yy]++;//标记该点已走过
			dfs(xx, yy);
			a[xx][yy] = 0;//回溯
		}
	}
}

int main()
{
	cin >> n >> m >> t;
	cin >> x1 >> y1 >> x2 >> y2;
	a[x1][y1] = -1;//一定要给初始坐标标记为已经走过
	for(int i=0;i<t;i++)
	{
		int x3, y3;
		cin >> x3 >> y3;
		a[x3][y3] = -1;//标记障碍
	}
	dfs(x1, y1);
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>// 台阶问题https://www.luogu.com.cn/problem/P1192
using namespace std;
int f[100002];
void dp()
{
    int n, k;
	cin >> n >> k;
    for(int i =1;i<=k;i++)
		f[i] = 1;
    for(int i = 2;i<=n;i++)
    {
        for(int j = 1;j<=k&&j<=i;j++)
        {
            f[i] = (f[i]+f[i-j])%100003;
        }
    }
	cout << f[n];
}
int main()
{
	dp();
    return 0;
}
*/
/*
#include<iostream>// 又是毕业季IIhttps://www.luogu.com.cn/problem/P1414
#include<cmath>
using namespace std;
int a[10002];
int main()
{
	int n;
	cin >> n;
	int maxn = -1;
	int num = 0;
	for(int i=1;i<=n;i++)
	{
		cin >> num;
		maxn = max(maxn,num);
		for(int j=1;j<=sqrt(num);j++)
		{
			if(num%j==0)
			{
				a[j]++;
				if(num!=j*j)
				{
					a[num/j]++;
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		while(a[maxn]<i)
		{
			maxn--;
		}
		cout << maxn << "\n";
	}
	return 0;
}
*/
/*
#include<iostream>// 求先序排列https://www.luogu.com.cn/problem/P1030
#include<string>
using namespace std;
void tree(string a,string b)
{
	if(a.length()==0 || b.length()==0)//如果a的长度或b的长度为0代表递归结束
		return;
	char ch = b[b.length()-1];//获取b的最后一个字母，也就是后序排列的最后一个字母，它代表着当前树的根节点
	cout << ch;//输出根节点
	int root = a.find(ch);//在先序排列中找到根节点，根节点左侧代表左子树，右侧为右子树
	tree(a.substr(0,root), b.substr(0,root));//递归当前树左子树，即将左子树看成新树
	tree(a.substr(root+1), b.substr(root,b.length()-1-root));//递归当前树的右子树，即将右子树看成新树
}
int main()
{
	string a;//定义先序排列
	string b;//定义后序排列
	cin >> a >> b;
	tree(a,b);
	return 0;
	
}
*/
/*
#include<iostream>// 被3整除的子序列https://ac.nowcoder.com/acm/problem/21302
#include<string>
using namespace std;
string s;//定义字符串
long long dp[51][451];//dp[i][j]代表前i个数构成和为j的方法数，451源于字符串长度最大为50，每个字符最大值为9
long long mod  = 1e9 + 7;
int main()
{
    cin >> s;
    int len = s.size();//获取字符串长度
    for(int i = 1; i<=len; i++)
	{
        for(int j = 0; j<=451; j++)
		{
            dp[i][j] = dp[i-1][j];
            if(j == int(s[i-1]-'0'))
				dp[i][j]++;
            if(j >= int(s[i-1]-'0'))
				dp[i][j] += dp[i-1][j-int(s[i-1]-'0')];//动态规划递推
            dp[i][j] %= mod;//求余防止爆数据
        }
    }
    long long sum = 0;
    for(int j = 0; j<=451; j++)
		{
			if(j % 3 == 0)//如果字符串构成的和“j”是3的倍数
			{
				sum += dp[len][j];//那么就加上dp[len][j]代表的方法数
				sum %= mod;
			}
		}
		cout << sum;
    return 0 ;
}
*/
/*
#include<iostream>// RMQhttps://ac.nowcoder.com/acm/problem/21414
#include<string>
using namespace std;
int a[200002];
int main()
{
	int n;
	int m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	string str;
	for(int i=0;i<m;i++)
	{
		int left;
		int right;
		long long sum = 0;
		cin >> str;
		if(str=="SUM")
		{
			cin >> left >> right;
			for(int j=left;j<=right;j++)
			{
				sum += a[j];
			}
			cout << sum << "\n";
		}
		else if(str=="OR")
		{
			int x = 0;
			cin >> left >> right >> x;
			for(int j=left;j<=right;j++)
			{
				a[j] |= x;
			}
		}
	}
	return 0;
}
*/
/*
#include <iostream>// LELE的RPG难题https://www.nitacm.com/problem_show.php?pid=1961
using namespace std;
long long a[51]={0, 3, 6, 6};
int main ( )
{
	int n;
    for(int i=4;i<=50;i++)
        a[i] = a[i-2]*2+a[i-1];//模拟数据得出数学规律
    while (cin>>n)
	{
		cout << a[n];
	}
    return 0;
}
*/
/*
#include<iostream>// 跳舞毯https://www.nitacm.com/problem_show.php?pid=2070
using namespace std;
int a[1001]={0, 0, 2, 2};
int main()
{
	int n;
	int sum;
	for(int i=4;i<=1000;i++)
        a[i] = (a[i-2]*2+a[i-1])%10000;//模拟数据得出数学规律
	while(cin >> n)
	{
		if(n==0)
		{
			return 0;
		}
		cout << a[n] << '\n';
	}
	return 0;
}
*/
/*
#include<iostream>// 取数游戏https://www.nitacm.com/problem_show.php?pid=350
using namespace std;
int a[1001];
int sum[1001][1001];
int dp[1001][1001];
int main()
{
    int n;
	while(cin >> n)
	{
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			dp[i][i]=a[i];
			sum[i][i]=a[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				sum[i][j] = sum[i][j-1]+a[j];
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			for(int j=i;j<n;j++)
			{
				dp[i][j]=sum[i][j]-min(dp[i+1][j],dp[i][j-1]);
			}
		}
		cout << dp[0][n-1] << ' ' <<  sum[0][n-1]-dp[0][n-1] << '\n';
	}
}
*/
/*
#include<iostream>// 黑白棋子的移动https://www.luogu.com.cn/problem/P1259
using namespace std;
int main()
{
	int n;//定义黑白棋子各n个
	cin >> n;
	for(int i=1;i<=n;i++)//第一行输出代表黑白棋原始位置
	{
		cout << 'o';
	}
	for(int i=1;i<=n;i++)
	{
		cout << '*';
	}
	cout << "--\n";
	if(n==4)//n为4时需要特判
	{
		cout << "ooo*o**--*\no--*o**oo*\no*o*o*--o*\n--o*o*o*o*";
		return 0;//提前结束程序
	}
	int num = n-1;//代表左边连续的白棋数量
	while(num>=4)//根据规律每次经历该循环输出两行
	{
		for(int i=1;i<=num;i++)
		{
			cout << 'o';
		}
		cout << "--";
		for(int i=1;i<=num;i++)
		{
			cout << '*';
		}
		for(int i=1;i<=n-num;i++)
		{
			cout << "o*";
		}
		cout << '\n';
		//上述输出当前循环的第一行
		//下述输出当前循环的第二行
		for(int i=1;i<=num;i++)
		{
			cout << 'o';
		}
		for(int i=1;i<=num;i++)
		{
			cout << '*';
		}
		cout << "--";
		for(int i=1;i<=n-num;i++)
		{
			cout << "o*";
		}
		cout << '\n';
		num--;
	}

	//如果n>4，那么该题答案输出的最后5行遵循另一种规律
	cout << "ooo--***o*";
	for(int i=1;i<=n-4;i++)
	{
		cout << "o*";
	}
	cout << "\nooo*o**--*";
	for(int i=1;i<=n-4;i++)
	{
		cout << "o*";
	}
	cout << "\no--*o**oo*";
	for(int i=1;i<=n-4;i++)
	{
		cout << "o*";
	}
	cout << "\no*o*o*--o*";
	for(int i=1;i<=n-4;i++)
	{
		cout << "o*";
	}
	cout << "\n--o*o*o*o*";
	for(int i=1;i<=n-4;i++)
	{
		cout << "o*";
	}
	return 0;
}
*/
/*
#include<iostream>// PU?https://www.luogu.com.cn/problem/P6546
#include<cmath>
using namespace std;
int main()
{
	long long a, b, v;
	cin >> a >> b >> v;
	long long sum;
	sum = ceil(1.0*(v-a)/(a-b))+1;//向上取整函数
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	long long n, m;
	cin >> n >> m;
	long long maxn = 0;
	long long minn = 0;
	long long mid = 0;
	long long sum = 0;
	
	while(n>3*m+1)
	{
		n -= 2*m;
		sum++;
	}
	while(maxn!=1)
	{
		if(n%3)
		{
			maxn = n/3+1;
			minn = maxn-1;
			mid = n-maxn-minn;
		}
		else
		{
			maxn = n/3;
		}
		n = maxn;
		sum++;
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>// 传球游戏https://www.luogu.com.cn/problem/P1057
using namespace std;
int f[31][31];// f[i][j]代表传i次到第j个人手里的方法数        
int main()
{
	int n;
	int m;
	cin >> n >> m;
	f[0][0]=1;            
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(f[i][j])
			{                  
				f[i+1][(j-1+n)%n]+=f[i][j]; 
				f[i+1][(j+1)%n]+=f[i][j];   
			}
	cout << f[m][0];
    return 0;
}
*/
/*
#include<iostream>// FBI 树https://www.luogu.com.cn/problem/P1087
#include<string>
#include<cmath>
using namespace std;
string s;//定义给定的字符串
void dfs(int low, int up)
{
    int mid = (low+up)/2;//定义字符串中间位置
    if (low!=up)
	{
        dfs(low, mid);
        dfs(mid+1,up);
    }
	string str = s.substr(low,up-low+1);//定义原字符串low到up这个区间内的子字符串
	if(str.find('1')!=string::npos&&str.find('0')!=string::npos)//如果能找到“1”和“0”
	{
		cout << 'F';
	}
	else if(str.find('1')==string::npos&&str.find('0')!=string::npos)
	{
		cout << 'B';
	}
	else
	{
		cout << 'I';
	}
}
int main()
{
    int n;
    cin >> n;
    cin >> s;//输入给定字符串
    dfs(0, pow(2,n)-1);//字符串长度为2的n次方，从下标0到下标2的n次方-1
    return 0;
}
*/
/*
#include<iostream>// 花生采摘https://www.luogu.com.cn/problem/P1086
#include<algorithm>
#include<cmath>
using namespace std;
struct peanut
{
	int x;// 定义行坐标
	int y;// 定义列坐标
	int num;// 定义该处所含花生数量
}s[500];
bool cmp(peanut a, peanut b)
{
	return a.num > b.num;
}
int main()
{
	int m;
	int n;
	int k;
	int figure = 1;//记录有花生的点数量
	cin >> m >> n >> k;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int position;
			cin >> position;
			if(position)//如果该点有花生
			{
				s[figure].x = i;
				s[figure].y = j;
				s[figure].num = position;//输入相关数据
				figure++;
			}
		}
	}
	sort(s+1,s+figure+1,cmp);//按照每个点花生的数量从大到小排列
	int sum_time = 0;
	int sum_peanut = 0;
	for(int i=1;i<=figure-1;i++)
	{
		if(i==1)
		{
			sum_time += s[i].x+1;
		}
		else
		{
			sum_time += abs(s[i].x-s[i-1].x)+abs(s[i].y-s[i-1].y)+1;
		}
		if(sum_time+s[i].x<=k)
		{
			sum_peanut += s[i].num;
		}
	}
	cout << sum_peanut;
	return 0;
}
*/
/*
#include<iostream>// 求细胞数量https://www.luogu.com.cn/problem/P1451
using namespace std;//DFS
int a[101][101];// 储存原始数据
int b[101][101];// 用以标记当前循环哪些地方已经走过
int x[4] = {0, 1, 0, -1};
int y[4] = {1, 0, -1, 0};// 与上行联合定义右、下、左、上四个方向
int n;// 定义矩阵行数
int m;// 定义矩阵列数
int sum = 0;// 定义细胞总数
void dfs(int r, int c)
{
	for(int i=0;i<4;i++)
	{
		int xx = r+x[i];
		int yy = c+y[i];// 定义移动后的坐标
		if(xx>=0&&xx<n&&yy>=0&&yy<m && a[xx][yy]&&!b[xx][yy])
		{// 如果移动后没有越界，该点数值不是0，且没有被数组b标记
			b[xx][yy]++;// 标记当前位置已经走过
			dfs(xx, yy);//递归搜索
		}
	}
}
int main()
{
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			char ch;
			cin >> ch;
			a[i][j] = ch-'0';// 输入原始数据
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)//搜索每一个点
		{
			if(a[i][j]&&!b[i][j])
			{// 如果该点不是数字0并且没有被数组b标记
				dfs(i, j);//搜索
				sum++;//每次凑数结束都会标记一个细胞
			}
		}
	}
	cout << sum;
	return 0;
}
*/

/*
#include<iostream>// 简单搜索https://www.nitacm.com/problem_show.php?pid=160
#include<cmath>//DFS，该思路会超时
using namespace std;
char a[1001][1001];
int b[1001][1001];
int x[4] = {-1 ,0, 1, 0};
int y[4] = {0, 1, 0, -1};
int n;
int m;
int sx, sy;
int sum;
int len;
int minn = 1e6;
int flag;
void dfs(int x1, int y1)
{
	if(a[x1][y1]=='X' )
	{
		len = abs(x1-sx)+abs(y1-sy);
		minn = min(len,minn);
		sum++;
		flag++;
	}
	for(int i=0;i<4;i++)
	{
		int xx = x1+x[i];
		int yy = y1+y[i];// 定义移动后的坐标 
		if(xx>0&&xx<=n&&yy>0&&yy<=m&&a[xx][yy]!='#'&&!b[xx][yy])// 如果移动后没有越界,且没有被数组b标记
		{
			b[xx][yy]++;// 标记当前位置已经走过
			dfs(xx, yy);//递归搜索
			b[xx][yy] = 0;//回溯
		}
	}
}
int main()
{
	while(cin >> n >> m)
	{
		flag = 0;
		sum = 0;
		fill(b[0],b[0]+51*51,0);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin >> a[i][j];
			}
			cin.get();
		}
		cin >> sx >> sy;
		b[sx][sy]++;
		dfs(sx, sy);
		if(flag)
		{
			cout << minn << ' ' << sum << '\n';
		}
		else
		{
			cout << "0 0\n";
		}
	}
	return 0;
}
*/
/*
#include<iostream>// 逃生https://www.nitacm.com/problem_show.php?pid=362
using namespace std;//DFS，该思路会超时
char a[51][51];
int b[51][51];
int x[4] = {0, 1, 0, -1};
int y[4] = {1, 0, -1, 0};
int n;
int m;
int flag = 0;
int dfs(int x1, int y1)
{
	if(a[x1][y1]=='E')
	{
		flag++;
	}
	for(int i=0;i<4;i++)
	{
		int xx = x1+x[i];
		int yy = y1+y[i];
		if(xx>=0&&xx<n&&yy>=0&&yy<m&&a[xx][yy]!='*'&&!b[xx][yy])
		{
			b[xx][yy]++;
			dfs(xx, yy);
			b[xx][yy] = 0;
			if(flag)
			{
				return 1;
			}
		}
	}
	return 0;
}
int main()
{
	int t;
	int x_start, y_start;
	cin >> t;
	for(int k=0;k<t;k++)
	{
		flag = 0;
		cin >> n >> m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin >> a[i][j];
				if(a[i][j]=='S')
				{
					x_start = i;
					y_start = j;
				}
			}
			cin.get();
		}
		if(dfs(x_start, y_start))
		{
			if(k==0)
			{
				cout << "YES";
			}
			else
			{
				cout << "\nYES";
			}
		}
		else
		{
			if(k==0)
			{
				cout << "NO";
			}
			else
			{
				cout << "\nNO";
			}
		}
	}
	return 0;
}
*/
/*
#include<iostream>// Trianglehttps://www.luogu.com.cn/problem/CF6A
#include<algorithm>
using namespace std;
int a[5];
int b[5] = {0, 0, 0, 0, 1};
int c[4];
int main()
{
	int num;
    for(int i=1;i<=4;i++)
	{
		cin >> a[i];
	}
	int c1, c2, c3;
	int flag = 0;
    do{
		int i = 1;
        for(int j=1;j<=4;j++)
		{
			if(b[j]==0)
			{
				c[i] = a[j];
				i++;
			}
		}
		if(c[1]+c[2]>c[3]&&c[2]+c[3]>c[1]&&c[1]+c[3]>c[2])
		{
			cout << "TRIANGLE";
			return 0;
		}
		else if(c[1]+c[2]>=c[3]&&c[2]+c[3]>=c[1]&&c[1]+c[3]>=c[2])
		{
			flag++;
		}
    }while(next_permutation(b+1,b+4+1));
	if(flag)
	{
		cout << "SEGMENT";
	}
	else
	{
		cout << "IMPOSSIBLE";
	}
    return 0;
}
*/
/*
#include<iostream>// 约瑟夫https://www.luogu.com.cn/problem/P1145
using namespace std;
int main()
{
	int k;
	cin >> k;
	int m = k;
	while(m++)
	{
		int a = 0;
		int flag = 0;
		for(int i = 0;i<k;i++)
		{
			a = (a+m-1)%(2*k-i);//下一个被杀死的人的位置，范围为[k-1,k*2-1]
			if(a<k)
			{	//如果好人被杀死就退出
				flag++;
				break;
			}
		}
		if(!flag)
		{
			cout<<m<<endl;
			return 0;
		}
	}
	return 0;
}
*/
/*
#include<iostream>//逃生https://www.nitacm.com/problem_show.php?pid=362
#include<queue>//BFS
using namespace std;
char a[51][51];
int v[51][51];
int x[4] = {0, 1, 0, -1};
int y[4] = {1, 0, -1, 0};
struct point
{
	int x;
	int y;
}start;
queue<point> r;//申请队列
int main()
{
	int t;
	cin >> t;
	int n, m;
	int x_start, y_start;
	int x_end, y_end;
	for(int k=0;k<t;k++)
	{
		cin >> n >> m;
		fill(v[0],v[0]+51*51,0);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin >> a[i][j];
				if(a[i][j]=='S')
				{
					x_start = i;
					y_start = j;
				}
			}
		}
		start.x = x_start;
		start.y = y_start;
		r.push(start);
		v[x_start][y_start] = 1;
		int flag = 0;
		while(!r.empty())
		{
			int x_now = r.front().x;
			int y_now = r.front().y;
			if(a[x_now][y_now]=='E')
			{
				cout << "YES\n";
				flag++;
				break;
			}
			for(int i=0;i<4;i++)
			{
				int xx = x_now+x[i];
				int yy = y_now+y[i];
				if(xx>=1 && xx<=n && yy>=1 && yy<=m && a[xx][yy]!='*' && !v[xx][yy])
				{
					point temp;
					temp.x = xx;
					temp.y = yy;
					r.push(temp);
					v[xx][yy]++;
				}
			}
			r.pop();//将队首元素弹出队列
		}
		if(!flag)
		{
			cout << "NO\n";
		}
		while(!r.empty())
		{
			r.pop();
		}
	}
	return 0;
}
*/
/*
#include<iostream>//简单搜索https://www.nitacm.com/problem_show.php?pid=160
#include<cstring>
#include<queue>//BFS
using namespace std;
char a[1001][1001];
int v[1001][1001];
int x[4] = {0, 1, 0, -1};
int y[4] = {1, 0, -1, 0};
struct point
{
	int x;
	int y;
	int step;
}start;
queue<point> r;//申请队列
int main()
{
	int n, m;
	int x_start, y_start;
	int x_end, y_end;
	while(cin >> n >> m)
	{
		int sum = 0;
		int len = 1e6;
		memset(v, 0, sizeof(v));
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin >> a[i][j];
			}
		}
		cin >> x_start;
		cin >> y_start;
		start.x = x_start;
		start.y = y_start;
		start.step = 0;
		r.push(start);
		v[x_start][y_start] = 1;
		int flag = 0;
		while(!r.empty())
		{
			int x_now = r.front().x;
			int y_now = r.front().y;
			if(a[x_now][y_now]=='X')
			{
				sum++;
				len = min(len,r.front().step);
				flag++;
			}
			for(int i=0;i<4;i++)
			{
				int xx = x_now+x[i];
				int yy = y_now+y[i];
				if(xx>=1 && xx<=n && yy>=1 && yy<=m && a[xx][yy]!='#' && !v[xx][yy])
				{
					point temp;
					temp.x = xx;
					temp.y = yy;
					temp.step = r.front().step+1;
					r.push(temp);
					v[xx][yy]++;
				}
			}
			r.pop();//将队首元素弹出队列
		}
		if(flag)
		{
			cout << len << ' ' << sum << '\n';
		}
		else
		{
			cout << "0 0\n";
		}
		while(!r.empty())
		{
			r.pop();
		}
	}
	return 0;
}
*/
/*
#include<iostream>// 序言页码 Preface Numberinghttps://www.luogu.com.cn/problem/P1465
using namespace std;
int a[1001];
void f(int x)//处理函数
{
	if(x/1000!=0)//处理千位
	{
		a['M']+=x/1000;
	}
	if(x%1000/100!=0)//百位
	{
		int t = x%1000/100;
		if(t==9)//9要特殊处理
		{
        //他是上一位的1减去这一位的1
			a['C']++;
			a['M']++;
		}
		else if(t>=5)//这一位的5加上这一位的1
		{
			a['D']++;
			a['C'] += t-5;
		}
		else if(t==4)//4也要特殊处理
       	//这一位的5减去这一位的1
		{
			a['C']++;
			a['D']++;
		}
		else
		{//全是这一位的1
			a['C'] += t;
		}
	}
    //其他几位同上
	if(x%100/10!=0)//十位
	{
		int t = x%100/10;
		if(t==9)
		{
			a['X']++;
			a['C']++;
		}
		else if(t>=5)
		{
			a['L']++;
			a['X'] += t-5;
		}
		else if(t==4)
		{
			a['X']++;
			a['L']++;
		}
		else
		{
			a['X'] += t;
		}
	}
	if(x%10!=0)//个位
	{
		int t=x%10;
		if(t==9)
		{
			a['I']++;
			a['X']++;
		}
		else if(t>=5)
		{
			a['V']++;
			a['I'] += t-5;
		}
		else if(t==4)
		{
			a['I']++;
			a['V']++;
		}
		else
		{
			a['I'] += t;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)//从1到n
	{
		f(i);//转换
	}
	if(a['I']!=0)
		cout << 'I' << " " << a['I'] << '\n';
	if(a['V']!=0)
		cout << 'V' << " " << a['V'] << '\n';
	if(a['X']!=0)
		cout << 'X' << " " << a['X'] << '\n';
	if(a['L']!=0)
		cout << 'L' << " " << a['L'] << '\n';
	if(a['C']!=0)
		cout << 'C' << " " << a['C'] << '\n';
	if(a['D']!=0)
		cout << 'D' << " " << a['D'] << '\n';
	if(a['M']!=0)
		cout << 'M' << " " << a['M'] << '\n';
	return 0;
}
*/
/*
#include<iostream>// 拯救oibh总部https://www.luogu.com.cn/problem/P1506
using namespace std;
int a[5][5];// 储存原始数据
int x[4] = {0, 1, 0, -1};
int y[4] = {1, 0, -1, 0};// 与上行联合定义右、下、左、上四个方向
int n;// 定义矩阵行数
int m;// 定义矩阵列数
int sum = 0;
void dfs(int r, int c)
{
	a[r][c] = 1;
	for(int i=0;i<4;i++)
	{
		int xx = r+x[i];
		int yy = c+y[i];// 定义移动后的坐标
		if(xx>=0&&xx<n&&yy>=0&&yy<m&&!a[xx][yy])
		{
			dfs(xx, yy);
		}
	}
}
int main()
{
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			char ch;
			cin >> ch;
			if(ch=='*')
			{
				a[i][j] = 1;//如果是围墙就赋值为1
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(!a[i][0])//搜索第一列
		{
			dfs(i, 0);
		}
		if(!a[i][m-1])//搜索最后一列
		{
			dfs(i, m-1);
		}
	}
	for(int j=0;j<m;j++)
	{
		if(!a[0][j])//搜索第一行
		{
			dfs(0, j);
		}
		if(!a[n-1][j])//搜索最后一行
		{
			dfs(n-1, j);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(!a[i][j])
			{
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>//求细胞数量https://www.luogu.com.cn/problem/P1451
#include<queue>//BFS
using namespace std;
int a[101][101];// 储存原始数据
int v[101][101];// 用以标记当前循环哪些地方已经走过
int x[4] = {0, 1, 0, -1};
int y[4] = {1, 0, -1, 0};
// 与上行联合定义右、下、左、上四个方向
struct point
{
	int x;
	int y;
}start;
int main()
{
	int n, m;//定义矩阵长，宽
	cin >> n >> m;
	int sum = 0;//定义细胞总数
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			char ch;
			cin >> ch;
			a[i][j] = ch-'0';//输入数据
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]&&!v[i][j])//如果该点不是0且未被标记
			{
				queue<point> r;//申请队列
				start.x = i;
				start.y = j;
				r.push(start);//将起点入队
				v[i][j] = 1;//标记该点已经访问
				while(!r.empty())
				{
					int x_now = r.front().x;//取出队首元素的x坐标
					int y_now = r.front().y;//取出队首元素的y坐标
					for(int i=0;i<4;i++)//向四个方向试探
					{
						int xx = x_now+x[i];
						int yy = y_now+y[i];
						if(xx>=1 && xx<=n && yy>=1 && yy<=m && a[xx][yy] && !v[xx][yy])
						{	//如果该点未超边界，该点的数值不是0，且该点未被标记，就将该点入队
							point temp;
							temp.x = xx;
							temp.y = yy;
							r.push(temp);
							v[xx][yy]++;//标记该点已访问
						}
					}
					r.pop();//将队首元素出队
				}
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>// 平台https://www.luogu.com.cn/problem/P1105
using namespace std;
int a[22222];//储存高度
int b[22222];//储存左端点坐标
int c[22222];//储存右端点坐标
int main()
{
	int n;//定义n个平台
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i] >> b[i] >> c[i];//输入每个平台的位置信息
	}
	for(int i=1;i<=n;i++)//按顺序处理每一个平台
	{
		int left = 0;//定义左落点
		int right = 0;//定义右落点
		for(int j=1;j<=n;j++)
		{
			if(a[i]>a[j]&&b[j]<b[i]&&c[j]>b[i])
			{//如果这个平台比正在处理的平台的高度低，且正在处理的平台的左端点在该平台的范围内
				if(a[left]<a[j])//使得该平台距离正在处理的平台最近
				{
					left = j;
				}
			}
		}
		for(int j=1;j<=n;j++)
		{//如果这个平台比正在处理的平台的高度低，且正在处理的平台的右端点在该平台的范围内
			if(a[i]>a[j]&&b[j]<c[i]&&c[j]>c[i])
			{
				if(a[right]<a[j])
				{
					right = j;
				}
			}
		}
		cout << left << ' ' << right << '\n';
	}
	return 0;
}
*/
/*
#include<iostream>// 单词方阵https://www.luogu.com.cn/problem/P1101
using namespace std;
char a[101][101];//储存原始数据
int v[101][101];//标记是否是字母
int x[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int y[8] = {1, 1, 0, -1, -1, -1, 0, 1};//与上式联合定义八个方向
char s[6] = {'i', 'z', 'h', 'o', 'n', 'g'};//定义六个字母
int n;//定义矩阵边长
int dfs(int r, int c,int t, int dir)
{//分别代表横纵坐标，数组s中的下标，方向
	if(a[r][c]=='g')
	{
		v[r][c]++;
		return 1;
	}
	int xx = r+x[dir];
	int yy = c+y[dir];
	if(xx>0&&xx<=n&&yy>0&&yy<=n&&a[xx][yy]==s[t])
	{//如果没有越界，且当前字母是当前递归中所要求的字母
		if(dfs(xx, yy, t+1, dir))
		{
			v[r][c]++;
			return 1;
		}
	}
	return 0;
}
int main()
{
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin >> a[i][j];//输入原始数据
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]=='y')//如果是'y'才开始搜索
			{
				for(int k=0;k<8;k++)//八个方向搜索
				{
					dfs(i, j, 0, k);
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(v[i][j])
			{
				cout << a[i][j];
			}
			else
			{
				cout << '*';
			}
		}
		cout << '\n';
	}
	return 0;
}
*/
/*
#include <iostream>// Backward Digit Sums G/Shttps://www.luogu.com.cn/problem/P1118
#include <algorithm>
#include <cstring>
using namespace std;
int a[13];
int b[13][13];
int c[13];
int main()
{
    int n,sum;
    cin >> n >> sum;
    for(int i=1; i<=n; i++)
	{
		a[i] = i;
	}
    for(int i=1;i<=n;i++)
	{
		b[i][1] = b[i][i] = 1;
	}
    for(int i=3;i<=n;i++)
	{
        for(int k=1;k<=(i-1)/2;k++)
		{
            b[i][k+1]=b[i][i-k]=b[i-1][k]+b[i-1][k+1];
        }
    }
    do
	{
        memcpy(c, a, sizeof(a));
        int sum2=0;
        for(int i=1;i<=n;i++)
		{
            sum2 += c[i]*b[n][i];
            if(sum2>sum)
			{//发现从当前开始的i位开始往后累加都会超过预期，就把它从大到小排一遍，再next的时候就能跳过这一段了              
				sort(a+i,a+n+1,greater<int>());
                break;
            }
        }
        if(sum2==sum)
		{
            for(int i=1;i<=n;i++)
			{
                cout << a[i] << " ";
            }
            return 0;
        }
    } while(next_permutation(a+1,a+1+n));
}
*/
/*
#include<iostream>
using namespace std;
int a[7][7];
int v[7][7];
int n, m;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		int sum = 0;
		int maxn = 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin >> a[i][j];
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				
			}
		}
	}
	return 0;
}
*/
/*
#include <iostream>// 取数游戏https://www.luogu.com.cn/problem/P1123
using namespace std;
int n,m;
int a[8][8];
int v[8][8];
int maxn;
void dfs(int x,int y,int sum)//x,y为当前搜索到的点
{
	if(x>n)//搜索整个矩阵
	{
		maxn = max(maxn, sum);
		return;
	}
	int xx=x,yy=y+1;//下一个点
	if(yy>m)//搜索下一行
	{
		xx++;
		yy=1;
	}
	if(!v[x-1][y]&&!v[x-1][y+1]&&!v[x][y+1]&&!v[x+1][y+1]
	&&!v[x+1][y]&&!v[x+1][y-1]&&!v[x][y-1]&&!v[x-1][y-1])//选择这个点
	{
		v[x][y]=1;
		dfs(xx, yy, sum+a[x][y]);
		v[x][y]=0;
	}
	dfs(xx, yy, sum);//不选这个点
}
int main()
{
    int t;
	cin >> t;
	while(t--) 
	{
		maxn = 0;
		cin >> n >> m;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin >> a[i][j];
			}	
		}
		dfs(1,1,0);
		cout << maxn << '\n';
	}
	return 0;
}
*/
/*
#include<iostream>// 开心的金明https://www.luogu.com.cn/problem/P1060
using namespace std;
int p[26];//储存每个物品的优先度
int v[26];//储存每个物品的价值
int f[30001];
int n,m;
int main()
{
	scanf("%d%d",&n,&m);//总钱数n元,m个物品
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&v[i],&p[i]);
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=n;j>=v[i];j--)
		{
			f[j] = max(f[j],f[j-v[i]]+p[i]*v[i]);//求价格与重要度乘积的总和的最大值，要相乘
		}    
	}
	printf("%d",f[n]); 
	return 0;
}
*/
/*
#include<iostream>// 小A点菜https://www.luogu.com.cn/problem/P1164
using namespace std;
int v[101];//储存每个物品的价值
int f[10001] = {1};//f[j]代表钱为j时的点菜方案数，一定要给f[0]赋值为1,因为没有钱时点菜方案有一种——不点菜
int n,m;
int main()
{
	scanf("%d %d",&n,&m);//总钱数m元,n个物品
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&v[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=v[i];j--)
		{
			f[j] += f[j-v[i]];
		}    
	}
	printf("%d",f[m]); 
	return 0;
}
*/
/*
#include<iostream>//填涂颜色https://www.luogu.com.cn/problem/P1162
#include<queue>
using namespace std;

int a[31][31];
int v[31][31];
int x[4] = {0, 1, 0, -1};
int y[4] = {1, 0, -1, 0};
int n;
struct point
{
	int x;
	int y;
}start;

void bfs(int i, int j)
{
	a[i][j] = 0;
	queue<point> r;//申请队列
	start.x = i;
	start.y = j;
	r.push(start);//将起点入队
	v[i][j]++;//标记该点已经访问
	while(!r.empty())
	{
		int x_now = r.front().x;//取出队首元素的x坐标
		int y_now = r.front().y;//取出队首元素的y坐标
		for(int i=0;i<4;i++)//向四个方向试探
		{
			int xx = x_now+x[i];
			int yy = y_now+y[i];
			if(xx>=0 && xx<=n+1 && yy>=0 && yy<=n+1 && a[xx][yy]!=1 && !v[xx][yy])
			{	//该处巧妙地从a数组的外围一圈进行bfs遍历
				point temp;
				temp.x = xx;
				temp.y = yy;
				r.push(temp);
				a[xx][yy] = 0;
				v[xx][yy]++;//标记该点已访问
			}
		}
		r.pop();//将队首元素出队
	}
}

// void dfs(int x1,int y1)
// {
// 	a[x1][y1]=0;
// 	v[x1][y1]++;
// 	for(int i=0;i<4;i++)
// 	{
// 		int ux = x1+x[i];
// 		int uy = y1+y[i];
// 		if(ux>=0 and ux<=n+1 and uy>=0 and uy<=n+1 and a[ux][uy]!=1 and !v[ux][uy])
// 		{
// 			dfs(ux,uy);
// 		}
// 	}
// }

int main()
{
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i][j] = 2;//先将数组a全赋值为2
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int num;
			cin >> num;
			if(num==1)
			{
				a[i][j] = 1;//如果输入值是1就将该点值由2变成1
			}
		}
	}
	bfs(0, 0);//二维数组原始数据是1-n行，1-n列，但这里选择从外围一圈开始广搜
	//dfs(0, 0);//还可选用深搜
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j!=1)
			{
				cout << ' ';
			}
			cout << a[i][j];
		}
		cout << '\n';
	}
	return 0;
}
*/
/*
#include<bits/stdc++.h>//涂色CSDN解答
using namespace std;
#define maxn 7
int a[maxn][maxn],n;
int dx[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
void dfs(int x,int y)
{
	a[x][y]=0;
	for(int i=0;i<4;i++)
	{
		int ux = x+dx[i][0],uy = y+dx[i][1];
		if(ux>=0 and ux<=n+1 and uy>=0 and uy<=n+1 and a[ux][uy]==2)
		{
			dfs(ux,uy);
		}
	}
}
int main()
{
	cin >> n;
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)a[i][j]=2;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int tmd;
			cin>>tmd;
			if(tmd==1)a[i][j]=1;
		}
	}
	dfs(0,0);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout << a[i][j] << " ";
		}
		if(i!=n)
		{
			cout << '\n';
		}
	}
	return 0;
}
*/
/*
#include<iostream>//高手之在一起https://www.luogu.com.cn/problem/P1184
#include<string>
using namespace std;
string str[21];
string str2[1000001];
int main()
{
	int n, m;
	int sum = 0;
	cin >> n;
	cin >> m;
	cin.get();//清除输入m后的回车键
	for(int i=0;i<n;i++)
	{
		getline(cin,str[i]);//输入高手方便去的地方
	}
	for(int i=0;i<m;i++)
	{
		getline(cin,str2[i]);//输入她在这一天的地方
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(str[i]==str2[j])//如果他们俩这一天在同一个地方
			{
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>// 奇怪的电梯https://www.luogu.com.cn/problem/P1135
using namespace std;//DFS版，目前有一个数据超时

int f[201];
int v[201];
int n, a, b;
int minn = 1e7;

void dfs(int start, int t)
{
	if(start<1 || start>n || t>minn || v[start])
	{
		return;
	}
	if(start==b)
	{
		minn = min(t, minn);
		return ;
	}
	v[start]++;
	dfs(start+f[start], t+1);
	dfs(start-f[start], t+1);
	v[start] = 0;
}

int main()
{
	cin >> n >> a >> b;
	for(int i=1;i<=n;i++)
	{
		cin >> f[i];
	}
	dfs(a, 0);
	if(minn==1e7)
	{
		cout << -1;
	}
	else
	{
		cout << minn;
	}
	return 0;
}
*/
/*
#include<iostream>// 奇怪的电梯https://www.luogu.com.cn/problem/P1135
#include<queue>//BFS版
using namespace std;

struct point
{
	int x;//定义当前楼层
	int step;//定义抵达该楼层需按下按钮的次数
};
int f[201];
int v[201];
int sum = -1;
int n, a, b;//定义总计楼层数，起始层，目标层

void bfs() 
{
	v[a]++;//标记该层已经走过
	queue <point> r;
	point temp;
	temp.x = a;//初始楼层赋值
	temp.step=0;
	r.push(temp);//队尾插入初始数据
	while(!r.empty())
	{
		point head = r.front() ;//取出队首元素
		if(head.x==b)
		{
			sum = head.step;//如果抵达目标层，就记录所需按下按钮的次数
			break;
		}
		int now_x = head.x+f[head.x];//定义在当前层按“上”后达到的楼层
		if(now_x<=n&&!v[now_x])
		{	
			v[now_x]++;//标记该层已经走过
			temp.x=now_x;
			temp.step=head.step+1;
			r.push(temp);//队尾插入该层数据
		}
		now_x = head.x-f[head.x];//定义在当前层按“下”后达到的楼层
		if(now_x>=1&&!v[now_x])
		{
			v[now_x]++;//标记该层已经走过
			temp.x = now_x;
			temp.step = head.step+1;
			r.push(temp);
		}
		r.pop();//弹出队首元素
	}
}
int main()
{
	cin >> n >> a >> b;
	for(int i=1;i<=n;i++)
	cin >> f[i];
	bfs();
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>// 硬币翻转https://www.luogu.com.cn/problem/P1146
#include<bitset>
using namespace std;

int main ()
{
	bitset<100>a;
	int n;
	cin >> n;
	cout << n << '\n';
	int num = n;
	while(num--)
	{
		a.flip();//全部翻转
		a.flip(num);//翻转指定硬币
		cout << a.to_string().substr(100-n, n) << '\n';
	}
	return 0;
}
*/
/*
#include<iostream>// 小书童——刷题大军https://www.luogu.com.cn/problem/P1926
#include<algorithm>
using namespace std;
int a[10];//输入他喜欢的每道题目所需的时间
int v[10];//老师布置的每项作业的分值
int w[10];//老师布置的每项作业所花时间
int f[10];//f[j]代表(0-i)个题目在j的时间限制下的最大可得分值
int main()
{
	int n, m, k, r;
	cin >> n >> m >> k >> r;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);//对他喜欢的每道题目所需的时间进行排序
	for(int i=1;i<=m;i++)
	{
		cin >> w[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin >> v[i];
	}
	int minn = 1e6;
	for(int i=1;i<=m;i++)
	{
		for(int j=r;j>=w[i];j--)
		{
			f[j] = max(f[j],f[j-w[i]]+v[i]);
			if(f[j]==k)//保证及格即可，这样才能刷更多自己喜欢的题
			{
				minn = min(j,minn);//可能存在多种组合使得获得的分值达到k，取所花时间最小的组合
			}
		}    
	}
	minn = r-minn;//剩余时间用于刷自己喜欢的题
	int sum = 0;//定义刷题数量
	for(int i=0;i<n;i++)
	{
		if((minn-a[i])>0)
		{
			minn -= a[i];
			sum++;
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>// 波浪数https://www.luogu.com.cn/problem/P1112
using namespace std;
int a[10000005];
//思路：枚举每一种m到n进制中l到r范围内的波浪数，用数组a标记，a[x]的值代表x这个数是几重波浪数
int main()
{
	int m, n, l, r, c;
	cin >> m >> n >> l >> r >> c;
 	//m,n是进制，l,r是边界，c是重数
	for (int i = m; i <= n; i++)
	{
		//从a进制开始，枚举到b进制，找出所有的波浪数
		for (int j = 1; j < i; j++)
		{
			//j, k是形成波浪的两个数,它们两不相等
			for (int k = 0; k < i; k++)
			{
				if (j != k)
				{
					int x = 0, t = 0;
					while (x <= r)
					{
						if (t % 2 == 0)
						{
							x = x * i + j;
							t++;
						}
						else 
						{
							x = x * i + k;
							t++;
						}
						if (x >= l && x <= r)
						{
							a[x]++;
						}
					}
				}
			}
		}
	}
	for (int i = l; i <= r; i++)
		if (a[i] == c)
		cout << i << endl;
	return 0;
}
*/
/*
#include<iostream>// Bookshelf 2 Bhttps://www.luogu.com.cn/problem/P2677
#include<algorithm>
using namespace std;

int a[21];//记录每头牛的高度
int main()
{
	int n;//定义n头牛
	cin >> n;
	int top;//定义书架高度
	cin >> top;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int cow_sum1 = 0;
	int cow_sum2 = 0;
	int sum1 = 0;
	int sum2 = 0;
	sort(a, a+n);//牛的高度从小到大排列
	for(int i=0;i<n;i++)
	{
		sum1 += a[i];//牛叠加的总高度
		cow_sum1++;//需要牛的数量+1
		if(sum1>=top)
		{
			break;
		}
	}
	sort(a, a+n, greater<int>());//牛的高度从大到小排列
	for(int i=0;i<n;i++)
	{
		sum2 += a[i];//牛叠加的总高度
		cow_sum2++;//需要牛的数量+1
		if(sum2>=top)
		{
			break;
		}
	}
	if(cow_sum1>cow_sum2)
	{
		cout << sum2-top;//两种sum的总叠加高度都能够得到书架，取需牛数量小的那种
	}
	else
	{
		cout << sum1-top;
	}
}
*/
/*
#include<iostream>// 高手去散步https://www.luogu.com.cn/problem/P1294
using namespace std;
int a[21][21];//a[i][j]储存了i到j的距离
int v[50];//用于标记
int n, m;//n个观景点，游步道m条
int maxn;//记录最大值

void dfs(int x, int sum)
{
	if(sum>maxn)
	{
		maxn = sum;
	}
	for(int i=1;i<=n;i++)//n个景点挨个尝试
	{
		if(!v[i]&&a[x][i])//如果存在x到i这条路，并且景点i没有去过
		{
			v[i] = 1;
			dfs(i, sum+a[x][i]);
			v[i] = 0;//回溯，清除标记
		}
	}
}

int main()
{
	cin >> n >> m;
	for(int i=1;i<=m;i++)
	{
		int b1, b2, distance;
		cin >> b1 >> b2 >> distance;
		a[b1][b2] = distance;
		a[b2][b1] = distance;//b1到b2和b2到b1的距离是一样的
	}
	for(int i=1;i<=n;i++)
	{
		v[i] = 1;//标记该点已经走过
		dfs(i, 0);//0表示总路程
		v[i] = 0;
	}
	cout << maxn;
	return 0;
}
*/
/*
#include<iostream>// L国的战斗之伞兵https://www.luogu.com.cn/problem/P1913
using namespace std;
char a[1001][1001];
int v[1001][1001];
int n, m;

void dfs(int i, int j)
{
	v[i][j] = 1;//标记可以能从无风区走到的地方
	if(a[i-1][j]=='d')
	{
		dfs(i-1, j);
	}
	if(a[i][j+1]=='l')
	{
		dfs(i, j+1);
	}
	if(a[i+1][j]=='u')
	{
		dfs(i+1, j);
	}
	if(a[i][j-1]=='r')
	{
		dfs(i, j-1);
	}
}
int main()
{
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]=='o')//逆向思维，从无风区开始搜索
			{
				dfs(i, j);
			}
		}
	}
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(v[i][j])
			{
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include <iostream>// 红牌https://www.luogu.com.cn/problem/P1130
using namespace std;
int a[2001][2001];
int main()
{
	int n, m;//定义步数和小组数
	cin >> n >> m;
	int sum = 1e7;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin >> a[i][j];
		}
	}
	for(int j=n-1;j>=1;j--)//逆向计算耗时最少，正向不可行（为什么）
	{
		for(int i=1;i<=m;i++)
		{
			a[i][j] += min(a[i][j+1], a[i%m+1][j+1]);//取该“行”上一步和下一行“上一步”的最小值
		}
	}
	for(int i=1;i<=m;i++)
	{
		sum = min(sum, a[i][1]);
	}
	cout << sum << endl;
	return 0;
}
*/
/*
#include<iostream>// 精卫填海https://www.luogu.com.cn/problem/P1510
using namespace std;
int a[10001],b[10001];
int f[10001];
int main()
{
	int n, m, c;
    cin >> n >> m >> c;
    for(int i=1;i<=m;i++)
	{
        cin >> a[i] >> b[i];
    }
    for(int i=1;i<=m;i++)
	{
        for (int j=c;j>=b[i];j--)
		{
            f[j] = max(f[j],f[j-b[i]]+a[i]);//消耗j的力气最多可以搬运的石子
        }
    }
    for(int i=1;i<=c;i++)
	{
        if(f[i] >= n )
		{
            cout << c-i;//i 越小剩余体力越大。
            return 0;
        }
        
    }
	cout << "Impossible";
	return 0;
}
*/
/*
#include<iostream>// 烹调方案https://www.luogu.com.cn/problem/P1417
#include<algorithm>
using namespace std;
struct food
{
	long long a;
	long long b;
	long long c;
}f[51];
long long w[10005];
long long sum;

bool cmp(food x, food y)
{
	return x.c*y.b < x.b*y.c;
}
int main()
{
	int t, n;
	cin >> t >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> f[i].a;
	}
	for(int i=1;i<=n;i++)
	{
		cin >> f[i].b;
	}
	for(int i=1;i<=n;i++)
	{
		cin >> f[i].c;
	}
	sort(f+1,f+1+n,cmp);
	for(int i=1;i<=n;i++)
	{
		for(int j=t;j>=f[i].c;j--)
		{
			w[j] = max(w[j], w[j-f[i].c]+f[i].a-j*f[i].b); 
		}
	}
	for(int i=1;i<=t;i++)
	{
		sum = max(sum, w[i]);
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>// 最大约数和https://www.luogu.com.cn/problem/P1734
using namespace std;
int f[1002];
int v[1002];//储存1至n中每个数约数和
int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		for(int j=2;i*j<=n;j++)
		{
			v[i*j] += i;//获取每个数的约数和
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			f[j] = max(f[j], f[j-i]+v[i]);
			//一维01背包，背包容量为n，同时有n个物品，1至n中每个物品重量就是其本身，物品价值就是约数和
		}
	}
	cout << f[n];
	return 0;
}
*/
/*
#include <iostream>// 集合 Subset Sumshttps://www.luogu.com.cn/problem/P1466
using namespace std;
long long dp[40][391];//（1+39）*39/2等于390,39为该题最大测试数据
int v[40];
//1至n个数划分成两个子集合，且保证每个集合的数字和是相等的，即每个集合数字和为前n个数的一半
//该题就是从1-n个数中抽取任意个数，使其和为前n个数的和一半，求这样的方案数存在几个？
int main()
{
    int n,sum;
    cin >> n;
	sum = (1+n)*n/4;
	if(sum*4/n != n+1)
	{
		cout << 0;
		return 0;
	}
    for(int i=1;i<=n;i++)
    {
        v[i] = i;
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0] = 1;
    }
    // 3. 根据上一行的值算出当前位置的值
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(v[i] > j)
            {// 如果当前的 v[i]>j, 表示当前的v[i]无法和别的值相加等于j,所以继承上一行的值即可
                dp[i][j] = dp[i-1][j];
            }
            else
            {// 如果当前的 v[i]<=j,就表示v[i]可能和一个比自己小的j值组合为当前的j值
             // 那只需要首先继承上一行的值,再加上对应需要的j值的值即可
                dp[i][j] = dp[i-1][j] + dp[i-1][j-v[i]];
            }
        }
    }
    cout << dp[n][sum]/2;//按照题目所说，最后输出的划分方案数应该除以2
    return 0;
}
*/
/**
#include<iostream>// Broken Necklace https://www.luogu.com.cn/problem/P1203
#include<string>
using namespace std;
int ans=-1;
string a;
int f(int x)
{
	int s = 0;
	char a1=a[x],b1=a[x+1];
	for(int i=x;;i--)
	{
		if(a[i]==a1||a[i]=='w')
		{
			s++;
		}
		else
		{
			break;
		}
	}
	for(int i=x+1;;i++)
	{
		if(a[i]==b1||a[i]=='w')
		{
			s++;
		}
		else break;
	}
	return s;
}
int main()
{
	int n,len,m,i,j,k,x,y;
	cin >> len >> a;
	a = a+a+a;
	for(i=len;i<len*2;i++){
		if(a[i]==a[i+1])
			continue;
		if(a[i]=='w'){
			a[i]='r'; ans=max(ans,f(i));
			a[i]='b'; ans=max(ans,f(i));
			a[i]='w';
		}
		ans=max(ans,f(i));
	}
	ans=min(ans,len);
	if(ans==-1) ans=len;
	printf("%d",ans);
	return 0;
}
*/
/*
#include<iostream>// task3
#include<cstdio>
#include<algorithm>
using namespace std;
int a[7] = {1, 2, 3, 4, 5, 6, 7};
string str[7];
int main()
{
    int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> str[i];
	}
    do
	{
		int flag = 0;
		for(int i=0;i<n;i++)
		{
			if(str[i][1] == '=')
			{
				int aim1 = str[i][0]-'A'+1;
				int aim2 = str[i][2]-'0';
				int* position;
				position = find(a, a+7, aim1);
				if(position-a+1 != aim2)
				{
					flag++;
					break;
				}
			}
			else if(str[i][1] == '<')
			{
				int aim1 = str[i][0]-'A'+1;
				int aim2 = str[i][2]-'A'+1;
				int aim3 = str[i][3]-'0';
				int* position1;
				position1 = find(a, a+7, aim1);
				int* position2;
				position2 = find(a, a+7, aim2);
				if(position1-position2 != aim3)
				{
					flag++;
					break;
				}
			}
			else if(str[i][1] == '>')
			{
				int aim1 = str[i][0]-'A'+1;
				int aim2 = str[i][2]-'A'+1;
				int aim3 = str[i][3]-'0';
				int* position1;
				position1 = find(a, a+7, aim1);
				int* position2;
				position2 = find(a, a+7, aim2);
				if(position2-position1 != aim3)
				{
					flag++;
					break;
				}
			}
			if(flag)
			{
				break;
			}
		}
		if(!flag)
		{
			cout << "The list of duty personnel from Monday to Sunday is as follows\n";
			for(int i=0;i<7;i++)
			{
				if(!i)
				{
					printf("%c", a[i]-1+'A');
				}
				else
				{
					printf(" %c", a[i]-1+'A');
				}
			}
			return 0;
		}
    }while(next_permutation(a,a+7));
    return 0;
}
*/
// 7
// A<C1
// D<E1
// E>B2
// B>G4
// F<B1
// F>C1
// F=4测试案例
/*
#include<iostream>// Cow Exhibition Ghttps://www.luogu.com.cn/problem/P2340
#include<cstring>
using namespace std;//带负数偏移的01背包
int a[401];
int b[401];
int f[800001];
int main()
{
	int n;
    cin >> n;
    for(int i=1;i<=n;i++)
	{
		cin >> a[i] >> b[i];
	}
	memset(f, -1e7, sizeof(f));
	f[400000] = 0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>= 0)
			for(int j=800000;j>=a[i];j--)
				f[j] = max(f[j], f[j-a[i]]+b[i]);
		else
			for(int j=0;j<= 800000;j++)
				f[j] = max(f[j], f[j-a[i]]+b[i]);
	}
	int sum = 0;
	for(int i = 400000; i <= 800000; i ++)
	{
		if(f[i] > 0)
		{
			sum = max(sum, i + f[i] - 400000);
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>// 考前临时抱佛脚https://www.luogu.com.cn/problem/P2392
using namespace std;
int a[4];//储存每个科目几道题
int b[21];//储存该科目每道题的时间
int f[401];//代表在限定时间内做题的价值，把每道题所花时间看成是这道题的价值
int main()
{
	for(int i=1;i<=4;i++)
	{
		cin >> a[i];
	}
	int sum = 0;
	for(int i=1;i<=4;i++)
	{
		int time_sum = 0;
		for(int j=1;j<=a[i];j++)
		{
			cin >> b[j];
			time_sum += b[j];
		}
		for(int j=1;j<=a[i];j++)
		{
			for(int k=time_sum/2;k>=b[j];k--)//让一变的脑子在time_sum/2的时间内尽量做更多的题
			{//time_sum如果是奇数，除以2后会导致它比真实值的一半要小(它是整型变量)
				f[k] = max(f[k], f[k-b[j]]+b[j]);
			}
		}
		sum += time_sum-f[time_sum/2];//sum为全科目总耗时，time_sum-f[time_sum/2]为当前科目总耗时
		for(int k=0;k<=time_sum/2;k++)
		{
			f[k] = 0;
		}
	}
	cout << sum;
	return 0;
}
*/
/*
#include<iostream>// Frog 1https://www.luogu.com.cn/problem/AT_dp_a
#include<cmath>
using namespace std;
int f[100001],h[100001];
int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) 
		cin >> h[i];
	f[1] = 0,f[2] = abs(h[2] - h[1]);
	for(int i=3;i<=n;i++)
	{
		f[i] = min(f[i-1]+abs(h[i-1]-h[i]),f[i-2]+abs(h[i-2]-h[i]));
	}
	cout << f[n];
	return 0;
}
*/
/*
#include<iostream>// Frog 2https://www.luogu.com.cn/problem/AT_dp_b
#include<cstring>
#include<cmath>
int a[100002];
int f[100002];
using namespace std;
int main()
{
	int aim;
	int k;
	cin >> aim >> k;
	memset(f, 1e6, sizeof(f));
	f[1] = 0;
	for(int i=1;i<=aim;i++)
	{
		cin >> a[i];
	}
	for(int i=2;i<=aim;i++)
	{
		for(int j=max(1, i-k);j<i;j++)
		{
			f[i] = min(f[i], f[j]+abs(a[i]-a[j]));
		}
	}
	cout << f[aim];
	return 0;
}
*/
/*
#include<iostream>// 租用游艇https://www.luogu.com.cn/problem/P1359
using namespace std;
int f[201]; //f[x]表示从1到x的距离
int main()
{
	int n;
	cin >> n;
	int num;
    for(int i=1;i<=n;i++)
	{
        for(int j=i+1;j<=n;j++)
        {
			cin >> num;
            if (f[j]==0||f[j]>f[i]+num) //如果j还没有到过或者到j的距离比原来短
                f[j]=f[i]+num; //替换
        }
	}
	cout << f[n];
}
*/
/*
#include<iostream>// NASA的食物计划https://www.luogu.com.cn/problem/P1507
using namespace std;
int v[51];//体积
int w[51];//质量
int k[51];//卡路里
int f[501][501];
int main()
{
	int h;//体积最大值
	int t;//质量最大值
	int n;//食品总数
    cin >> h >> t >> n;
    for(int i=1;i<=n;i++)
		cin >> v[i] >> w[i] >> k[i];//表示每个食品的体积质量和卡路里；
    for(int i=1;i<=t;i++)
	{
		for(int j=h;j>=v[i];j--)
		{
			for(int p=t;p>=w[i];p--)
			{
				f[j][p]=max(f[j][p],f[j-v[i]][p-w[i]]+k[i]);
			}
		}
	}
	cout << f[h][t];//输出最优解
	return 0;
}
*/
/*
#include<iostream>// 通天之分组背包https://www.luogu.com.cn/problem/P1757
using namespace std;// 分组背包
int v[1001][1001];
int w[1001][1001];
int g[1001];
int f[1001];
int main()
{
	int n, m;//n件物品，总质量为m
	cin >> m >> n;
	int g_num = 0;//物品组数
	for(int i=1;i<=n;i++)
	{
		int value, weight, group;
		cin >> weight >> value >> group;
		g_num = max(g_num, group);
		g[group]++;
		v[group][g[group]] = value;
		w[group][g[group]] = weight;
	}
	for(int i=1;i<=g_num;i++)
	{
		for(int j=m;j>=0;j--)
		{
			for(int k=1;k<=g[i];k++)
			{
				if(w[i][k]<=j)
				{
					f[j] = max(f[j], f[j-w[i][k]]+v[i][k]);
				}
			}
		}
	}
	cout << f[m];
	return 0;
}
*/
/*
#include<iostream>// 疯狂的采药https://www.luogu.com.cn/problem/P1616
using namespace std;//完全背包问题
int w[10001];//储存每种药所需时间
int v[10001];//储存每种药品的价值
long long f[10000001];
int main()
{
	int n;
	int t;
	cin >> t >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> w[i] >> v[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=w[i];j<=t;j++)
		{
			f[j] = max(f[j],f[j-w[i]]+v[i]);
		}   
	}
	cout << f[t];
	return 0;
}
*/
/*
#include<iostream>// 最长上升子序列https://www.luogu.com.cn/problem/B3637
using namespace std;
using namespace std;
int a[5001],dp[5001];
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)//枚举子序列的终点
	{
		dp[i]=1;// 初始化为1，长度最短为自身
		for(int j=1; j<i; j++)//从头向终点检查每一个元素
		{
			if(a[i]>a[j])
			{
				dp[i] = max(dp[i],dp[j]+1);
			}
		}
		sum = max(sum,dp[i]);  // 比较每一个dp[i],最大值为答案
	}
	cout << sum;
    return 0;
}
*/
/*
#include<iostream>// 严酷的训练 https://www.luogu.com.cn/problem/P2430
using namespace std;//01背包问题
const int N=10;
int v[N],w[N],t[N];
int f[N];
int main()
{
	int s1, s2;
	cin >> s1 >> s2;
	int multiple = s2/s1;
	int n,m;//m表示题目总数，n表示知识点总数
	cin >> m >> n;
	for(int i=1;i<=n;i++)
	{
		int time;
		cin >> time;
		t[i] = time*multiple;
	}
	for(int i=1;i<=m;i++)
	{
		int point;
		cin >> point;
		w[i] = t[point];
		cin >> v[i];
	}
	int time_total;
	cin >> time_total;
	for(int i=1;i<=m;i++)
	{
		for(int j=time_total;j>=w[i];j--)
		{
			f[j] = max(f[j], f[j-w[i]]+v[i]);
		}
	}
	cout << f[time_total] << endl;
	
	return 0;
	
}
*/
/*
#include<iostream>// NAS大朋友的数字https://www.luogu.com.cn/problem/P2008
#include<cstdio>
#include<cstring>//使用memset()
using namespace std;

int a[10005];//原始序列
int f[10005];//所在位置的最长不下降子序列的长度 
int sum[10005];//所在位置的序列和 

int main()
{
	int n;
	cin >> n;
	//初始化为1，则所在位置的最大长度包括本身
	//（初始为0，不影响最后序列和）
	memset(f,1,sizeof(f));
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		sum[i]=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>0&&j>i;j--)
		{//a[j]在a[i]之后 
			if(a[j]>=a[i]&&f[j]<f[i]+1)
			{
			//a[j]>a[i]，确保不降序 且 j的序列长度 < i的序列长度+1
				sum[j] = sum[i]+a[j];//更新j位置的序列和 
				f[j] = f[i]+1;//更新j位置的序列长度 
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout << sum[i] << ' ';
	}
	return 0;
}
*/
/*
#include<iostream>// NAS硬币问题https://www.luogu.com.cn/problem/B3635
using namespace std;
int f[1000001];//储存答案
int main()
{
	int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        f[i] = 1+f[i-1];
        if(i>=5)
		{
            f[i] = min(f[i],1+f[i-5]);
		}
        if(i>=11)
		{
            f[i] = min(f[i],1+f[i-11]);//寻找所有方案中的最优解
		}
    }
    cout << f[n]; 
    return 0;
}
*/
/*
#include<iostream>// NAS删数https://www.luogu.com.cn/problem/P2426
#include<cmath>
int a[105],dp[105][105];
using namespace std;
int main()
{
    int n;
	cin >> n;
    for(int i=1;i<=n;i++)
    {
		cin >> a[i];
        dp[i][i]=a[i];//取一个数的话价值就是他的本身
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;i+j-1<=n;j++)
        {
            int k = j+i-1;
            dp[j][k] = abs(a[j]-a[k])*(k-j+1);//每次更新，新区间的值
            for(int p=j;p<=k;p++)
            {
				dp[j][k] = max(dp[j][k],dp[j][p]+dp[p+1][k]);//再用原来的区间来更新新区间
            }
        }
    }
	cout << dp[1][n];
    return 0;
}
*/
/*
#include <iostream>// NAS围栏木桩https://www.luogu.com.cn/problem/P2362
#include <cstring>
using namespace std;
int dp[155];
int ge[155]; //dp是指以某数结尾的zcbjxl的长度，ge是指以某数结尾的zcbjxl的个数。

int main()
{
	int m;
	int n ;
	int h;
    cin >> m;
    for(int i=1;i<=m;i++)
    {
        memset(dp,0,sizeof(dp));
        memset(ge,0,sizeof(ge));
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin >> h;
            int flag=0;
            int lge=0;
            for(int k=j;k>=1;k--)  // 从能到达的最长往下搜，就可以找出最长了。
            {
                for(int p=1;p<=h;p++) //以1-h结尾的序列都是后面能接h的序列。
                {
                    if(dp[p]==k)  //如果找到某个数满足条件。
                    {
                        lge = lge+ge[p]; //然后个数，就要加上这个满足条件的数了，不是加1，因为以他结尾的最长不降序列的个数是ge【l】。
                        flag=1;//改标记。
                    }
                }  //循环结束时，就能找出所有这个长度的不降序列了。
                if(flag==1)  //flag==1说明找到了满足条件的数，就可以进行接下来的操作了。
                {
                    dp[h]=k+1;  //然后，以新数h结尾的zcbjxl的长度加1.
                    ge[h]=lge;  //然后，这种序列的个数，就是刚才累计好的那个数了。 
                    break;   //已经找到最长的了，当然退出。       
                }   
            }
            if(flag==0) //没有找到。说明前面没有比你这个新数更小的数啦。
            {
                dp[h]=1;  //所以长度为1，个数也为1。
                ge[h]=1;  //想想上面的k为什么不直接搜索到0结束，是不是这样就可以省略flag了。
            }
        }
        for(int j=20;j>=1;j--)  //倒序寻找最长的。
        {
            int flag=0;
                for(int p=1;p<=150;p++)
                {
                    if(dp[p]==j)
                    {
                        cout << j << " " << ge[p] <<endl;
                        flag=1;
                    }
                }
                if(flag==1)break;                   
        }   
    }
    return 0;
}
*/
/*
#include<iostream>// NAS又上锁妖塔https://www.luogu.com.cn/problem/P2800
#include<cstring>
using namespace std;
int a[1000000];
int dp[1000000][5];
int main()
{
	int n;
    cin >> n;
    for(int i=1;i<=n;i++)
	{
		cin >> a[i];
    }
    memset(dp,0x3f,sizeof(dp));
    dp[0][0]=0;
    dp[0][1]=0;
    for(int i=0;i<=n;i++)
	{
        dp[i+1][0]=min(dp[i+1][0],min(dp[i][0],dp[i][1])+a[i+1]);//爬上一层，这层无所谓飞过来还是爬过来，最后加上高度花费 
        dp[i+1][1]=min(dp[i+1][1],dp[i][0]);//飞一层上去，必须是从这层爬过来的转移 
        dp[i+2][1]=min(dp[i+2][1],dp[i][0]);//飞两层上去，必须是从这层爬过来的转移 
    }
    cout << min(dp[n][0],dp[n][1]);
    return 0;
}
*/
/*
#include<iostream>// NAS走方格https://www.luogu.com.cn/problem/P8707
using namespace std;
int f[35][35];
int main()
{
	int n;
	int m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		f[i][1]=1;
	}
	for(int j=1;j<=m;j++)
	{
		f[1][j]=1;
	}
	//从起始点到第一行和第一列的方案数都为 1 
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=m;j++)
		{
			if(i%2==0&&j%2==0)
			{
				f[i][j]=0;//不能进入：将方案数赋为 0 
			}
			else 
			{
				f[i][j]=f[i-1][j]+f[i][j-1];//能进入：计算从左和从上走到当前位置的方案数 
			}
		}
	}
	cout << f[n][m];//输出答案 
	return 0;
}
*/
/*
#include<iostream>// 文字工作https://www.luogu.com.cn/problem/B3636
using namespace std;
int dp[1000005];
int main()
{
	int n;
	cin >> n;
	for(int i=2;i<=n;i+=2)
	{
		dp[i] = min(dp[i-1], dp[i/2])+1;
		dp[i+1] = dp[i]+1;
	}
	cout << dp[n];
	return 0;
}
*/
/*
#include<iostream>// 摆花https://www.luogu.com.cn/problem/P1679
using namespace std;
#define mod 1000007;
int a[105];
int f[105] = {1};//f(i, j)代表从前i种花中选出j盆花的方法数
int main()
{
	int n;//n种花
	int m;//一共需要摆m盆
    cin >> n >> m;
    for(int i=1; i<=n; i++)
	{
		cin >> a[i];
	}
    for(int i=1;i<=n;i++)
	{
        for(int j=m;j>0;j--)
		{
            for(int k=1;k<=min(a[i],j);k++)//每种花都有被选择的次数上限
			{
				f[j] = (f[j] + f[j-k])%mod;//按照题目要取模
			}
		}
	}
    cout << f[m] << endl;
    return 0;
}
*/
/*
#include<iostream>// 赚大钱https://www.nitacm.com/problem_show.php?pid=131
using namespace std;
int a[10005];
int main()
{
	int total = 0;
	cin >> total;
	for(int p=1;p<=total;p++)
	{
		int n = 0;
		long long sum = 0;
		long long max = 0;
		int preStart = 1;
		int start = 1;
		int end = 1;
		int flag = 0;
		cin >> n;
		for(int i=1;i<=n;i++)
		{
			cin >> a[i];
		}
		for(int i=1;i<=n;i++)
		{
			sum += a[i];
			if(max<sum)
			{
				max = sum;
				start = preStart;
				end = i;
				flag++;
			}
			if(sum<=0)
			{
				sum = 0;
				preStart = i+1;
			}
		}
		if(!flag)
		{
			cout << "0 0 0" << "\n\n";
		}
		else
		{
			cout << max << ' ' << start << ' ' << end << "\n\n";
		}
	}
    return 0;
}
*/
/*
#include<iostream> // 最小子序长度
using namespace std;
long long a[500005];
int main()
{
	int n;
	long long aim;
	while(cin>>n>>aim)
	{
		long long sum = 0;
		int minn = 1e8;
		int preStart = 1;
		int start = 1;
		int end = 1;
		for(int i=1;i<=n;i++)
		{
			cin >> a[i];
		}
		for(int i=1;i<=n;i++)
		{
			sum += a[i];
			if(sum>=aim)
			{
				start = preStart;
				end = i;
				minn = min(minn, end-start+1);
				sum = 0;
			}
			if(sum<=0)
			{
				sum = 0;
				preStart = i+1;
			}
		}
		if(minn==1e8)
		{
			cout << -1 << '\n';
		}
		else
		{
			cout << minn << "\n";
		}
	}
    return 0;
}
*/
/*
#include<iostream>// https://www.nitacm.com/problem_show.php?pid=1004
using namespace std;
int a[100005];
int main()
{
	int total = 0;
	cin >> total;
	for(int p=1;p<=total;p++)
	{
		int n = 0;
		long long sum = 0;
		long long max = -100000;
		int preStart = 1;
		int start = 1;
		int end = 1;
		cin >> n;
		for(int i=1;i<=n;i++)
		{
			cin >> a[i];
		}
		for(int i=1;i<=n;i++)
		{
			sum += a[i];
			if(max<sum)
			{
				max = sum;
				start = preStart;
				end = i;
			}
			if(sum<0)
			{
				sum = 0;
				preStart = i+1;
			}
		}
		cout<<"Case "<<p<<":"<<endl<<max<<" "<<start<<" "<<end<<endl;
        if(p!=total)  cout<<endl;
    }
    return 0;
}
*/
/*
#include<string>// 回文？？？https://www.nitacm.com/problem_show.php?pid=146
#include<iostream>
using namespace std;
string str;
int i, j;
int judge(int left, int right)
{
	for(i=left,j=right;i<=j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		cin >> str;//输入字符串
		int len = str.length();
		int r = len/2;
		int flag = 0;
		for(i=0,j=len-1;i<=r;i++,j--)//先判断是不是回文字符串
		{
			if(str[i]!=str[j])
			{
				flag++;//标记不是回文字符串
				break;
			}
		}
		if(!flag)
		{
			cout << "YES!\n";
		}
		else
		{
			if(judge(i,j-1)||judge(i-1,j))//从两端删除一个字符，看是否是回文字符
			{
				cout << "YES!\n";
			}
			else
			{
				cout << "NO!\n";
			}
		}
	}
	return 0;
}
*/
/*
#include<iostream>// 神奇的四次方数https://www.luogu.com.cn/problem/P1679

using namespace std;

int dp[1005];

int main()
{
    int m;
    cin >> m;

    // 遍历每个数字，从1到m
    for(int i=1; i<=m; i++)
    {
        dp[i] = 1e9; // 初始化为一个大值，因为我们要找到最小值

        // 遍历每个小于等于i的四次方数
        for(int j=1; j*j*j*j<=i; j++)
        {
            // 使用递推关系更新dp[i]
            dp[i] = min(dp[i - j*j*j*j] + 1, dp[i]);
        }
    }

    // 输出答案
    cout << dp[m];

    return 0;
}
*/








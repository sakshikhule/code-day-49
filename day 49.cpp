#include <bits/stdc++.h>
using namespace std;
void SpecialSort(int vec1[],int n)
{
int idx=0;
sort(vec1,vec1+n);
while(vec1[idx] < 0)
{
idx++;
}
int start = idx,end = n-1;
while(start<end)
{
swap(vec1[start],vec1[end]);
start++;
end--;
}
}
int MinimumScalarProduct(int vec1[],int vec2[],int n)
{
int min,sop=0,id1,id2;
for(int i = 0 ; i<n ; i++)
{
min = INT_MAX;
for(int j = i ; j<n ; j++)
{
if((vec1[i]*vec2[j]) < min)
{
min = vec1[i]*vec2[j];
id1 = i; id2 = j;
}
}
sop = sop + min;
swap(vec1[i],vec1[id1]);
swap(vec2[i],vec2[id2]);
}
return sop;
}
int main()
{
int n;
cin>>n;
int vec1[n];
for(int i = 0 ; i<n ; i++)
{
cin>>vec1[i];
}
int vec2[n];
for(int i = 0 ; i<n ; i++)
{
cin>>vec2[i];
}
SpecialSort(vec1,n);
cout<<MinimumScalarProduct(vec1,vec2,n);
return 0;
}


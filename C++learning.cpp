// cpplearning

// #include <iostream>
// #include <math.h>
// using namespace std;
//  void decToBinary(int n)
//  {
// 	// array to store binary number
// 	int binaryNum[32];

// 	// counter for binary array
// 	int i = 0;
// 	while (n > 0) {

// 		// storing remainder in binary array
// 		binaryNum[i] = n % 2;
// 		n = n / 2;
// 		i++;
// 	}

// 	// printing binary array in reverse order
// 	for (int j = i - 1; j >= 0; j--)
// 		cout << binaryNum[j];
// }

// int main()
// {
/*
cout<<"hello world" << endl;
cout<<"How Are you" <<endl;
cout<<"hi" <<endl;
int a=43;
cout<<a <<endl;
float b=1323.232;
cout<<b <<endl;
double d=1.987;
cout<<d <<endl;
int sizea =sizeof(a);
int sizeb =sizeof(b);
int sized =sizeof(d);

cout<<"size of a is " << sizea <<endl;
cout<<"size of b is " << sizeb <<endl;
cout<<"size of d is " << sized <<endl;

int x,y;
cout<<"Enter the value of x" <<endl;
cin>>x;
cout<<"Enter the value of y" <<endl;
cin>>y;
if(x==y){
    cout<<"x eqy" <<endl;
}
else{
    cout<<"x !=y" <<endl;
}


/////////while loop///////

int n;
cout<<"Enter value of n" <<endl;
cin>>n;
int i=1;
while(i<=10){
    cout<<"Ram Ram " <<i*n <<endl;
    i=i+1;
}*/
/*
    /////////sum of even digits upto n/////
    int n;
    cout<<"Enter value of n" <<endl;
    cin>>n;
    int i=0;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
        cout<<sum <<endl;

    }

    cout<<"the sum of n digit is"<< sum <<endl;
*/
/*
 /////////sum of n even digits/////
    int n;
    cout<<"Enter value of n" <<endl;
    cin>>n;
    int i=0;
    int sum=0;
    while(i<=2*n){
        sum=sum+i;
        i=i+2;
        cout<<sum <<endl;
    }
    cout<<"the sum of n digit is"<< sum <<endl;
    }*/

////// sum of odd digits ///////
/* int n;
 cout<<"Enter value of n" <<endl;
 cin>>n;
 int i=1;
 int sum=0;
 while(i<=n){
     cout<<i<<"\t"<<sum <<endl;
             sum=sum+i;
     i=i+2;


 }

 cout<<"the sum of n digit  is"<< sum <<endl;

*/
// "//check whether the given number is prime or not?"
/*
int n;
cout<<"Enter the number you want to check" <<endl;
cin>>n;
int i=2;
while(i<n){
    if(n%i==0){
        cout<<"Not a prime" << i <<endl;
    }
    else{
        cout<<"prime"<< i <<endl;
    }
    i=i+1;
}
*/

/*
*
**
***
****
*****
int n;
cout<<"Enter n" <<endl;
cin>>n;
int i=1;

while(i<=n){
    int j=1;
    while(j<=i){
        cout<<"*";
        j=j+1;
    }
    cout <<endl;
    i=i+1;
}

int n;
cout<<"Enter n" <<endl;
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";


    }
    cout<<"\n";

}

return 0;


}
*/

/*
11111
22222
33333
44444
55555

int n;
cout<<"Enter n" <<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<i;

    }
    cout<<"\n";

}
*/
/*
12345
12345
12345
12345
12345
int n;
cout<<"Enter n" <<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<j;

    }
    cout<<"\n";



}*/
/*
54321
54321
54321
54321
54321
int n;
cout<<"Enter n" <<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<n-j+1;

    }
    cout<<"\n";



}
*/

/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
int n;
cout<<"Enter n" <<endl;
cin>>n;
int count=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<count<<" ";
        count=count + 1;

    }
    cout<<"\n";



}
*/
/*
1
22
333
4444
55555

int n;
cout<<"Enter n" <<endl;
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<i;


    }
    cout<<"\n";

}*/
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
int n;
cout<<"Enter n" <<endl;
cin>>n;
int i=1;
int count =1;

while(i<=n){
    int j=1;
    while(j<=i){
        cout<<count<<" ";
        count=count+1 ;
        j=j+1;
    }
    cout <<endl;
    i=i+1;
}
*/
/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
int n;
cout<<"Enter n" <<endl;
cin>>n;

for(int i=1;i<=n;i++){
    int count=i;
    for(int j=1;j<=i;j++ ){
    cout<<count<<" ";
    count=count+1;

}
cout <<endl;
}
*/
/*
1
21
321
4321
54321
int n;
cout<<"Enter n" <<endl;
cin>>n;

for(int i=1;i<=n;i++){
    int count=i;
    for(int j=1;j<=i;j++){
    cout<<count;
    count--;



}
cout <<endl;
}

int n;
cout<<"Enter n" <<endl;
cin>>n;

for(int i=1;i<=n;i++){
    int count=i;
    for(int j=1;j<=i;j++){
    cout<<i-j+1 ;



}
cout <<endl;
}
*/
/*
AAAA
BBBB
CCCC
DDDD
int n;
cout<<"Enter n" <<endl;
cin>>n;
// char ch='A';
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        char ch='A'+i-1;
        cout<<ch;

    }
    cout <<endl;
}
*/
/*
ABC
ABC
ABC

int n;
cout<<"Enter n" <<endl;
cin>>n;
// char ch='A';
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        char ch='A'+j-1;
        cout<<ch;

    }
    cout <<endl;
}*/
/*
ABC
DEF
GHI
int n;
cout<<"Enter n" <<endl;
cin>>n;
// char ch='A';
int count=0;
for(int i=1;i<=n;i++){

    for(int j=1;j<=n;j++){
        char ch='A'+count;
        count++;
        cout<<ch;

    }
    cout <<endl;
}*/
/*ABC
BCD
CDE

int n;
cout<<"Enter n" <<endl;
cin>>n;
// char ch='A';

for(int i=1;i<=n;i++){
    int count=i;
    for(int j=1;j<=n;j++){
        char ch='A'+i+j-2;
        // count++;
        cout<<ch;

    }
    cout <<endl;
}*/
/*
A
BB
CCC
int n;
cout<<"Enter n" <<endl;
cin>>n;
for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++){
        char ch=('A'+i-1);
        cout<<ch;


    }
    cout <<endl;
}*/
/*
    *
   ***
  *****
 *******
int n;
cout<<"Enter n" <<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int space=n-i;space>=0;space--){
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){

        cout<<"*";


    }
    cout <<endl;


}
*/
// int a=4;
// int b=6;

// cout<< (a&b) <<endl;
// cout<< (a^b) <<endl;
// cout<< (a|b) <<endl;
// cout<< (~b) <<endl;

// int a=3;
// int b=++a;
// int c=a++;
// cout<<b <<endl;
// cout<<c <<endl;
/*
/////////checking prime number//////
int n;
cout<<"Enter value of n" <<endl;
cin>>n;
bool isPrime=1;

for(int i=2;i<n;i++){
    if(n%i==0){
        isPrime=0;
        break;

    }
}


    if(isPrime==0){
    cout<<"not a prime" <<endl;

    }
    else{
    cout<<"prime" <<endl;



}
*/

// C++ program to convert a decimal
// number to binary number

// function to convert decimal to binary
// Driver program to test above function

///// dict function is at top/////
// int n = 5;
// decToBinary(n);
// return 0;
/////////////  Decimal to binary ////////
/*int n;
 cout<<"Enter the number yu want to change to the binary digit" <<endl;
 cin>>n;
 int ans=0;
 int i=0;
 while(n!=0){
     int digit =n&1;
     ans = (digit * pow(10,i))+ ans;
     n=n>>1;
     i++;

 }
cout<<"answer is"<< ans <<endl;
*/

/*  Binary to decimal
int n;
 cout<<"Enter the number yu want to change to the binary digit" <<endl;
 cin>>n;
 int ans=0;
 int i=0;
 while(n!=0){
     int bit =n%10;
     if(bit==1){
      ans = (bit * pow(2,i))+ ans;

     }

     n=n/10;
     i++;

 }
 cout<<ans <<endl;
 */

// check whether power of two
/*int n;
cout<<"Enter n" <<endl;
cin>> n;
for(int i=0;i<10;i++){
    int num=pow(2,i);
    // cout<<num <<endl;
    if(n==num){
        return true;
    }

}
return false;
*/

// int a;
// cin>>a;
//  cout <<endl;
//  switch(a){
//     case 1:
//     cout<<"one " <<endl;
//     break;

//     case 2:
//     cout<<"two " <<endl;
//     break;
//     case 3:
//     cout<<"three " <<endl;
//     break;
//     case 4:
//     cout<<"four" <<endl;
//     break;
//     case 5:
//     cout<<"five " <<endl;
//     break;

//   }
// int a,b;
// cout<<"Enter valye of a and b" <<endl;
// cin>>a>>b;
// char op;
// cout<<"Enter operation" <<endl;
// cin>> op;

// switch(op){
//     case '+':
//     cout<<a+b <<endl;
//     break;
//     case '-':
//     cout<<a-b <<endl;
//     break;
//     case '*':
//     cout<<a*b <<endl;
//     break;
//     case '/':
//     cout<<a/b <<endl;
//     break;
// }

// }

////// functions ....
//// finding powers /*
/*#include <iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int x,y;
    cout<<"Enter x and y" <<endl;
    cin>>x>>y;
    cout<<power(x,y) <<endl;
}
  */

//// factorial and nCr function

/*#include <iostream>
#include <math.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    return fact;
}

int nCr(int n,int r){
    int num,denom;
    num=factorial(n);
    denom=factorial(r)*factorial(n-r);

    return num/denom;

}
using namespace std;
int main()
{
    int ans=factorial(7);
    cout<<ans <<endl;

    cout<<nCr(5,5) <<endl;
}  */



/*
///////////////  SEARCHING ???
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
////   MAximum and MInimum values in an array
int printarray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

int getMax(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}


int getMin(int a[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int getMinimum(int a[], int n)
{
    int mini = a[0];
    for (int i = 0; i < n; i++)
    {

        mini = min(mini, a[i]);
    }
    return mini;
}
int sumofarray(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = array[i] + sum;
    }
    cout << sum << endl;
}



void reverseArray(int a[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

void swapalternate(int a[], int size)
{
    for (int i = 0; i < size; i+=2)
    {
     if (i+1<size)      
     {
           swap(a[i], a[i + 1]);
     }
     
    }
}

void uniqueele(int a[],int size){
    int i,j;
    int count=1;
    for (i = 0; i < size; i++)
    {
        for ( j = 0; j < size; j++)
        {
            if (a[i]==a[j]&& i!=j)
            {
                break;
            }
            
        }
        if (j==size)
        {
            cout<<"Uniique element is "<< ' '<<a[i] <<endl;
            count++;
        }
        
        
    }
    
}

// int uniqueeleusingbinary(int a[],int size){      WRONG FUNCTION
//     int ans=0;
//             for(int i=0;i<size;i++){
//                 ans=ans^a[i];
//                 ans++;
//             cout<<"uniq ele  "<< ans <<endl;
//             }
// }
bool linearSearch(int a[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            return true;
        }
    }
    return false;
}


int binarysearch(int a[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while (start<=end)
    {
    if(a[mid]==key){
            return mid;
        }

    if (key>a[mid]){
            start=mid+1;
       }
    else{
            end=mid-1;
        }
    
    mid=start+(end-start)/2;

    }
    
    
}




int main()
{
     int size;
     cout<<"ENter size" <<endl;
     cin>>size;

     int arr[size];
     cout<<"Enter array values" <<endl;
     for(int i=0;i<size;i++){
         cin>>arr[i];

     }
     int n=sizeof(arr)/sizeof(arr[0]);

     cout<<"MAximum value is "<< getMax(arr,size) <<endl;
     cout<<"Minimum value is "<< getMin(arr,size) <<endl;
     cout<<"Minimum value is "<< getMinimum(arr,size) <<endl;
    sumofarray(arr,size);
    

    int arr[10]={-54,-57,-34,23,54,34,-4,3};
    int key;
    cout<<"Enter key" <<endl;
    cin>>key;

    bool found=linearSearch(arr,10,key);
    if (found)
    {
        cout<<"present" <<endl;
    }   
    else
    {
        cout<<"absent" <<endl;

    }

    // int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int brr[7] = {11, 12, 13, 14, 15, 16, 17};
    // // reverseArray(arr,8);
    // // reverseArray(brr,7);

    // swapalternate(arr, 8);
    // swapalternate(brr, 7);

    // printarray(arr, 8);
    // cout << endl;
    // printarray(brr, 7);
    
    // int i,size;
    // cout<<"Enter size" <<endl;  
    // cin>>size;
    // int a[size];
    // for ( i = 0; i < size; i++)
    // {
    //     cin>>a[i];
    // }
    int b[10]={11,33,299,432,532,655,732,876,889,980};
    // uniqueele(a,size);
    // uniqueeleusingbinary(a,size);  WRONG FUNCTION
    int key;
    cout<<"Enter key" <<endl;
    cin>>key;
    int index= binarysearch(b,10,key);   // This function will run if the array values are in ascending oreder
    // cout<<index <<endl;
    
    // int index= binarysearch(a,size,key);   // This function will run if the array values are in ascending oreder
    cout<<"index is "<<index <<endl;
}
*/

//// VECTORS ///////
// C++ program to illustrate the
// iterators in vector
/*
vectors are dynamic array which can resize itself

operations on vectors

begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> g1;
    int k;
	for (int i = 1; i <= 5; i++){
        cin>>k;
		g1.push_back(k);
    }
	cout << "Output of begin and end: ";
	for (auto i = g1.begin(); i != g1.end(); ++i)
		cout << *i << " ";

	cout << "\nOutput of cbegin and cend: ";
	for (auto i = g1.cbegin(); i != g1.cend(); ++i)
		cout << *i << " ";

	cout << "\nOutput of rbegin and rend: ";
	for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
		cout << *ir << " ";

	cout << "\nOutput of crbegin and crend : ";
	for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
		cout << *ir << " ";

	return 0;
}


/////////// ARRAY AND STRING ??

//character array and string

#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include  <bits/stdc++.h>
using namespace std;
int getlength(char name[]){
    int count=0;
    for (int i = 0;  name[i]!='\0'; i++)
    {   
        count++;
    }
    return count;
    
}
void reverse_string(char ch[],int len){
    int s=0;
    int e=len-1;
    while(s<=e){
    swap(ch[s],ch[e]);
    s++;
    e--;
    }
}

bool checkpalindrome(char ch[],int len)
{
    int s=0;
    int e=len-1;
    while(s<=e){
        if(ch[s]!=ch[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    
    }
    return 1;
    
}

char getmaxocccharac(string s){
    int a[26]={0};

    // create an array for count of character
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        if(ch>='a'&& ch<='z'){
            number=ch-'a';
        
        }
        if(ch>='A'&& ch<='Z'){
            number=ch-'A';
        }
        a[number]++;
    }

    int max=-1,ans=0;
    for(int i=0;i<26;i++){
        if(max<a[i]){
            ans=i;
            max=a[i];
        }
     
    }

   return 'a'+ans;


}

/*string replacespaces(string s){   /// function not running
    string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i]=' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp=temp.push_back(s[i]);
        }
    }
    return temp;
}*/


int main()
{
  /*  char name[20];
    cout<<"Enter the name" <<endl;

    cin>>name;

    cout<<"your name is==" ;
    cout<<name;
    cout <<endl;
    int len=getlength(name);
    cout<<"length of name==" << len <<endl;
    reverse_string(name,len);
    cout<<"your reverse name is==" ;
    cout<<name;
    cout <<endl;
    cout<<"palindrome or not->"<< checkpalindrome(name,len) <<endl;
*/
    string s;
    cout<<"enter string" <<endl;
    cin>>s;

    cout<<"max occured character is ->"<< getmaxocccharac(s) <<endl;
   // cout<<"replaced spaces"<< replacespaces(s)<<endl;


}

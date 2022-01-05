#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    //Write your code here.
    std::deque<int>d(k);

    int j=0;
     int i =0;
    while(n>=k){
       i =0;
        while(i<k){
            d.push_back(arr[i+j]);
            ++i;
        }
        std::cout<<*(std::max_element(d.begin(),d.end()))<<" ";
        d.clear();
        --n;
        j++;
    }
std::cout<<std::endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}

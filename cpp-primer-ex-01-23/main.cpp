#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item curr_item, new_item;
    int cnt;

    if(cin>>curr_item){
        int cnt = 1;
        while(cin>>new_item){
            if(curr_item.isbn() == new_item.isbn())
                ++cnt;
            else{
                cout<<curr_item<<" has " <<cnt<< " transactions."
                    <<endl;
                curr_item = new_item;
                cnt = 1;
            }
        }
        cout<<curr_item<<" has "<<cnt<<" transactions."<endl;
    }
    return 0;
}

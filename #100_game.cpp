#include <iostream>

using namespace std;
int sum, first_one, second_one ;
void preview()
{
    int  List[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i=0; i<10; i++){
        cout<<List[i]<<" ";
    }
    cout<<endl;
}

int check(int player )
{
    if (player == 1)
    {

        cout<<"First player , choose number from list : ";
        cin>>first_one;
        if (first_one > 10 ||first_one < 1)
        {
            cout<<"Invalid number."<<endl;
            first_one =check(1);
        }
        return first_one ;
    }
    else if (player == 2)
    {
        cout<<"Second player ,choose number from list : ";
        cin>> second_one;
        if (second_one > 10 ||second_one < 1)
        {
            cout<<"Invalid number."<<endl;
            second_one = check(2);
        }
        return second_one;
    }
}



int main()
{
         sum = 0;
    while (true){
        preview();
        first_one = check(1);
        sum += first_one;
        cout<<"Updated sum = "<<sum<<endl;
        if (sum >= 100){
            cout<<"First player wins "<<endl;
            break;}
        preview();
        check(2);
        sum += second_one;
        cout<<"Updated sum = "<<sum<<endl;
        if (sum >= 100){
            cout<<"Second player wins"<<endl;
            break;}
    }
    return 0;
}
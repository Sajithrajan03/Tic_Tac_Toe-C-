#include<iostream>
using namespace std;
char arr[]={'1','2','3','4','5','6','7','8','9'};
int display(){
    cout<<" ___________"<<endl;
    cout<<"|   |  "<<" | "<<"  |"<<endl;
    cout<<"| "<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<" |"<<endl;
    cout<<"| "<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<" |"<<endl;
    cout<<"| "<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<" |"<<endl;
    cout<<"|___|"<<"___|"<<"___|"<<endl;

    
}
int win(){
    if (arr[0]==arr[1] && arr[1]==arr[2]) return 1;
    else if (arr[3] == arr[4] && arr[4] == arr[5]) return 1;
    else if (arr[6] == arr[7] && arr[7] == arr[8]) return 1;
    else if (arr[0] == arr[3] && arr[3] == arr[6]) return 1;
    else if (arr[1] == arr[4] && arr[4] == arr[7]) return 1;
    else if (arr[2] == arr[5] && arr[5] == arr[8]) return 1;
    else if (arr[0] == arr[4] && arr[4] == arr[8]) return 1;
    else if (arr[2] == arr[4] && arr[4] == arr[6]) return 1;
    else if ( for(int i=0;i<n)
        arr[1] != '1' && arr[2] != '2' && arr[3] != '3' 
                    && arr[4] != '4' && arr[5] != '5' && arr[6] != '6' 
                  && arr[7] != '7' && arr[8] != '8' && arr[9] != '9')

        return 0;
    else
        return -1;
}
int main(){
    display();
    int choice,flag=1,player_cp=1;
    char sign;
    
    while (flag==1){
    
    cout<<"PLAYER "<<player_cp<<":";

    if (player_cp==2) sign='O';
    else sign='X';
    
   
    
    cin>>choice;
    
    if (choice==1 && arr[0]=='1') arr[0]=sign;
    else if (choice==2 && arr[1]=='2') arr[1]=sign;
    else if (choice==3 && arr[2]=='3') arr[2]=sign;
    else if (choice==4 && arr[3]=='4') arr[3]=sign;
    else if (choice==5 && arr[4]=='5') arr[4]=sign;
    else if (choice==6 && arr[5]=='6') arr[5]=sign;
    else if (choice==7 && arr[6]=='7') arr[6]=sign;
    else if (choice==8 && arr[7]=='8') arr[7]=sign;
    else if (choice==9 && arr[8]=='9') arr[8]=sign;
    else cout<<"INVALID INPUT"<<endl;
    
    
    if (win()==1) {cout<<"PLAYER "<<player_cp<<" WON!!"<<endl;break;}
    
     player_cp++;
    player_cp=(player_cp%2==0)?2:1;
    display();
    }
}
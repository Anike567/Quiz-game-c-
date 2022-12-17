#include<iostream>
#include<fstream>
#include"res/ARJUN.TXT"
#include<conio.h>

using namespace std;
int main(void){

    system("cls");
    int op=-1;
    int i=0;
    char input;
    int will=1;
    int ans=0;
    int pre=0;


    while(will){
        cout<<Question[i]<<endl;
        
        cout<<Option[++op]<<"       "<<Option[++op]<<"       "<<Option[++op]<<"       "<<Option[++op]<<"       E.e to exit"<<endl;;
        pre=op-4;
        cin>>input;
        

        switch(input){
            case 'a':
                if(Answer[ans++]=="a"){
                    cout<<"   ---------------"<<endl<<" ||Correct Answer ||"<<endl<<"   ---------------"<<endl<<endl<<endl;

                }
                else{
                    cout<<"  ---------------"<<endl<<" ||Wrong Answer ||"<<endl<<"   ---------------"<<endl<<endl<<endl;

                }
                i++;
                break;
             case 'b':
                if(Answer[ans++]=="b"){
                    cout<<"   ---------------"<<endl<<" ||Correct Answer ||"<<endl<<"   ---------------"<<endl<<endl<<endl;


                }
                else{
                    cout<<"  ---------------"<<endl<<" ||Wrong Answer ||"<<endl<<"   ---------------"<<endl<<endl<<endl;
                }
                
                i++;
                break;
             case 'c':
                if(Answer[ans++]=="c"){
                    cout<<"   ---------------"<<endl<<" ||Correct Answer ||"<<endl<<"   ---------------"<<endl<<endl<<endl;

                }
                else{
                    cout<<"  ---------------"<<endl<<" ||Wrong Answer ||"<<endl<<"   ---------------"<<endl<<endl<<endl;
                }
                i++;
                break;
             case 'd':
                if(Answer[ans++]=="d"){
                    cout<<"   ---------------"<<endl<<" ||Correct Answer ||"<<endl<<"   ---------------"<<endl<<endl<<endl;

                }
                else{
                    cout<<"  ---------------"<<endl<<" ||Wrong Answer ||"<<endl<<"   ---------------"<<endl<<endl<<endl;
                }
                i++;
                break;

            case 'e':
                will=0;
                break;
            
            default:
                cout<<"Please Enter correct option"<<endl<<endl<<endl;
                op=pre;



        }
    }

    
    
    
    
    
    return 0;

}
#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void greetings(){
    
    time_t now = time(0);
    tm* timeInfo = localtime(&now);

    if (timeInfo->tm_hour < 12) {
        cout << "Good Morning Master shivansh" << endl;
        string phrase = "Good Morning Master shivansh";
        string command = "espeak \"" + phrase + "\"";
        const char* charCommand = command.c_str();
        system(charCommand);
    }
    else if (timeInfo->tm_hour >= 12 && timeInfo->tm_hour <= 16) {
        cout << "Good Afternoon Master shivansh" << endl;
        string phrase = "Good Afternoon Master shivansh";
        string command = "espeak \"" + phrase + "\"";
        const char* charCommand = command.c_str();
        system(charCommand);
    }
    else if (timeInfo->tm_hour > 16 && timeInfo->tm_hour < 24) {
        cout << "Good Evening Master shivansh" << endl;
        string phrase = "Good Evening Master shivansh";
        string command = "espeak \"" + phrase + "\"";
        const char* charCommand = command.c_str();
        system(charCommand);
    }
}
void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl<<dt<<endl;
}
int main()
{
    system("cls");

    cout<<"\t<                           PERSONAL ASSISSTANT                              "<<endl<<endl;

    string password; 
    
    string command; 

    do
    {
        cout<<"                                                       "<<endl;
        cout<<"| ENTER THE PASSWORD TO CONFIRM YOU ARE MASTER shivansh|"<<endl;
        cout<<"                                                        "<<endl;
        string phrase = "ENTER THE PASSWORD TO CONFIRM YOU ARE MASTER shivansh";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        getline(cin,password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(password == "shivansh1402")
        {
            cout<<"\n<**************************************************************************************************>\n\n";
            greetings();
            do{
                cout<<"\n<**********************************************************************************************>\n\n";
                cout<<endl<<"How can i help you master shivansh...."<<endl<<endl;

                string phrase = "How can i help you Master shivansh";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Enter your question ===> ";
                getline(cin,command);
                cout<<endl;
                cout<<"Answer to your question is ===> ";

                if(command=="hello" || command=="hi")
                {
                    cout<<"Hello Master shivansh....."<<endl;
                    string phrase = "Hello Master shivansh";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                 else if(command=="what is the time")
                {

                    datetime();
                }


                else if(command=="who are you" || command=="who is speaking")
                {
                    cout<<"I'm a personal assistant created by Master shivansh !!!"<<endl;
                    string phrase = "I'm a personal assistant created by Master shivansh !!!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


                else if(command=="open notepad")
                {
                    cout<<"openining notepad"<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open writepad")
                {
                    cout<<"opening writepad"<<endl;
                    string phrase = "opening writepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\write.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

               

                else if(command=="open Microsoft edge")
                {
                    cout<<"opening Microsoft Word"<<endl;
                    string phrase = "opening Microsoft Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start msedge");
                }

                else if(command=="open Microsoft Paint")
                {
                    cout<<"opening Microsoft Paint"<<endl;
                    string phrase = "opening Microsoft Paint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\System32\\mspaint.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open google")
                {
                    cout<<"openining google"<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(command=="open youtube")
                {
                    cout<<"openining YouTube"<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(command=="close chrome browser")
                {
                    cout<<"closing chrome browser"<<endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }


                else if(command=="bye" || command=="exit")
                {
                    cout<<"Good Bye Master shivansh, see you soon!"<<endl;
                    string phrase = "Good Bye Master shivansh, see you soon!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else
                {
                    cout<<"Sorry could not understand your command please try again !!!"<<endl;
                    string phrase = "Sorry could not understand your command please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout<<"\t<###################################  PERSONAL ASSISSTANT ########################################"<<endl<<endl;
                    cout << "**********************" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "**********************" << endl << endl;

                    string phrase = "Incorrect Password, please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);


    return 0;
}

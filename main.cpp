#include <iostream>
#include <windows.h> //Library needed for Sleep method
#include <mmsystem.h> //Library for accessing windows multimedia method
#pragma comment(lib, "winmm.lib"); //USE PRAGMA TO ACCESS THE WINDOWS MEDIA LIBRARIES FOR PLAYSOUND
#include <conio.h>//Library enables the _getch() method to change the press any key pause prompt

using namespace std;
///Function Prototypes
void setupWindowSize();
void fontsize18();
void fontsize20();
void fontsize40();
void flashcursor(string &output);
void cursoroff();

void setupWindowSize(){
     //Maximize the terminal window requires the windows.h library
        keybd_event(VK_MENU,0x38,0,0);
        keybd_event(VK_RETURN,0x1c,0,0);
        keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
   
        keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

void fontsize18(){

     //Change The Font Type and Size In the Console 
        CONSOLE_FONT_INFOEX cfi;
        cfi.cbSize = sizeof(cfi);
        cfi.nFont = 0;
        cfi.dwFontSize.X = 0;                   // Width of each character in the font
        cfi.dwFontSize.Y = 18;                  // Height
        cfi.FontFamily = FF_DONTCARE;
        cfi.FontWeight = FW_BOLD;
        std::wcscpy(cfi.FaceName, L"ComicSans"); // Choose your font
        SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi); 
}


void fontsize20(){

     //Change The Font Type and Size In the Console 
        CONSOLE_FONT_INFOEX cfi;
        cfi.cbSize = sizeof(cfi);
        cfi.nFont = 0;
        cfi.dwFontSize.X = 0;                   // Width of each character in the font
        cfi.dwFontSize.Y = 20;                  // Height
        cfi.FontFamily = FF_DONTCARE;
        cfi.FontWeight = FW_BOLD;
        std::wcscpy(cfi.FaceName, L"ComicSans"); // Choose your font
        SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi); 
}

void fontsize40(){

     //Change The Font Type and Size In the Console 
        CONSOLE_FONT_INFOEX cfi;
        cfi.cbSize = sizeof(cfi);
        cfi.nFont = 0;
        cfi.dwFontSize.X = 0;                   // Width of each character in the font
        cfi.dwFontSize.Y = 40;                  // Height
        cfi.FontFamily = FF_DONTCARE;
        cfi.FontWeight = FW_BOLD;
        std::wcscpy(cfi.FaceName, L"ComicSans"); // Choose your font
        SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi); 
}
void flashcursor(string &output){
    unsigned char block = 254;
    
    for(size_t i=0; i<output.size(); i++){
            cout << output[i];
            cout << block;
            Sleep(10);
            cout << "\b";
            cout << " ";
            Sleep(10);
            cout << "\b";
           
        }
    }

void cursoroff(){
    HANDLE hStdOut = NULL;
    CONSOLE_CURSOR_INFO curInfo;
    hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleCursorInfo(hStdOut, &curInfo);
    curInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hStdOut, &curInfo);
}

int main() {
    
    setupWindowSize();
    
    fontsize20();   
    
    cursoroff();
     //Play sound for the start of the program
    PlaySound(TEXT("C://Users//jonat//Workspaces//Resume2025//Resume2025//digitalcv.wav"),NULL, SND_FILENAME| SND_ASYNC);
    
    system("COLOR 2");
    cout << "\n\n";
    string output="\t\t\t\t\t\tJONATHAN JOSEPH";
    
    string output2="\t\t\t\tPRE-SALES EXPERT & DYNAMIC TECHNOLOGY LEADER";
    
    string output3="\t07523 674 163| CHESHIRE | jjosephuk@outlook.com | https://www.linkedin.com/in/jonathanedwardjoseph";
    
    string output4= "        PROFILE";
    
    string output5="                                               TECHNICAL SKILLS & EXPERTISE";
    
    string output6= "     ENTERPRISE ARCHITECTURE & FRAMEWORKS         CLOUD & INFRASTRUCTURE        ENTERPRISE PLATFORMS & INTEGRATION";
    
    string output7="     SECURITY & COMPLIANCE                        CODING & AUTOMATION           CERTIFICATIONS";
    
    string output8="                                                    EMPLOYMENT HISTORY";      
    
    string flashdots=".............";
    
    cout << "\n\n";
    
    flashcursor(output);
    
    cout << "\n\n";
    
    flashcursor(output2);
    
    cout << "\n\n";
    
    flashcursor(output3);
    
    cout <<"\n\n\n\n";
    
    flashcursor(output4);
    
    cout << "\n";
    
    cout << "        -------" << "\n";
    
    cout << R"(             
        - Dynamic Pre-Sales leader. 
        
        - Innovative problem solver.

        - Over twenty years of experience with a successful track record.  

        - Clear and well-articulated communicator. 

        - Uses an analytic approach and empathetic listening skills to understand
          the challenges of customers and their business operational processes.
        
        - Expert in developing and deploying ROI, TCO and Value Proposition models.)"; 
    
    Sleep(2000);
    
    cout << "\n\n\n\n";
    
    cout << "        PLEASE PRESS ANY KEY TO REVIEW MY TECHNICAL SKILLS & EXPERTISE";
   
    cout << "\n";
   
    cout << "        ";
    
    flashcursor(flashdots);
    
    _getch(); //Wait for the user to press a key before executing the next instruction
    
    system("CLS");
    

    cout << "\n\n";

    cout << output5 << "\n";

    cout <<"                                               --------- ------ - ---------";

    cout << "\n\n";
    
    flashcursor(output6);

    cout << "\n";

    cout << "     ---------- ------------ - ----------         ----- - --------------        ---------- --------- - -----------" << "\n";
    
	cout << R"(     TOGAF 10                                     AWS                           Microsoft Dynamics 365
     Digital Transformation                       Google Cloud                  CRMs and ERPs 
     Business Process Modelling                   Microsoft E5                  SalesForce 
     Architecture Governance & Compliance         ServiceNow                    Content Management Solutions 
     IT Strategy & Roadmap                        Virtualization                API & Web Services
     Cloud & Infrastructure Modernisation         Enterprise Integration        AI & Machine Learning 
     SOA, Microservices, REST APIs
     Stakeholder Management
     Governance & Compliance)";
     
    cout << "\n\n\n\n";
     
    Sleep(1000);

    flashcursor(output7);

    cout << "\n";

    cout << "     -------- - ----------                        ------ - ----------           --------------" << "\n";

    cout << R"(     ISO27001                                     Python                        TOGAF 10 Certified Practitioner
     UK Cyber Essentials                          PHP                           TOFAF 10 Applied Practitioner
     SOC2                                         JavaScript                    JavaScript Full Stack Web Developer
     GDPR                                         JSON                          GDPR Awareness 
     Enterprise Risk Management                   HTML & CSS                    Negotiation Through Tactical Empathy
                                                  Modern C++                    Managing The Complete Sales Cycle  
                                                  VBA                           Conflict Management 
                                                  SQL                           Mental Health First Aider
                                                  GitHub                          
                                                  JIRA
                                                  Agile & DevOps Practices
  )";
    
    Sleep(2000);
    
    cout << "\n";
    
    cout << "   PLEASE PRESS ANY KEY TO REVIEW MY EMPLOYMENT HISTORY";
   
    cout << "\n";
   
    cout << "   ";
    
    flashcursor(flashdots);
    
    _getch(); //Wait for thre user to press a key before executing the next instruction
    
    system("CLS");
    fontsize18();
    cout << "\n\n";
    cout << "    " << output8 <<"\n";
    cout << "                                                        ---------- -------" << "\n\n";
    
    cout << R"(    Ingeus UK                                          Senior Solutions Lead                          Mar 23 - Present
    ------ --                                          ------ --------- ----                          --- -- - -------
    - Developing high-level enterprise solution designs to overcome operational GAPS and Pain Points.
    - Creation of Value Proposition and Solution Trade Off models.
    - Conducting business capability modelling and process optimisation to identify inefficiencies 
      and opportunities for digital transformation.
    - Advising C-level executives and stakeholders on technology roadmaps, cloud adoption strategies, 
      and enterprise integrations.
    - Ensuring ISO27001, UK Cyber Essentials, GDPR, and SOC2 compliance and governance.
    - Organising, leading and participating within Agile project meetings with business Stakeholders.)";
  
  cout << "\n\n";
  
  cout << R"(    Avnio                                              Senior Solutions Engineer                      Mar 22 - Mar 23
    -----                                              ------ --------- --------                      --- -- - --- --
    - Pre-Sales consultancy as a trusted advisor to Avino's prospects. 
    - Developing the Pre-Sales business function to help increase solution sales. 
    - Analyzing and defining processes for Avnio and their customers. 
    - Demonstrating the value proposition and return on investment for Avino's AI & NLP
      tender and proposal automation solutions. )";
    
    cout << "\n\n";
  
    cout << R"(    Northcoders  Manchester Technology Centre          Web Developer Bootcamp                         Aug 21 - Dec 21
    ----------- ----------- ---------  ------          --- --------- --------                         --- -- - --- --
    - Web Developer Bootcamp to enhance my Pre-Sales technical skills and to make them more relevant 
      to the business landscape following the Covid pandemic. 
    - Expanded my knowledge of JavaScript based Web Technologies.
    - Providing leadership to project manage teams using Agile methodology.)";
    
     Sleep(2000);
    
    cout << "\n\n\n\n";
    
    
    cout << "   PLEASE PRESS ANY KEY TO REVIEW MORE EMPLOYMENT HISTORY";
   
    cout << "\n";
    cout << "   ";
    
    
    flashcursor(flashdots);
    
    _getch(); //Wait for thre user to press a key before executing the next instruction
    
    system("CLS");
    cout << "\n";
    cout << "    " << output8 <<"\n";
    cout << "                                                        ---------- -------";
    cout << "\n\n";
  
    cout << R"(    Nationwide Franking Sense Ltd                National Print Solutions Manager                      Mar 20 - Aug 21
    ---------- -------- ----- ---                -------- ----- --------- -------                      --- -- - --- --
    - Created and implemented the Pre-Sales solution sales business operation.
    - Provided Pre-Sales support for Print, Digital Transformation and Process Automation solutions.  
    - Mentored the Sales team on Pre-Sales Solution Sales.)";
 
    cout << "\n\n";
  
    cout << R"(    Zerographic Systems                          Head Of Professional Services                         Jan 19 - Sep 19
    ----------- -------                          ---- -- ------------ --------                         --- -- - --- --
    - Managing the Professional Services Pre-Sales & Post-Sales teams.
    - Implemented new Pre-Sales processes and Solution Sales strategies.
    - Mentored the Sales team on SaaS & Digital Transformation Soluiton sales.
    - Onboarded and managed new software solution vendors.)";
    
    cout << "\n\n";
  
    cout << R"(    Xerox UK Ltd                                 Pre-Sales Analyst                                     Jun 16 - Dec 18
    ----- -- ---                                 --------- -------                                     --- -- - --- --
    - Providing Pre-Sales software support to the Graphic Communications Sales team and Xerox 
      Commercial print prospects and customers. 
    - Providing technical support and advice to Xerox customer accounts. )";
    cout << "\n\n";
  
    cout << R"(    Brother UK Ltd                               Senior Client Manager                                 Dec 15 - Apr 16
    ------- -- ---                               ------ ------ -------                                 --- -- - --- --
    - Providing Pre-Sales support for exsisting and new customer accounts.)";
    cout << "\n\n";
  
    cout << R"(    Zen Office                                   Head Of Professional Services                         Aug 14 - Dec 15
    --- ------                                   ---- -- ------------ --------                         --- -- - --- -- 
    - Created and implemented the Professional Services department, and setup new processes 
      for Pre Sales and Post Sales solution delivery, Back Office, and Sales Order Processing. 
    - Mentored the Pre and Post Sales consultant team on Print and Digital Transformation 
      solutions. 
    - Deployed a Solution Sales centric culture across the company.)";
    Sleep(1000000);
    return 0;
}

#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>
using namespace std;
class medicine{ //Madicines Class
	private:
		static int mid;
		int id;
		char name[30];
		char menfect[30];
		float price;
		int stock;
	public:
		medicine();
		void remove();
		//Getters 
		int GetID();
		char* Getname();
		char* Getmenfect();
		float Getprice();
		int Getstock();
		//setters
		void Setname(char* n);
		void Setmanfect(char* m);
		void Setprice(float p);
		void Setstock(int s);
		//input and output
		void input();
		void output();
		
};


		medicine::medicine(){
			id=mid;
			mid++;
			strcpy(name,"no-name");
			strcpy(menfect,"non-fected");
			price=00.00;
			stock=0;
		}
		void medicine::remove(){
			strcpy(name,"no-name");
			strcpy(menfect,"non-fected");
			price=00.00;
			stock=0;
		}
		//Getters 
		int medicine::GetID(){
			return id;
		}
		char* medicine::Getname(){
			return name;
		}
		char* medicine::Getmenfect(){
			return menfect;
		}
		float medicine::Getprice(){
			return price;
		}
		int medicine::Getstock(){
			return stock;
		}
		//setters
		void medicine::Setname(char* n){
			strcpy(name,n);
		}
		void medicine::Setmanfect(char* m){
			strcpy(menfect,m);
		}
		void medicine::Setprice(float p){
			price=p;
		}
		void medicine::Setstock(int s){
			stock=s;
		}
		//input and output
		void medicine::input(){
			cin.ignore();
			
			cout <<"\nEnter Madicine name :"<<endl;
			gets(name);
			cout <<"Enter Name of The Manufacturer :"<<endl;
			gets(menfect);
			cout <<"Enter Price per Unit of Medicine :"<<endl;
			cin>>price;
			cout <<"Enter Available stock : "<<endl;
			cin>>stock;
		}
		void medicine::output(){
			cout <<"========================-----------------"<<endl;
			cout << "Medicine ID    : "<<id<<endl;
			cout << "Name           : "<<name<<endl;
			cout << "Manufactured By: "<<menfect<<endl;
			cout << "Price Perunit  : " <<price<<endl;
			cout << "Availble Stock : "<<stock<<endl;
			cout <<"-------------------------================"<<endl;
		}
		

class menfect{ //Manufecturers Class
	private:
		static int pid;
		int id;
		char name[30];
		char address[60];
		char contact[20];
		char email[20];
	public:
		menfect();
		char* Getname();
		int GetID();
		void remove();
		void input();
		void output();
		void Edit();
		
};
char *menfect::Getname(){
	return name;
}
int menfect::GetID(){
	return id;
}
menfect::menfect(){
			id=pid;
			pid++;
			strcpy(name,"no-name");
			strcpy(address,"no-info");
			strcpy(contact,"no-info");
			strcpy(email,"no-mail");
		}
		void menfect::remove(){
			strcpy(name,"no-name");
			strcpy(address,"no-info");
			strcpy(contact,"no-info");
			strcpy(email,"no-mail");
		}
		void menfect::input(){
			cout << "Enter Name of Company: " <<endl;
			gets(name);
			cout << "Enter Address : " <<endl;
			gets(address);
			cout << "Enter contact : " <<endl;
			gets(contact);
			cout << "Enter company E-mail: " <<endl;
			gets(email);
		}
		void menfect::output(){
			cout <<"Name    : "<<name<<endl;
			cout <<"Address : "<<address<<endl;
			cout <<"contact : "<<contact<<endl;
			cout <<"email   : "<<email<<endl;
		}
		void menfect::Edit(){
			cout << "Enter New Name of Company: " <<endl;
			gets(name);
			cout << "Enter New Address : " <<endl;
			gets(address);
			cout << "Enter New contact : " <<endl;
			gets(contact);
			cout << "Enter New company E-mail: " <<endl;
			gets(email);	
		}

class employe{ //Employeers Class
	private:
		static int eid;
		int id;
		char name[30];
		char fname[30];
		int age;
		char cnic[15];
		char address[60];
		char contact[20];
	public:
		employe(){
			id=eid;
			eid++;
			strcpy(name,"no-name");
			strcpy(fname,"no-name");
			strcpy(cnic,"0000000000000");
			strcpy(address,"no-address");
			strcpy(contact,"0300-0000000");
			age=18;
		}
		void remove(){
			strcpy(name,"no-name");
			strcpy(fname,"no-name");
			strcpy(cnic,"0000000000000");
			strcpy(address,"no-address");
			strcpy(contact,"0300-0000000");
			age=18;
			
		}
		void input();
		void output();
		char* Getname();
		int GetID();
		void Edit();
};

void employe::input(){
	cout <<"Enter Employe Age :";
	cin >>age;
	cin.ignore();
	cout <<"\nEnter Employe Name: ";
	gets(name);
	cout <<"\nEnter Employe Father Name: ";
	gets(fname);
	cout <<"\nEnter Employe CNIN: ";
	gets(cnic);
	cout <<"\nEnter Employe Contact: ";
	gets(contact);
	cout <<"\nEnter Employe Address: ";
	gets(address);
	
	
}
void employe::output(){
	
	cout <<"\nEmploye ID 	  : "<<id;
	cout <<"\nEmploye NAME    : "<<name;
	cout <<"\nEmploye F-NAME  : "<<fname;
	cout <<"\nEmploye AGE 	  : "<<age;
	cout <<"\nEmploye CNIC 	  : "<<cnic;
	cout <<"\nEmploye CONTACT : "<<contact;
	cout <<"\nEmploye ADDRESS : "<<address;
	
	
}
char* employe::Getname(){
	return name;
}
int employe::GetID(){
	return id;
}
void employe::Edit(){
	cout <<"\n\nEnter (Updated) Employe Age :";
	cin >>age;
	cin.ignore();
	cout <<"\nEnter (Updated) Employe Name: ";
	gets(name);
	cout <<"\nEnter (Updated) Employe Father Name: ";
	gets(fname);
	cout <<"\nEnter (Updated) Employe CNIN: ";
	gets(cnic);
	cout <<"\nEnter (Updated) Employe Contact: ";
	gets(contact);
	cout <<"\nEnter (Updated) Employe Address: ";
	gets(address);
}

class admin{ //Admin Class
	private:
		char name[30];
		char pass[30];
	public:
		admin(){
			strcpy(name,"admin");
			strcpy(pass,"secret_123");
		}
		//getters
		char* Getname(){
			return name;
		}
		char* Getpass(){
			return pass;
		}
		//setters
		void Setname(char* n){
			strcpy(name,n);
		}
		void Setpass(char* p){
			strcpy(pass,p);
		}
};
int employe::eid=0;
int medicine::mid=0;
int menfect::pid=0;

int main() {

	employe emp[10];
	medicine med[100];
	menfect men[10];
	admin root;
	int temp;
	char temp_s[30];
	char temp_s1[30];
		int i=0;
		
		cout << "Loading Application contents Please Wait......."<<endl;
		/*
		ofstream empout("employe.data");
		if(empout){
			for(int i=0;i<10;i++){
			
			empout.seekp(i*sizeof(emp[i]));
			empout.write((char*)&emp[i],sizeof(emp[i]));
			}
		}
		
		ofstream medout("medicine.data");
		if(medout){
			for(int i=0;i<100;i++){
			
			medout.seekp(i*sizeof(med[i]));
			medout.write((char*)&med[i],sizeof(med[i]));
			}
		}
		
		ofstream menout("manufecturer.data");
		if(menout){
			for(int i=0;i<10;i++){
			
			menout.seekp(i*sizeof(men[i]));
			menout.write((char*)&men[i],sizeof(men[i]));
			}
		}
		*/
		
		
		ifstream in("admin.data",ios::binary);
		if(in){
		
		in.read((char*)&root, sizeof(root));
		in.close();
	}
		//medicine
		ifstream inmed("medicine.data");
		if(inmed){
		for(int i=0;i<100;i++){
			inmed.seekg(i*sizeof(med[i]),ios::beg);
			inmed.read((char*)&med[i],sizeof(med[i]));
			}
		}
		inmed.close();
		//mednufacturer
		ifstream menin("manufecturer.data");
		if(menin){
			for(int i=0;i<10;i++){
			
			menin.seekg(i*sizeof(men[i]),ios::beg);
			menin.read((char*)&men[i],sizeof(men[i]));
			}
		}
		menin.close();
		
		//employe
		
		ifstream empin("employe.data");
		if(empin){
			for(int i=0;i<10;i++){
			
			empin.seekg(i*sizeof(emp[i]),ios::beg);
			empin.read((char*)&emp[i],sizeof(emp[i]));
			}
		}
		empin.close();
		
		
		
	system("TITLE PHARM-X");
	start:
		system("color 0a");
		system("cls");
		cout <<"     *************************************************************"<<endl;
		cout <<"     *         _______________ PAHRAM-X _______________          *"<<endl;
		cout <<"     *         --------------- MAIN MENU ----------------        *"<<endl;
		cout <<"     *************************************************************"<<endl;
		cout <<"                 By Muhammad Muneeb & Daniyal Asad.               "<<endl;
		cout <<endl<<endl;
		cout <<"1. Log-in As Admin. "<<endl;
		cout <<"2. continue As Worker."<<endl;
		cout <<"3. About Program."<<endl;
		cout <<"4. Exit Program."<<endl<<endl;
		cout <<"chose an option (1,2,3,4)>";
		char choise;
		choise=getche();
		switch(choise){
			case '1':
				char temps[30],tempass[30];
				cout <<"\nEnter Admin Username: ";
				gets(temps);
				cout <<"\nEnter Admin Password: ";
				gets(tempass);
				if(!strcmp(temps,root.Getname()) && !strcmp(tempass,root.Getpass())){
					system("echo ____________ %date% -- %time% ___________ >>system.log");
					system("echo AUTHORIZED ADMIN LOGGED IN .       [SUCCESS!]. >>system.log");
					system("echo _______________________________________________________ >>system.log");
					goto ADMINBLOCK;
				}else{
					system("color 04");
					cout <<"\n \a Incorrect! PASSWORD! ACCESS_DENIED!"<<endl;
					system("echo ____________ %date% -- %time% ___________ >>system.log");
					system("echo Malicious User tried to LOG-IN AS ADMIN. [FAILED!]. >>system.log");
					system("echo _______________________________________________________ >>system.log");
					cout << "Press any key to continue....."<<endl;
					getch();
					goto start;
					
				}
			case '2': goto WORKERBLOCK;
			case '3': goto ABOUT;
			case '4': goto END;
		}
		
		
	ABOUT:
		cout <<"\n\n******************************************************"<<endl;
		cout <<"*                ABOUT PAHRM-X                       *"<<endl;
		cout <<"******************************************************"<<endl;
		cout<<"\n\n\nThis Program is a Result of a Semester Project."<<endl;
		cout<<"Assigned By Prof. Miss Sadaf Inam"<<endl;
		cout <<"To : Muhmmad Muneeb 529, Daniyal Asad 589"<<endl;
		cout <<"GOVT. COLLAGE OF SCIENCE."<<endl;
		cout <<"BS-IT 3rd Semester Group 1 Morning."<<endl<<endl;
		cout <<"Press any key to continue...."<<endl;
		getch();
		system("CLS");
		goto start;
	ADMINBLOCK:
		system("CLS");
		system("type admin_menu.txt");
		cout <<"chose an option (1-9)(A-F)>";
		char choise1;
		choise1=getche();
		switch(choise1){
			case '1': system ("CLS");
				cout <<"\n\n******************************************************"<<endl;
				cout <<"*                SYSTEM LOGS                         *"<<endl;
				cout <<"******************************************************"<<endl;
		cout <<endl<<endl;
			 system("type system.log");
			cout <<endl<<endl;
			cout << "1 - OK       2- CLEAR LOGS"<<endl;
			cout <<"chose an option:";
			char log_d;
			log_d=getch();
			if (log_d=='1'){
				goto ADMINBLOCK;
			}else{
				if (log_d=='2'){
				cout << "\nEnter Admin Password to Proceed!!"<<endl;
				cout <<"password:";
				gets(temp_s);
				if(!strcmp(temp_s,root.Getpass())){
					system("DEL system.log");
					system("echo ____________ %date% -- %time% ___________ >>system.log");
					system("echo ADMIN CLEARED THE SYSTEM LOGS.       [SUCCESS!]. >>system.log");
					system("echo _______________________________________________________ >>system.log");
					goto ADMINBLOCK;
				}else{
					system("color 04");
					cout <<"\n \a Incorrect! PASSWORD! COMMAND_DENIED!"<<endl;
					system("echo ____________ %date% -- %time% ___________ >>system.log");
					system("echo Malicious User tried to CLEAR-LOGS AS ADMIN. [FAILED!]. >>system.log");
					system("echo _______________________________________________________ >>system.log");
					cout << "Press any key to continue....."<<endl;
					getch();
					goto ADMINBLOCK;
				}	
				}else {
					cout <<"Invalid choise......"<<endl;
					system("PAUSE");
					goto ADMINBLOCK;
				}
			}
			case '2': for (int i=0;i<100;i++){
				if (!strcmp("no-name",med[i].Getname())){
				med[i].input();
				//write med
				ofstream medout1("medicine.data", ios::app);
				
				medout1.seekp(i*sizeof(med[i]),ios::beg);
				medout1.write((char*)&med[i],sizeof(med[i]));
				
				cout <<"Medicine added successfull with ID: "<<med[i].GetID() <<"\n";
				cout <<"-----Details-----\n";
				med[i].output();
				system("PAUSE");
				system("CLS");
				goto ADMINBLOCK;	
					}
				}
					cout <<"\n No Room For New Medicine!!\n";
					system("PAUSE");
					system("CLS");
					goto ADMINBLOCK;
			case '3':
				for (int i=0;i<10;i++){
					if (!strcmp("no-name",emp[i].Getname())){
					emp[i].input();
					//write emp
					ofstream empout1("employe.data", ios::app);
					empout1.seekp(i*sizeof(emp[i]),ios::beg);
					empout1.write((char*)&emp[i],sizeof(emp[i]));
					empout1.close();
					
					cout <<"Employe added successfull with ID: "<<emp[i].GetID() <<"\n";
					cout <<"-----Details-----\n";
					emp[i].output();
					system("PAUSE");
					system("CLS");
					goto ADMINBLOCK;	
						}
					}
						cout <<"\n No Room For New Employe!!\n";
						system("PAUSE");
						system("CLS");
						goto ADMINBLOCK;
			case '4':
				for (int i=0;i<10;i++){
					if (!strcmp("no-name",men[i].Getname())){
					men[i].input();
					//write men
					ofstream menout1("manufecturer.data", ios::app);
					menout1.seekp(i*sizeof(men[i]),ios::beg);
					menout1.write((char*)&men[i],sizeof(men[i]));
					menout1.close();
					
					cout <<"Manufacturer added successfull with ID: "<<med[i].GetID() <<"\n";
					cout <<"-----Details-----\n";
					men[i].output();
					system("PAUSE");
					system("CLS");
					goto ADMINBLOCK;	
						}
					}	
						cout <<"\n No Room For New Manufecturer!!\n";
						system("PAUSE");
						system("CLS");
						goto ADMINBLOCK;
			case '5'://med
				cout <<"\nEnter ID of Medicine You Want to Remove: ";
				cin >>temp;
				for (int i=0;i<100;i++){
				if (med[i].GetID()==temp){
				med[i].remove();
				//write med
				ofstream medout2("medicine.data", ios::app);
				medout2.seekp(i*sizeof(med[i]),ios::beg);
				medout2.write((char*)&med[i],sizeof(med[i]));
				medout2.close();
				
				cout <<"Medicine Removed successfull with ID: "<<med[i].GetID() <<"\n";
				system("PAUSE");
				system("CLS");
				goto ADMINBLOCK;	
					}
				}
					cout <<"\n No Medicine with This ID!!\n";
					system("PAUSE");
					system("CLS");
					goto ADMINBLOCK;
				
			case '6'://emp
			cout <<"\nEnter ID of Employe You Want to Remove: ";
				cin >>temp;
				for (int i=0;i<10;i++){
				if (emp[i].GetID()==temp){
				emp[i].remove();
				//write emp
				ofstream empout2("employe.data", ios::app);
					empout2.seekp(i*sizeof(emp[i]),ios::beg);
					empout2.write((char*)&emp[i],sizeof(emp[i]));
					empout2.close();
				
				cout <<"Employe Removed successfull with ID: "<<med[i].GetID() <<"\n";
				system("PAUSE");
				system("CLS");
				goto ADMINBLOCK;	
					}
				}
					cout <<"\n No Employe with This ID!!\n";
					system("PAUSE");
					system("CLS");
					goto ADMINBLOCK;
			case '7'://man
				cout <<"\nEnter ID of Manufecturer You Want to Remove: ";
				cin >>temp;
				for (int i=0;i<10;i++){
				if (men[i].GetID()==temp){
				men[i].remove();
				//write men
				ofstream menout2("manufecturer.data", ios::app);
					menout2.seekp(i*sizeof(men[i]),ios::beg);
					menout2.write((char*)&men[i],sizeof(men[i]));
					menout2.close();
				
				cout <<"Manufecturer Removed successfull with ID: "<<men[i].GetID() <<"\n";
				system("PAUSE");
				system("CLS");
				goto ADMINBLOCK;	
					}
				}
					cout <<"\n No Manufecturer with This ID!!\n";
					system("PAUSE");
					system("CLS");
					goto ADMINBLOCK;
			case '8': cout<<"\nEnter Old Admin Password:";
			gets(temp_s);
			if(!strcmp(temp_s,root.Getpass())){
				cout <<"Enter New password: ";
				gets(temp_s);
				cout <<"\nConfirm password : ";
				gets(temp_s1);
				if(!strcmp(temp_s,temp_s1)){
				root.Setpass(temp_s);
				ofstream out("admin.data",ios::binary);
				out.write((char*)&root, sizeof(root));
				out.close();
				cout <<"Password updated Successfully!!!!!"<<endl;
				cout << "Press any key to continue....."<<endl;
				getch();
				goto ADMINBLOCK;
				}else{
					system("color 04");
					cout <<"Password does not matched try again...."<<endl;
					system("PAUSE");
					goto ADMINBLOCK;
				}
			}else{
					system("color 04");
					cout <<"\n \a Incorrect! PASSWORD! COMMAND_DENIED!"<<endl;
					system("echo ____________ %date% -- %time% ___________ >>system.log");
					system("echo Malicious User tried to change password AS ADMIN. [FAILED!]. >>system.log");
					system("echo _______________________________________________________ >>system.log");
					cout << "Press any key to continue....."<<endl;
					getch();
					goto ADMINBLOCK;
				}		
			case '9': system("CLS");
			goto start;
			case 'A':
			case 'a':
				cout <<"\nEnter ID of Medicine You Want to Lookup: ";
				cin >>temp;
				for (int i=0;i<100;i++){
				if (med[i].GetID()==temp){
				med[i].output();
				system("PAUSE");
				system("CLS");
				goto ADMINBLOCK;	
					}
				}
					cout <<"\n No Medicine with This ID!!\n";
					system("PAUSE");
					system("CLS");
					goto ADMINBLOCK;
			
			case 'B':
			case 'b':	
				cout <<"\nEnter ID of Employe You Want to Lookup: ";
				cin >>temp;
				for (int i=0;i<10;i++){
				if (emp[i].GetID()==temp){
				emp[i].output();
				system("PAUSE");
				system("CLS");
				goto ADMINBLOCK;	
					}
				}
					cout <<"\n No Employe with This ID!!\n";
					system("PAUSE");
					system("CLS");
					goto ADMINBLOCK;
			case 'C':
			case 'c':
				cout <<"\nEnter ID of Manufecturer You Want to Lookup: ";
				cin >>temp;
				for (int i=0;i<10;i++){
				if (men[i].GetID()==temp){
				men[i].output();
				system("PAUSE");
				system("CLS");
				goto ADMINBLOCK;	
					}
				}
					cout <<"\n No Manufecturer with This ID!!\n";
					system("PAUSE");
					system("CLS");
					goto ADMINBLOCK;
			
			case 'D':
			case 'd':
				temp=0;
				for (int i=0;i<100;i++){
					if (med[i].Getstock()<10){
						if(strcmp(med[i].Getname(),"no-name")){
						temp++;
						cout <<"\nID: "<<med[i].GetID() <<" : Name " << med[i].Getname() << " Stock = " <<med[i].Getstock()<<endl;
						}
					}
				}
				if(temp==0){
					cout <<"\nAll Medicines Are Nicely Stocked!!\n";
					system("PAUSE");
					system("CLS");
					goto ADMINBLOCK;
				}else{
					cout <<"\nTotal Medicines Low At Stock are :"<< temp<<endl;
				}
				system("PAUSE");
				system("CLS");
				goto ADMINBLOCK;
			case 'E':
			case 'e':
				cout <<"\nEnter ID of Medicine You Want to Stock UP: ";
				cin >>temp;
				for (int i=0;i<100;i++){
				if (med[i].GetID()==temp){
				med[i].output();
				cout <<"\nEnter New Stock Number :\n";
				cin >> temp;
				med[i].Setstock(temp);
				//write med
				ofstream medout3("medicine.data", ios::app);
				medout3.seekp(i*sizeof(med[i]),ios::beg);
				medout3.write((char*)&med[i],sizeof(med[i]));
				medout3.close();
				cout <<"\nMedicine Stocked Up Successfully!!\n";
				med[i].output();
				system("PAUSE");
				system("CLS");
				goto ADMINBLOCK;	
					}
				}
					cout <<"\n No Medicine with This ID!!\n";
					system("PAUSE");
					system("CLS");
					goto ADMINBLOCK;
			case 'F':
			case 'f':
				temp=0;
				for (int i=0;i<100;i++){
						if(strcmp(med[i].Getname(),"no-name")){
						temp++;
						cout <<"\nID: "<<med[i].GetID() <<" : Name " << med[i].Getname() << " Stock = " <<med[i].Getstock()<<endl;
						}
					}
				if(temp==0){
					cout <<"\nStore is EMPTY!!\n";
					system("PAUSE");
					system("CLS");
					goto ADMINBLOCK;
				}else{
					cout <<"\nTotal Medicines In Store are :"<< temp<<endl;
				}
				system("PAUSE");
				system("CLS");
				goto ADMINBLOCK;	
			default:
				cout <<"\n Invalid Choice!!!\n";
				system("PAUSE");
				system("CLS");
				goto ADMINBLOCK;			
		}
	WORKERBLOCK:
		system("CLS");
		cout <<"\n\n******************************************************"<<endl;
		cout <<"*               WORKER BLOCK                         *"<<endl;
		cout <<"******************************************************"<<endl;
		cout <<endl<<endl;
		cout <<"\n1-Sell Medicine";
		cout <<"\n2-Leave Session";
		cout <<"\nEnter Your Choice :(1/2)>";
		choise=getche();
		switch(choise){
			case '1'://sell medicine
			char cmd;
			do{
				int bill=0;
				int fbill=0;
				
				sell:
					cin.ignore();
				cout <<"\nEnter Medicine Name :";
				gets(temp_s);
				for (int i=0;i<100;i++){
					if(!strcmp(temp_s,med[i].Getname())){
						check_2:
					cout <<"\nEnter Quantity :";
					cin >>temp;
					if(temp>med[i].Getstock()){
						cout <<"Sorry!! we dont have enough!!";
						cout <<"Available are :" <<med[i].Getstock();
						goto check_2;
					}else{
							
						bill=med[i].Getprice()*temp;
						fbill+=bill;
						cout <<"Total Bill for : "<<med[i].Getname() <<" is :" <<bill <<endl;
						cout <<"Grand total Bill is "<<fbill<<endl;
						cout <<"press \'Y\' to confirm \'Q\' to Exit";
						choise=getche();
						switch(choise){
							case 'Y':
							case 'y': cout <<"\nMedicine Bought!!\n ";
									med[i].Setstock(med[i].Getstock()-temp);
									//write med
									if(true){
									
									ofstream medout4("medicine.data", ios::app);
									medout4.seekp(i*sizeof(med[i]),ios::beg);
									medout4.write((char*)&med[i],sizeof(med[i]));
									medout4.close();
									}
									cout <<"\npress any key to buy more and \'Q\' to Exit";
									choise=getche();
									if(choise=='Q' || choise =='q'){
										cmd='Q';
										goto check_3;
									} else {
										goto sell;
									}
							case 'Q':
							case 'q': goto WORKERBLOCK;	
							
							}
						}	
					} 
				}
				
				cout <<"\n\nNo Medcine With This Name!!!\n";
				system("PAUSE");
				goto WORKERBLOCK;
			check_3:
				cout <<"hi";
			}while(cmd!='Q');
				system("CLS");
				goto WORKERBLOCK;
			case '2': goto start;
			default : cout <<"\n Invalid Choice!!!\n";
				system("PAUSE");
				system("CLS");
				goto WORKERBLOCK;
			
		}
			
	END:
	return 0;
}

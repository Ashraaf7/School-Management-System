#include<iostream>
#include<string>
class student; student (*arr) ;class teacher; teacher (*a); //array of object in classes
using namespace std;
//the base class 
//Abstracion
class member {
public :
string first_name;				
string last_name;
int id;
string course;
char period; 
virtual void add (int i)=0;
virtual void display (int i)=0;
};
//The derived class 1
//Inheritance 
class student: public member {
private :
 float total_degree;
public :
//dfault_constructor
student (){}
//Encapsulation 
	void set_first_name(string f){
		first_name=f;		}
	string get_first_name(){
		return first_name;	}
//------------------------------------------
	void set_last_name(string l)	{  last_name=l ; }
	string get_last_name(){
		return last_name;}
//------------------------------------------
	void set_id(int i){
		id=i;	}
	int get_id(){
		return id;}
//------------------------------------------
	void set_course(string c){
		course=c;}
	string get_course(){
		return course;}
//------------------------------------------
	void set_period(char p){
		period=p;}
	char get_period(){
		return period;}
//------------------------------------------
	void set_total_degree(float t){
		total_degree=t;}
	float get_total_degree(){
		return total_degree; }
//------------------------------------------
	void add (int i){   //function to add students
cout<<"enter first name of student "  <<i+1<<endl ;
cin>>arr[i].first_name;
cout<<"enter last name of student" <<i+1<<endl ;
cin>>arr[i].last_name;
cout<<"enter id of student" <<i+1<<endl ;
cin>>arr[i].id;
cout<<"enter course of student" <<i+1<<endl ;
cin>>arr[i].course;
cout<<"enter period of student "<<i+1<<" 'm' if morning or'e' if evening" <<endl ;
cin>>arr[i].period;
if (arr[i].period!='m' && arr[i].period !='e'){
	cout<<"Please enter 'm' if morning or'e' if evening" <<endl;
	cin>>arr[i].period;}
cout<<"enter total degree of student" <<i+1 <<endl ;
cin>>arr[i].total_degree;	}
	void display(int i){		//function to display students	 
cout<<"first_name is : " <<arr[i].first_name <<endl ;
cout<<"Last_name is : " <<arr[i].last_name <<endl ;
cout<<"Id is : "<<arr[i].id <<endl ;
cout<<"Course is : "<<arr[i].course <<endl ;
cout<<"Period is : "<<arr[i].period <<endl ;
cout<<"Total_degree is : "<<arr[i].total_degree <<endl ;	}
//Function Overriding
	void search(int i,int s){		//function to search for especially student
	static int f=0;
   while(s==arr[i].id) {   //If Id number matches to search item.
	  arr[i].display(i);
	  f++;
	  break;		}
   if (f==0)
	   cout<<"No student found" <<endl;   }
//polymorphism
	void modify (int i){	//function to modify especially student
cout<<"enter new first name of student "  <<i+1<<endl ;
cin>>arr[i].first_name;
cout<<"enter new last name of student" <<i+1<<endl ;
cin>>arr[i].last_name;
cout<<"enter new id of student" <<i+1<<endl ;
cin>>arr[i].id;
cout<<"enter new course of student" <<i+1<<endl ;
cin>>arr[i].course;
cout<<"enter new period of student "<<i+1<<" 'm' if morning or'e' if evening" <<endl ;
cin>>arr[i].period;
if (arr[i].period!='m' && arr[i].period !='e'){
	cout<<"Please enter 'm' if morning or'e' if evening" <<endl;
	cin>>arr[i].period;}
cout<<"enter new total degree of student" <<i+1 <<endl ;
cin>>arr[i].total_degree;	}
//Function Overloading
void edit(int i,int s,float d){           //function to edit and replace data for especially student
	static int f=0;
while(s==arr[i].id && d==arr[i].total_degree) {   //If id number & total_degree matches to search item.
		arr[i].modify(i);
	  f++;
	  break;		}
   if (f==0)
	   cout<<"No student found" <<endl;  }};
//The derived class 2
//Inheritance 
class teacher: public member {
public :
//dfault_constructor
	teacher (){}
//Encapsulation 
	void set_first_name(string f){
		first_name=f;}
	string get_first_name(){
		return first_name;}
//------------------------------------------
	void set_last_name(string l){
		last_name=l;}
string get_last_name(){   return last_name; } 
//------------------------------------------
	void set_id(int i){
		id=i;}
	int get_id(){
		return id;}
//------------------------------------------
	void set_course(string c){
		course=c;}
	string get_course(){
		return course;}
//------------------------------------------
	void set_period(char p){
		period=p;}
	char get_period(){
		return period;}
	void add (int i){		//function to add teachers		
cout<<"enter first name of teacher " <<i+1 <<endl ;
cin>>a[i].first_name;
cout<<"enter last name of teacher" <<i+1<<endl ;
cin>>a[i].last_name;
cout<<"enter id of teacher" <<i+1<<endl ;
cin>>a[i].id;
cout<<"enter course of teacher" <<i+1<<endl ;
cin>>a[i].course;
cout<<"enter period of teacher 'm' if morning or'e' if evening "<<i+1 <<"( morning or evening)" <<endl ;
cin>>a[i].period; 
	if (a[i].period!='m' && a[i].period !='e'){
	cout<<"Please enter 'm' if morning or'e' if evening" <<endl;
	cin>>a[i].period;}}
//------------------------------------------

	void display(int i){		//function to display all teachers		
cout<<"first_name is : " <<a[i].first_name <<endl ;
cout<<"Last_name is : " <<a[i].last_name <<endl ;
cout<<"Id is : "<<a[i].id <<endl ;
cout<<"Course is : "<<a[i].course <<endl ;
cout<<"Period is : "<<a[i].period <<endl ;	}
//polymorphism
	void modify (int i){		//function to modify especially teacher	
cout<<"enter new first name of teacher " <<i+1 <<endl ;
cin>>a[i].first_name;
cout<<"enter new last name of teacher" <<i+1<<endl ;
cin>>a[i].last_name;
cout<<"enter new id of teacher" <<i+1<<endl ;
cin>>a[i].id;
cout<<"enter new course of teacher" <<i+1<<endl ;
cin>>a[i].course;
cout<<"enter new period of teacher 'm' if morning or'e' if evening "<<i+1 <<"( morning or evening)" <<endl ;
cin>>a[i].period; 
	if (a[i].period!='m' && a[i].period !='e'){
	cout<<"Please enter 'm' if morning or'e' if evening" <<endl;
	cin>>a[i].period;}} 
//Function Overriding
	void search(int i,int f){		//function to search for especially student
  static int c=0;
	while(f==a[i].id) {   //If Id number matches to search item.
	  a[i].display(i);
	  c++;
	  break;		}
   if (c==0)
	   cout<<"No teacher found" <<endl; 		}

//Function overloading
void edit(int i,int h){		//function to edit and replace data for especially teacher
	static int f=0;
while(h==a[i].id ) {  		 //If Id number matches to search item.
		a[i].modify(i);
	  f++;
	  break;		}
   if (f==0)
	   cout<<"No student found" <<endl; 	}};
int main(){ 
arr= new student [50]; 	//intialization to array of objects using in  student class
 a=new teacher[50];		//intialization to array of objects using in  teacher class
student *s1;
s1=new student[50];		//object from student class
teacher *t1;
t1=new teacher [50];		//object from teacher class
int x=-1; 	//varible for count to do any Command once and comeback for main menu
int max1;		//varible for select number of students who add in list
int s;			//varible for student's id who is searched for
float d;			//varible for student's total_degree who is searched for
int max2;			//varible for select number of teachers who add in list
int n;				//varible for teacher's id who is searched for
	while(x!=0){
	cout<<"-----------------Main Menu-------------------" <<endl;
	cout<<"----------------For Students-------------------" <<endl;
	cout<<"	press 1 to add new student" <<endl;
	cout<<"	press 2 to search for a student" <<endl;
	cout<<"	press 3 to edit especially student" <<endl;
	cout<<"	press 4 to display all students" <<endl;
	cout<<"----------------For Teachers-------------------" <<endl;
	cout<<"	press 5 to add new teacher" <<endl;
	cout<<"	press 6 to search for a teacher" <<endl;
	cout<<"	press 7 to edit especially teacher" <<endl;
	cout<<"	press 8 to display all teachers" <<endl;
	cout<<"---------------------------------------------" <<endl;
	cout<<"	press 9 to close" <<endl;
	cout<<"---------------------------------------------" <<endl;
	cin>>x;
	if(x==1){
	cout<<"	enter total number of student (Maximum is 50)" <<endl;
	cin>>max1;
	static int m=0;
	while (max1 >50 || max1<0){
cout<<"Maximum is 50 enter number again or positive nember if you enter negative number" <<endl;
		m++;
	cin>>max1;
		if(m==0){
			break ;}}
		for(int i=0;i<max1;i++)
			s1[i].add(i); 
	cout<<"---------------------------------------------" <<endl; }
//------------------------------------------
	else if(x==2){
	cout<<"enter student id who is needed" <<"	:	";
	cin>>s;
	for(int i=0; i<max1;i++){
		s1[i].search(i,s);	}}
//------------------------------------------
	else if (x==3){
	cout<<"enter student id and total_degree who is needed to edit" <<endl;
	cout<<"Id "<<"	:	" ;cin>>s ;cout<<"Total_degree"<<"	:	";cin>>d;
	for(int i=0; i<max1;i++){
		s1[i].edit(i,s,d);	}}
//------------------------------------------------
	else if (x==4){
		for(int i=0; i<max1;i++){
			s1[i].display(i);
	cout<<"---------------------------------------------" <<endl;	}}
//-----------------------------------------------------------------
	else if(x==5){
	cout<<"	enter total number of student (Maximum is 50)" <<endl;
	cin>>max2;
	static int d=0;
	while (max2 >50 || max2<0){
		cout<<"Maximum is 50 enter number again or positive nember if you enter negative number" <<endl;
		d++;
	cin>>max2;
		if(d==0){
			break ;}}
		for(int i=0;i<max2;i++)
			t1[i].add(i); 
	cout<<"---------------------------------------------" <<endl;
		}
//---------------------------------------------------------------------------
	else if(x==6){
	cout<<"enter teacher Id who is needed"<<"	:	";
	cin>>n;
	for(int i=0; i<max2;i++){
		t1[i].search(i,n);	}}
//----------------------------------------------------
	else if (x==7){
	cout<<"enter teacher id who is needed to edit" <<endl;
	cout<<"Id "<<"	:	" ;cin>>n ;
	for(int i=0; i<max2;i++){
		t1[i].edit(i,n);	}}
//-------------------------------------------------------
	else if (x==8){
		for(int i=0; i<max2;i++){
			t1[i].display(i);
	cout<<"---------------------------------------------" <<endl;	}}
//-------------------------------------------------------------------------------			
	else if (x==9)
		exit(0);		
//-------------------------------------------------------------------------------	
	else if (x!=1 && x!=2 && x!=3 && x!=4 && x!=5 && x!=6 && x!=7 && x!=8 && x!=9){
		cout<<"( Please choose number from the menu )"<<endl;
		main (); }}
system("pause"); 
return (0);   }

/*4. Define a class PHOTO in C++ with the following specifications:
Private data members
• Pno of integer type
• Category of string type

3 | P a g e
• Exhibit of string type
Private member functions:
• FixExhibit()
A method to assign Exhibition Gallery as per Category as shown in the following table:

Category Exhibit
Antique Zaveri
Modern Johnsen
Classic Terenida

Public member functions:
• Register()
A function to allow user to enter values of Pno, Category and call FixExhibit() method to assign the
value of Exhibit.
• ViewAll()
A function to display all the data members.
*/
#include<iostream>
#include<cstring>
using namespace std;

class Photo
{
	private: 
		int Pno;
		char Category[30];
		char Exhibit[30];
		//MEMBER FUNCTION
		void FixExhibit();
	public:
		 void Register();
		 void ViewAll();
		
		
};
void Photo::FixExhibit()
{
	if (strcmpi(Category,"ANTIQUE")==0)
	{
		strcpy(Exhibit,"Zaveri");
	}
	else if(strcmpi(Category,"Modern")==0)
	{
		strcpy(Exhibit,"Johnsen");
	}
	else if(strcmpi(Category,"Classic")==0)
	{
		strcpy(Exhibit,"Terenida");
	}
}
void Photo::Register()
{
	cout<<"\nENTER THE VALUE OF PNO: ";
	cin>>Pno;
	cout<<"\nENTER THE CATEGORY: ";
	cin>>Category;
	FixExhibit();
	
}
void Photo::ViewAll()
{
	cout<<"\nTHE PNO IS: "<<Pno;
	cout<<"\nTHE CATEGORY IS: "<<Category;
	cout<<"\nTHE EXHIBIT IS: "<<Exhibit;
	
}
int main()
{
	Photo p1,p2;
	p1.Register();
	p1.ViewAll();
	p2.Register();
	p2.ViewAll();
}

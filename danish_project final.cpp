#include<iostream>
#include <conio.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
int return_value;
class admission
{
	private:
	  int marks;
	  string displaymenu_again;
	  int feecode;
	  float fees[5] = { 150000,170000,130000,90000,750000 };
	  string program_names[5] = { "BS Information Technology","BS Computer Science(BSCS)","BS SOFTWARE Engineering(BSSE)","BSc Civil Engineering(BSCE)","BSc Cyber Security(BSCY)", };
	public:
	  int menu_option;
	  int Apply_For_Program()
	  {
	    cout << "*****Apply For Program******" << endl;
		cout << "Degree Programs" << setw(30) << "Fee Structure" << endl;
		for (int i = 0; i < 5; i++)
			cout << "Sr.# " << i + 1 << '\t' << program_names[i] << '\t' <<fees[i] << endl;
		cout << "Choose the program in which you want to take admission: ";
		cin >> menu_option;
		for (int i = 1; i <= 5; i++) {
			cout << "Enter Marks In Intermediate : ";
			cin >> marks;
			int percentage = (marks * 100) / 1100;
			percentage_calculate(marks);
			string proceed_admission;
			if (percentage > 95) {
				cout << "Do you want to apply for scholarship? (y/n) ";
				cin >> proceed_admission;
				if (proceed_admission == "y") {
					cout << "Your fees after 100% scholarship is: " <<fees[menu_option - 1] - fees[menu_option - 1] << " Rs." << endl;
					cout << "Your admission is confirmed." << endl;
					generate_studentid();
					classes_starting();
					cout << "Go back to menu? (y/n)";
					do {
						cin >> displaymenu_again;
						if (displaymenu_again == "y") {
							system("cls");
							return 0;
						}
						else if (displaymenu_again == "n")
							return 1;
						else
							cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
					} 
					while (displaymenu_again != "n");
				}
				else {
					cout << "Your fees is : " <<fees[menu_option - 1] << "  Rs." << endl;
					generate_feevoucher();
					pay_fees();
					generate_studentid();
					classes_starting();
					cout << "Go back to menu? (y/n)";
					do {
						cin >> displaymenu_again;
						if (displaymenu_again == "y") {
							system("cls");
							return 0;
						}
						else if (displaymenu_again == "n")
							return 1;
						else
							cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
					}
					 while (displaymenu_again != "n");
				}
			}
			else if (percentage >= 80 && percentage < 95) {
				cout << "Do you want to apply for scholarship? (y/n) ";
				cin >> proceed_admission;
				if (proceed_admission == "y") {
					cout << "Your fees after 50% scholarship is: " <<fees[menu_option - 1] / 2 << " Rs." << endl;
					generate_feevoucher();
					pay_fees();
					generate_studentid();
					classes_starting();
					cout << "Go back to menu? (y/n)";
					do {
						cin >> displaymenu_again;
						if (displaymenu_again == "y") {
							system("cls");
							return 0;
						}
						else if (displaymenu_again == "n")
							return 1;
						else
							cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
					} while (displaymenu_again != "n");
				}
				else 
				{
					cout << "Your fees is : " <<fees[menu_option - 1] << "  Rs." << endl;
					generate_feevoucher();
					pay_fees();
					generate_studentid();
					classes_starting();
					cout << "Go back to menu? (y/n)";
					do {
						cin >> displaymenu_again;
						if (displaymenu_again == "y") {
							system("cls");
							return 0;
						}
						else if (displaymenu_again == "n")
							return 1;
						else
							cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
					} 
					while (displaymenu_again != "n");
				}
			}
			else if (percentage >= 75 && percentage < 80) 
			{
				cout << "Do you want to apply for scholarship? (y/n) ";
				cin >> proceed_admission;
				if (proceed_admission == "y") {
					double fee =fees[menu_option-1] - fees[menu_option-1] * 0.25;
					cout << "Your fees after 25% scholarship is : " << fee << "  Rs." << endl;
					generate_feevoucher();
					pay_fees();
					generate_studentid();
					classes_starting();
					cout << "Go back to menu? (y/n)";
					do {
						cin >> displaymenu_again;
						if (displaymenu_again == "y") {
							system("cls");
							return 0;
						}
						else if (displaymenu_again == "n")
							return 1;
						else
							cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
					} 
					while (displaymenu_again != "n");
				}
				else {
					cout << "Your fees is : " <<fees[menu_option - 1] << "  Rs." << endl;
					generate_feevoucher();
					pay_fees();
					generate_studentid();
					classes_starting();
					cout << "Go back to menu? (y/n)";
					do {
						cin >> displaymenu_again;
						if (displaymenu_again == "y") {
							system("cls");
							return 0;
						}
						else if (displaymenu_again == "n")
							return 1;
						else
							cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
					} while (displaymenu_again != "n");
				}
			}
			else if (percentage > 50 && percentage < 75) 
			{
				cout << "Your fees is : " <<fees[menu_option - 1] << "  Rs." << endl;
				generate_feevoucher();
				pay_fees();
				generate_studentid();
				classes_starting();
				cout << "Go back to menu? (y/n)";
				do {
					cin >> displaymenu_again;
					if (displaymenu_again == "y") {
						system("cls");
						return 0;
					}
					else if (displaymenu_again == "n")
						return 1;
					else
						cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
				} while (displaymenu_again != "n");
			}
			else
				do {
					cin >> displaymenu_again;
					if (displaymenu_again == "y") {
						system("cls");
						return 0;
					}
					else if (displaymenu_again == "n")
						return 1;
					else
						cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
				} 
				while (displaymenu_again != "n");
		} 	
	  }
	  int Signup_Section()
	  {
	  	int count=0;
	  	char email[] = { "e"};
		cout << "*****Signup Section******" << endl;
		cout << "Enter your email address: " << endl;
		do {
			for (int i = 0;;) {
				cin >> email[i];
				count++;
				if (cin.get() == '\n')
					return 0;
			}
			for (int i = 0; i < count; i++) {
				if (email[i] != '@' && email[i] != '.' && email[i] != 'c' && email[i] != 'o' && email[i] != 'm')
					cout << "Enter a valid email address.\nEnter again." << endl;
				return 0;
			}
		} while (email[count] != '@' && email[count] != '.' && email[count] != 'c' && email[count] != 'o' && email[count] != 'm');
		
		cout << "(password length should be 5 characters max)" << endl;
		cout << "Enter your password: " << endl;
		char password[5];
		for (int i = 0;i<5;i++) 
		{
			password[i] = _getch();
			cout<<'*';
		}
		char confirmpassword[5];
		cout << "\nEnter your password again." << endl;
		for (int i = 0;;) 
		{
			confirmpassword[i] = _getch();
			cout << '*';
		}
		for (int i = 0; i<5;i++) 
		{
			if (password[i] == confirmpassword[i]) 
			{
				cout << "\nPassword confirmed." << endl;
				cout << "Go back to menu? (y/n)";
				do {
					cin >> displaymenu_again;
					if (displaymenu_again == "y") {
						system("cls");
						return 0;
					}
					else if (displaymenu_again == "n")
						return 1;
					else
						cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
				} 
				while (displaymenu_again != "n");
			}
			else
			{
				cout << "\nPasswords do not match" << endl;
				cout << "Go back to menu? (y/n)";
				do {
					cin >> displaymenu_again;
					if (displaymenu_again == "y") {
						system("cls");
						return 0;
					}
					else
						cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
				} 
				while (displaymenu_again != "n");
				return 1;
			}
	  }
    }
	  int Scholarship_Section()
	  {
	  	cout << "*****Scholarship Section******" << endl;
		cout << "Marks between 95%-100%\t Scholarship Will Be 100%\nMarks between 80%-94%\tScholarship Will Be 50%\nMarks between 75%-79%\tScholarship Will Be 25%\nMarks are less than 50%(Student are not eligible for admission)" << endl;
		cout << "Go back to menu? (y/n)";
		do {
			cin >> displaymenu_again;
			if (displaymenu_again == "y") {
				system("cls");
				return 0;
			}
			else if (displaymenu_again == "n")
				return 1;
			else
				cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
		} 
		while (displaymenu_again != "n");
		return 0;
	  }
	  int Fee_Structure()
	  {
	  	cout << "******Fee Structure Of Following Program Is***** " << endl;
		cout << "Degree Programs" << setw(30) << "Fee Structure" << endl;
		for (int i = 0; i < 5; i++)
			cout <<program_names[i] << '\t' <<fees[i] << endl;
		cout << "Go back to menu? (y/n)";
		do {
			cin >> displaymenu_again;
			if (displaymenu_again == "y") 
			{
				system("cls");
				return 0;
			}
			else if (displaymenu_again == "n")
				return 1;
			else
				cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
		} 
		while (displaymenu_again != "n");
		return 1;
	  }
	  int Offering_Program()
      {
      	cout << "******The Offering Program IS Following***** " << endl;
		for (int i = 0; i < 5; i++)
			cout <<program_names[i] << endl;
		cout << "Go back to menu? (y/n)";
		do {
			cin >> displaymenu_again;
			if (displaymenu_again == "y") {
				system("cls");
				return 0;
			}
			else if (displaymenu_again == "n")
				return 1;
			else
				cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
		}
		while (displaymenu_again != "n");
		return 1;
	  }  
	  void percentage_calculate(int Marks)
	  {
	  int percentage = (Marks * 100) / 1100;
	  if (percentage >= 50) 
	  {
		cout << "Your Percentage is:" << percentage << "%." << " You Are Eligible For Applying In This Program" << endl;
		if (percentage >= 95)
			cout << "You have been awarded 100% scholarship" << endl;
		else if (percentage >= 80 && percentage < 95)
			cout << "You have been awarded 50% scholarship" << endl;
		else if (percentage >= 75 && percentage < 80)
			cout << "You have been awarded 25% scholarship" << endl;
		else if (percentage < 75)
			cout << "You do not qualify for a scholarship." << endl;
	  }
	  else 
	  {
	   cout << "Your percetage is " << percentage << "%" << endl;
	   cout << "Sorry Your Percentage Below 50% You are not Eligible For This Program" << endl;
	  }
      }
      int pay_fees()
	  {
	   cout << "To pay your fees select your preferred method from the following: " << endl;
	   cout << "Press 1 to pay via credit card\tPress 2 to pay via bank: ";
	   int pay;
	   cin >> pay;
	   int fee_vouchercode;
	   switch (pay) {
	   case 1:
		   int creditcard_number;
		   do 
		   {
			cout << "Enter your fee voucher code: ";
			cin >> fee_vouchercode;
			if (fee_vouchercode == feecode)
			   {
				cout << "Enter your credit card number: ";
				cin >> creditcard_number;
				cout << "Enter your 10-digit credit card password: " << endl;
				char creditcard_code[10];
				for (int i = 0; i < 10; i++)
				{
					creditcard_code[i] = _getch();
					cout << '*';
				}
				cout << endl;
				cout << "Your fee is paid." << endl;
				cout << "Go back to menu?(y/n)";
				do 
				{
					cin >> displaymenu_again;
					if (displaymenu_again == "y") 
					{
						system("cls");
						return 0;
					}
					else if (displaymenu_again == "n")
						return 1;
					else
						cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
				} 
				while (displaymenu_again != "n");
				return 1;
			    }
			else 
			{
				cout << "Wrong voucher code entered." << endl;
				cout << "Enter again." << endl;
				cout << "Go back to menu?(y/n)";
				do {
					cin >> displaymenu_again;
					if (displaymenu_again == "y") 
					{
						system("cls");
						return 0;
					}
					else if (displaymenu_again == "n")
						return 1;
					else
						cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
				   } 
				while (displaymenu_again != "n");
			}
		  } 
		while (fee_vouchercode != feecode);
		break;
	case 2:
		do {
			cout << "Enter your fee voucher code: ";
			cin >> fee_vouchercode;
			if (fee_vouchercode == feecode) {
				cout << "You have to pay the fees in person in the nearest bank branch." << endl;
			}
			else 
			{
				cout << "Wrong voucher code entered." << endl;
				cout << "Enter again." << endl;
				cout << "Go back to menu?(y/n)";
				do 
				{
					cin >> displaymenu_again;
					if (displaymenu_again == "y")
					{
						system("cls");
						return 0;
					}
					else if (displaymenu_again == "n")
						return 1;
					else
						cout << "Wrong option entered. Enter again. Enter(y/n)" << endl;
				} 
				while (displaymenu_again != "n");
			}
		   }
		 while (fee_vouchercode != feecode);
		 break;
	}
    }
    void display_menu() 
	  {
	   cout << "****************MENU*****************" << endl;
	   cout << "To Check Offering Programs Press 1" << endl;
	   cout << "                                  " << endl;
	   cout << "For Fee Structure Press 2" << endl;
	   cout << "                                  " << endl;
	   cout << "For Scholarship Section Press 3" << endl;
 	   cout << "                                  " << endl;
	   cout << "For Registration & Login Press 4" << endl;
	   cout << "                                  " << endl;
	   cout << "To Apply Press 5" << endl;
      }
      void generate_feevoucher() 
	  {
	   feecode = rand();
	   cout << "Your fee voucher's code is: " << feecode << endl;
      }
      void generate_studentid() 
	  {
	   int studentid = rand() % 100 + 1;
	   cout << "Your student id is F2021105" << studentid << endl;
      }
      void classes_starting() 
	  {
	   cout << "Your classes will be starting from April " << rand() % 30 + 1 << " 2022" << endl;
      }
};
int main()
{
	admission object;
    cout << "WELCOME TO UMT ADMISSION PORTAL" << endl;
    do
    {
    object.display_menu();
    cin>>object.menu_option;
    switch (object.menu_option)
    {
    case 1:
        return_value=object.Offering_Program();
        break;
	case 2:
	    return_value=object.Fee_Structure();
		break;
	case 3:
	    return_value=object.Scholarship_Section();   
		break;
	case 4:
	    return_value=object.Signup_Section();
		break;
	case 5:
		return_value=object.Apply_For_Program();
		break;
	default:
		cout << "You selected the wrong option. Go back to the main menu." << endl;
		main();
	}
    }
   while(return_value!=1);
	return 0;
}
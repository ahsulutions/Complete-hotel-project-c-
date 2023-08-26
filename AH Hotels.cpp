#include<iostream>
#include<string>
using namespace std;
int main()
{
	float charges;
	int enter,confirm,age,gender,phone_n,start,email,sure,program,signin,id,book,selectroom,reqroom,payment,cardnumber,securitycode,agree,ride;
	int bookride,chopper,plane,car,mobile,code,paypal,paypalnumber,amazonnumber,room_no[3],floor_no;
	string name,password,re_enter,email_address,userpassword,username,room,exist,fname,lname,expirydate,arrival,username1,userpassword1,phone,roomm,payment_t;
	
	cout<<"**************************************************************************************************************"<<endl;
	cout<<"                                                [ AH HOTELS ]                                             "<<endl;
	cout<<"**************************************************************************************************************"<<endl;
	cout<<"[1]Guest"<<endl;
	cout<<"[2]Overview"<<endl;
	cout<<"[3]EXIT"<<endl;
	cout<<endl;
	cout<<"Enter Your Status:"<<endl;
	cin>>start;
	switch(start){
	case 1:
		
	
		cout<<"**************************************************************************************************************"<<endl;
		cout<<"                                       WELCOME TO AH HOTEL                                                "<<endl;
		cout<<"**************************************************************************************************************"<<endl;
		cout<<endl<<endl;
		cout<<"Would you like to:"<<endl;
	cout<<"[1]Register"<<endl;
	cout<<"[0]Exit"<<endl;
	cin>>enter;
	    
	
	

		
	switch(enter){
			
		
			
		
		case 1:
		cout<<"**************************************************************************************************************"<<endl;
        cout<<"                                              NEW USER FORM                                                   "<<endl;
		cout<<"**************************************************************************************************************"<<endl;
		cout<<"Enter name :"<<endl;
		cin>>name;
			/*cout << "Please enter your name: "<<endl; 
    		getline(cin, name); 
    		cout << "Hello, "<<name<<" welcome to GfG !\n";*/
			cout<<"Enter your ID card number:"<<endl;
			cin>>id;
		    cout<<endl<<endl;
		    cout<<"Enter password =";
		    cin>>password;
		    cout<<"Re Enter pasword =";
		    cin>>re_enter;
			while(password!=re_enter){
			cout<<"Your Password does'nt match"<<endl<<"Try again"<<endl;
			cout<<"Enter password =";
			cin>>password;
			cout<<"Re Enter pasword =";
			cin>>re_enter;
			
	}
			cout<<endl<<endl;
			
			cout<<"Enter your age:"<<endl;
			cin>>age;}
			cout<<endl<<endl;
			cout<<"Enter your Gender:"<<endl;
			cout<<"[1]Male"<<endl;
			cout<<"[2]Female"<<endl;
			cin>>gender;
			cout<<endl<<endl;
			if(gender==1){
				cout<<"GENDER:Male[M]"<<endl;
			}
			else if(gender==2){
				cout<<"GENDER:Female[F]"<<endl;
			}
			else{
				cout<<"Invalid Entry"<<endl;
			}
			cout<<endl<<endl;
			cout<<"Enter your Email(OPTIONAL):"<<endl;
			cout<<"[1]YES"<<endl;
			cout<<"[2]SKIP"<<endl;
			cin>>email;
			if(email==1){
				cout<<"Enter your Email:"<<endl;
				cin>>email_address;
			}
			else{
				
			}
			cout<<endl<<endl;
			cout<<"Phone number(11 digit):"<<endl;
			cin>>phone;
			cout<<endl<<endl;
			cout<<"ARE YOU SURE YOU WANT TO CONTINUE:"<<endl;
			cout<<"[1]YES"<<endl;
			cout<<"[2]NO"<<endl;
			cin>>sure;
			cout<<endl<<endl<<endl;
			if(sure==1){
				cout<<"**************************************************************************************************************"<<endl;
				cout<<"                                     Username :"<<name<<endl;
				cout<<"                                     Password :"<<password<<endl;
				cout<<"**************************************************************************************************************"<<endl;
				cout<<endl<<endl;
				cout<<"[NOTE:PLEASE DONOT SHARE YOUR PASSWORD WITH ANYONE]"<<endl;
			}
			else{
				cout<<"ERROR"<<endl;
				cout<<"TRY AGAIN!"<<endl;
			}
			cout<<endl<<endl;
			cout<<"[1]SIGN IN"<<endl;
			cout<<"[2]EXIT"<<endl;
			cin>>signin;
			if(signin==1){
					cout<<"**************************************************************************************************************"<<endl;
	              	cout<<"                                       PREMIUM MEMBERSHIP FORM                                                "<<endl;
		            cout<<"**************************************************************************************************************"<<endl;
			}
			else{
				exit(0);
			}
			cout<<endl<<endl;
			
			cout<<"[Program Exits on Wrong Details Due To Security Reasons]"<<endl;
			cout<<endl<<endl;
		    cout<<"PLEASE ENTER YOUR USERNAME:"<<endl;
		    cin>>username;
		    cout<<"PLEASE ENTER YOUR PASSWORD:"<<endl;
		    cin>>userpassword;
		    while(username!=name || userpassword!=password)
			 {
			cout<<"Invalid name or Password"<<endl<<"Try again"<<endl;
			cout<<"Enter name =";
			cin>>username;
			cout<<"PLEASE ENTER YOUR PASSWORD:"<<endl;
			cin>>userpassword;
			
	}
			
			cout<<endl<<endl;
			cout<<"********************************************************************************************************"<<endl;
			cout<<endl<<endl;
			cout<<"WELCOME MR."<<username<<endl;
			cout<<endl<<endl;
		    cout<<"Wanna Join us?"<<endl;
		    cout<<"Book a Room!"<<endl;
		    cout<<endl<<endl;
		    cout<<"[1]Reservation and Booking"<<endl;
			cout<<"[2]Exit"<<endl;
			cin>>book;
			cout<<endl<<endl;
			if(book==1){
				cout<<"                   NOTE:MAXIMUM OF SIX MEMBERS ARE ALLOWED IN A ROOM                   "<<endl;
				cout<<endl<<endl;
				cout<<"Following are the Rooms Types"<<endl;
				cout<<"Regular Room(Single Bed)"<<endl;
				cout<<"Regular Room(Double Bed)"<<endl;
				cout<<"Premium Room(single Bed)"<<endl;
				cout<<"Premium Room(Double Bed)"<<endl;
				cout<<endl;
				cout<<"DETAILS ARE AS FOLLOWS"<<endl;
				cout<<"Press any character for details"<<endl;
				cin>>room;
				
				

				cout<<"*************************** Regular Room (Single) Details ***************************"<<endl;
				cout<<endl;
				cout<<"[@]Charges=$99 per night"<<endl;
				cout<<"[@]No Honoury Drinks"<<endl;
				cout<<"[@]Single Rooms"<<endl;
				cout<<"[@]No Bellboy Included"<<endl;
				cout<<"[@]Rooms not Air-Conditioned"<<endl;
				cout<<"[@]House Keeping Included"<<endl;
				cout<<"[@]Laundary not Included"<<endl;
				cout<<"[@]Room Service Available 24/7"<<endl;
				cout<<"[@]GST Excluded"<<endl;
				}
				cout<<endl<<endl;
				
				cout<<"*************************** Regular Room (Double) Details ***************************"<<endl;
				cout<<endl;
				cout<<"[@]Charges=$149 per night"<<endl;
				cout<<"[@]No honoury Drinks Included"<<endl;
				cout<<"[@]No BellBoy Included"<<endl;
				cout<<"[@]Double Rooms"<<endl;
				cout<<"[@]Air-Conditioned Rooms"<<endl;
				cout<<"[@]House Keeping Included"<<endl;
				cout<<"[@]Laundary Included"<<endl;
				cout<<"[@]Room Service Available 24/7"<<endl;
				cout<<"[@]GST Excluded"<<endl;
				cout<<endl<<endl;
					
				
				cout<<"*************************** Premium Room (Single) Details ***************************"<<endl;
				cout<<endl;
				cout<<"[@]Charges=$299 per night"<<endl;
				cout<<"[@]Free Car Services Included"<<endl;
				cout<<"[@]Honoury Drinks Included"<<endl;
				cout<<"[@]BellBoy Included"<<endl;
				cout<<"[@]Sweet Rooms"<<endl;
				cout<<"[@]Air-Conditioned Rooms"<<endl;
				cout<<"[@]House Keeping Included"<<endl;
				cout<<"[@]Laundary Included"<<endl;
				cout<<"[@]Room Service Available 24/7"<<endl;
				cout<<"[@]All Special Services Included"<<endl;
				cout<<"[@]GST Excluded"<<endl;
				cout<<endl<<endl;
				
				cout<<"*************************** Premium Room (Double) Details ***************************"<<endl;
				cout<<endl;
				cout<<"[@]Charges=$549 per night"<<endl;
				cout<<"[@]Private Pool Included"<<endl;
				cout<<"[@]Free Helicopter Ride Across the City"<<endl;
				cout<<"[@]Private Cinema"<<endl;
				cout<<"[@]Private Massage and Spa"<<endl; 
				cout<<"[@]Honoury Drinks Included"<<endl;
				cout<<"[@]Private BellBoy Included"<<endl;
				cout<<"[@]Special Rooms"<<endl;
				cout<<"[@]Air-Conditioned Rooms"<<endl;
				cout<<"[@]House Keeping Included"<<endl;
				cout<<"[@]Laundary Included"<<endl;
				cout<<"[@]Room Service Available 24/7"<<endl;
				cout<<"[@]All Special Services Included"<<endl;
				cout<<"[@]GST Excluded"<<endl;
				cout<<endl<<endl;
				
				cout<<"KINDLY READ THE DETAILS CAREFULLY BEFORE CONTINUING...."<<endl;
					
				cout<<endl<<endl;
				cout<<"Select a Room:"<<endl;
				cout<<endl;
				cout<<"[1]Regular Room(Single Bed)"<<endl;
				cout<<"[2]Regular Room(Double Bed)"<<endl;
				cout<<"[3]Premium Room(Single Bed)"<<endl;
				cout<<"[4]Premium Room(Sweet Room)"<<endl;
				cin>>selectroom;
				cout<<endl<<endl;
				cout<<"********************************************************************************************************"<<endl;
				if(selectroom==1){
					floor_no=1;
					roomm="Regular_Room(Single Bed)";
					cout<<endl<<endl;
					cout<<"Room Type : Regular Room - Single Bed"<<endl;
					cout<<"Room Charges per night : $99.00"<<endl;
					cout<<"Total Rooms : 50"<<endl;
					cout<<"Floors : 1"<<endl;
					cout<<"Available Rooms : 1-50"<<endl;
					cout<<endl<<endl;
					cout<<"********************************************************************************************************"<<endl;
					cout<<"[NOTE: MAXIMUM OF 3 ROOMS CAN BE BOOKED ON ONE ID]"<<endl;
					cout<<endl;
					cout<<"Enter the Number of rooms required=" <<endl;
					cin>>reqroom;
					cout<<endl<<endl;
					cout<<"********************************************************************************************************"<<endl;
					if(reqroom==1){
						charges=116.82;
					room_no[0]=1;
					cout<<endl<<endl;
					cout<<"You Have been Allocated Room No. [1]"<<endl;
					cout<<"Floor : 1"<<endl;
					cout<<endl<<endl;
					cout<<"Room Charges : $99.00"<<endl;
					cout<<"Due Amount   : $99.00"<<endl;
					cout<<"GST tax[18%] : $17.82"<<endl;
					cout<<endl<<endl;
					cout<<"TOTAL AMOUNT : $116.82"<<endl;
					}
					else if(reqroom==2){
						charges=233.64;
					room_no[0]=1;
					room_no[1]=2;
					cout<<endl<<endl;
					cout<<"You Have been Allocated Room No. [1] [2] "<<endl;
					cout<<"Floor : 1"<<endl;
					cout<<endl<<endl;
					cout<<"Room Charges : $99.00"<<endl;
					cout<<"Due Amount   : $198.00"<<endl;
					cout<<"GST tax[18%] : $35.64"<<endl;
					cout<<endl<<endl;
					cout<<"TOTAL AMOUNT : $233.64"<<endl;
					}
					else if(reqroom==3){
						charges=350.64;
					room_no[0]=1;
					room_no[1]=2;
					room_no[2]=3;
					cout<<endl<<endl;
					cout<<"You Have been Allocated Room No. [1] [2] [3]"<<endl;
					cout<<"Floor : 1"<<endl;
					cout<<endl<<endl;
					cout<<"Room Charges : $99.00"<<endl;
					cout<<"Due Amount   : $297.00"<<endl;
					cout<<"GST tax[18%] : $53.64"<<endl;
					cout<<endl<<endl;
					cout<<"TOTAL AMOUNT : $350.64"<<endl;
                    }
					}
					
				else if(selectroom==2){
					floor_no=2;
					roomm="Regular_Room(Double Bed)";
					cout<<endl<<endl;
					cout<<"Room Type : Regular Room - Double Bed"<<endl;
					cout<<"Room Charges per night : $149.00"<<endl;
					cout<<"Total Rooms : 50"<<endl;
					cout<<"Floors : 2"<<endl;
					cout<<"Available Rooms : 51-100"<<endl;
					cout<<endl<<endl;
					cout<<"********************************************************************************************************"<<endl;
					cout<<"[NOTE: MAXIMUM OF 3 ROOMS CAN BE BOOKED ON ONE ID]"<<endl;
					cout<<endl;
					cout<<"Enter the Number of rooms required=" <<endl;
					cin>>reqroom;
					cout<<endl<<endl;
					cout<<"********************************************************************************************************"<<endl;
					if(reqroom==1){
						charges=175.82;
					room_no[0]=51;
					cout<<endl<<endl;
					cout<<"You Have been Allocated Room No. [51]"<<endl;
					cout<<"Floor : 2"<<endl;
					cout<<endl<<endl;
					cout<<"Room Charges : $149.00"<<endl;
					cout<<"Due Amount   : $149.00"<<endl;
					cout<<"GST tax[18%] : $26.82"<<endl;
					cout<<endl<<endl;
					cout<<"TOTAL AMOUNT : $175.82"<<endl;
					}
					else if(reqroom==2){
						charges=351.82;
					room_no[0]=51;
					room_no[1]=52;
					cout<<endl<<endl;
					cout<<"You Have been Allocated Room No. [51] [52] "<<endl;
					cout<<"Floor : 2"<<endl;
					cout<<endl<<endl;
					cout<<"Room Charges : $149.00"<<endl;
					cout<<"Due Amount   : $298.00"<<endl;
					cout<<"GST tax[18%] : $53.64"<<endl;
					cout<<endl<<endl;
					cout<<"TOTAL AMOUNT : $351.82"<<endl;
					}
					else if(reqroom==3){
						charges=527.82;
					room_no[0]=51;
					room_no[1]=52;
					room_no[2]=53;
					cout<<endl<<endl;
					cout<<"You Have been Allocated Room No. [51] [52] [53]"<<endl;
					cout<<"Floor : 2"<<endl;
					cout<<endl<<endl;
					cout<<"Room Charges : $149.00"<<endl;
					cout<<"Due Amount   : $447.00"<<endl;
					cout<<"GST tax[18%] : $80.46"<<endl;
					cout<<endl<<endl;
					cout<<"TOTAL AMOUNT : $527.82"<<endl;
					}
					}
				
				else if(selectroom==3){
					floor_no=3;
					roomm="Premium_Room(Single Bed)";
					cout<<endl<<endl;
					cout<<"Room Type : Premium Room - Single Bed"<<endl;
					cout<<"Room Charges per night : $299"<<endl;
					cout<<"Total Rooms : 50"<<endl;
					cout<<"Floors : 3"<<endl;
					cout<<"Available Rooms : 102-150"<<endl;
					cout<<endl<<endl;
					cout<<"********************************************************************************************************"<<endl;
					cout<<"[NOTE: MAXIMUM OF 3 ROOMS CAN BE BOOKED ON ONE ID]"<<endl;
					cout<<endl;
					cout<<"Enter the Number of rooms required=" <<endl;
					cin>>reqroom;
					cout<<endl<<endl;
					cout<<"********************************************************************************************************"<<endl;
					if(reqroom==1){
						charges=352.82;
						room_no[0]=101;
					cout<<endl<<endl;
					cout<<"You Have been Allocated Room No. [101]"<<endl;
					cout<<"Floor : 3"<<endl;
					cout<<endl<<endl;
					cout<<"Room Charges : $299.00"<<endl;
					cout<<"Due Amount   : $299.00"<<endl;
					cout<<"GST tax[18%] : $53.82"<<endl;
					cout<<endl<<endl;
					cout<<"TOTAL AMOUNT : $352.82"<<endl;
					}
					else if(reqroom==2){
						charges=705.64;
					room_no[0]=101;
					room_no[1]=102;
					cout<<endl<<endl;
					cout<<"You Have been Allocated Room No. [101] [102] "<<endl;
					cout<<"Floor : 3"<<endl;
					cout<<endl<<endl;
					cout<<"Room Charges : $299.00"<<endl;
					cout<<"Due Amount   : $598.00"<<endl;
					cout<<"GST tax[18%] : $107.64"<<endl;
					cout<<endl<<endl;
					cout<<"TOTAL AMOUNT : $705.64"<<endl;
					}
					else if(reqroom==3){
						charges=1058.46;
					room_no[0]=101;
					room_no[1]=102;
					room_no[2]=103;
					cout<<endl<<endl;
					cout<<"You Have been Allocated Room No. [101] [102] [103]"<<endl;
					cout<<"Floor : 3"<<endl;
					cout<<endl<<endl;
					cout<<"Room Charges : $299.00"<<endl;
					cout<<"Due Amount   : $897.00"<<endl;
					cout<<"GST tax[18%] : $161.46"<<endl;
					cout<<endl<<endl;
					cout<<"TOTAL AMOUNT : $1058.46"<<endl;
					}
					}
						
				else if(selectroom==4){
					floor_no=4;
					roomm="Premium_Room(Single Bed)";
					cout<<endl<<endl;
					cout<<"Room Type : Premium Room - Sweet Room"<<endl;
					cout<<"Room Charges per night : $549.00  "<<endl;
					cout<<"Total Rooms : 50"<<endl;
					cout<<"Floors : 4"<<endl;
					cout<<"Available Rooms : 151-200"<<endl;
					cout<<endl<<endl;	
					cout<<"********************************************************************************************************"<<endl;
					cout<<"[NOTE: MAXIMUM OF 3 ROOMS CAN BE BOOKED ON ONE ID]"<<endl;
					cout<<endl;
					cout<<"Enter the Number of rooms required=" <<endl;
					cin>>reqroom;
					cout<<endl<<endl;
					cout<<"********************************************************************************************************"<<endl;
					if(reqroom==1){
						charges=647.82;
					room_no[0]=151;
					cout<<endl<<endl;
					cout<<"You Have been Allocated Room No. [151]"<<endl;
					cout<<"Floor : 4"<<endl;
					cout<<endl<<endl;
					cout<<"Room Charges : $549.00"<<endl;
					cout<<"Due Amount   : $549.00"<<endl;
					cout<<"GST tax[18%] : $98.82"<<endl;
					cout<<endl<<endl;
					cout<<"TOTAL AMOUNT : $647.82"<<endl;
					}
					else if(reqroom==2){
						charges=1295.64;
					room_no[0]=151;
					room_no[1]=152;
					cout<<endl<<endl;
					cout<<"You Have been Allocated Room No. [151] [152] "<<endl;
					cout<<"Floor : 4"<<endl;
					cout<<endl<<endl;
					cout<<"Room Charges : $549.00"<<endl;
					cout<<"Due Amount   : $1098.00"<<endl;
					cout<<"GST tax[18%] : $197.64"<<endl;
					cout<<endl<<endl;
					cout<<"TOTAL AMOUNT : $1295.64"<<endl;
					}
					else if(reqroom==3){
						charges=1943.46;
					room_no[0]=151;
					room_no[1]=152;
					room_no[2]=153;
					cout<<endl<<endl;
					cout<<"You Have been Allocated Room No. [151] [152] [153]"<<endl;
					cout<<"Floor : 4"<<endl;
					cout<<endl<<endl;
					cout<<"Room Charges : $549.00"<<endl;
					cout<<"Due Amount   : $1647.00"<<endl;
					cout<<"GST tax[18%] : $296.46"<<endl;
					cout<<endl<<endl;
					cout<<"TOTAL AMOUNT : $1943.46"<<endl;
					}
					else{
						cout<<"Invalid "<<endl;
					}
					}
					cout<<endl;
					cout<<"********************************************************************************************************"<<endl;
					cout<<endl<<endl;
					cout<<"Date of Arrival (mm-dd-yy) :"<<endl;
				    cin>>arrival;
				    cout<<endl<<endl;
				    cout<<"ROOM STATUS: AVAILABLE"<<endl;
				    cout<<endl<<endl;
				cout<<"Please Select Your Payment Method:"<<endl;
				cout<<"[1] Debit/Credit Card"<<endl;
				cout<<"[2] Mobile Payment"<<endl;
				cout<<"[3] Cash on Arrival"<<endl;
				cin>>payment;
				cout<<endl<<endl;
				if(payment==1){
					
					cout<<"Setup your Credit Card or Debit Card:"<<endl;
					cout<<endl;
					cout<<"First Name:"<<endl;
					cin>>fname;
					cout<<"Last Name:"<<endl;
					cin>>lname;
					cout<<"Card Number:"<<endl;
					cin>>cardnumber;
					cout<<"Expiry Date [MM-DD-YY]"<<endl;
					cin>>expirydate;
					cout<<endl;
					cout<<"AUTO-GENERATED CODE: 46920"<<endl;
					cout<<endl;
					cout<<"Security Code:";
					cin>>securitycode;
					while(securitycode!=46920)
					{
						cout<<"InValid Code"<<endl;
						cout<<endl;
					    cout<<"Security Code:";
					    cin>>securitycode;
							
					}
				}
				else if(payment==2){
					
					cout<<endl<<endl;
					cout<<"Enter Your Mobile Number ="<<endl;
					cin>>mobile;
					cout<<endl<<endl;
					cout<<"Enter Your Confirmation Code :"<<endl;
					cin>>code;
					cout<<endl<<endl;
					cout<<"Select the Method :"<<endl;
					cout<<"[1] Paypal"<<endl;
					cout<<"[2] Amazon Pay"<<endl;
					cin>>paypal;
					if(paypal==1){
						cout<<endl<<endl;
						cout<<"Add Your Account Number :"<<endl;
						cin>>paypalnumber;
						cout<<endl<<endl;
					}
					else if(paypal==2)
					{
						cout<<endl<<endl;
						cout<<"Add Your Account Number :"<<endl;
						cin>>amazonnumber;
						cout<<endl<<endl;
						
					}
				}
				
				else if(payment==3)
				{
					cout<<endl<<endl;
					cout<<"Cash on Arrival"<<"\t"<<arrival;
					cout<<endl<<endl;
					cout<<"Cash to be Submitted on Reception."<<endl;
					}	
					cout<<endl<<endl;
					cout<<"********************************************************************************************************"<<endl;
					
					cout<<endl<<endl;
		            cout<<"[ YOUR DUE CHARGES HAVE BEEN SUCCESSFULLY DEDUCTED FROM YOUR ACCOUNT ] "<<endl;
					cout<<endl<<endl;
					cout<<"I have read and AGREE to the TERMS and CONODITION"<<endl;
					cout<<endl;
					cout<<"[1] I AGREE"<<endl;
					cout<<"[2] Exit"<<endl;
					cin>>agree;
					if(agree==1){
						cout<<endl<<endl;
					}
					else if(agree==2){
						exit(0);
					}
					cout<<"  *****************************************************************************************************"<<endl;
					cout<<"*                                                RECEIPT                                                "<<endl<<endl<<endl;    
					cout<<"*                                                Your ID :"<<securitycode<<"                            "<<endl;
					cout<<"*                                                Your Name : "<<username<<"                            "<<endl;
					cout<<"*                                                Your Password :"<<userpassword<<"                            "<<endl;
					cout<<"*                                                Your Room : "<<roomm<<"                            "<<endl;
					cout<<"*                                                Your Room No :";
					for(int i=0;i<reqroom;i++)
					{
						cout<<room_no[i]<<", ";
					}
					cout<<endl;
					cout<<"*                                                Floor No :"<<floor_no<<endl;
					cout<<"*                                                Your Total Charges : $"<<charges<<endl;
					
					cout<<"********************************************************************************************************"<<endl;
					cout<<endl<<endl;
					cout<<"CONGRATULATIONS! YOU HAVE SUCCESSFULLY BOOKED YOUR ROOMS"<<endl;
					cout<<"WELCOME"<<"\t"<<username<<endl;
					cout<<"WE ARE GlAD TO kNOW THAT YOU HAVE CHOSEN US OVER OTHERS AND WE ASSURE YOU THAT YOU WILL NEVER BE DISAPPOINTED FROM US."<<endl;
					cout<<"TILL THEN WE AWAITS EXCITEDLY"<<endl;
					cout<<endl<<endl;
					cout<<"THANK YOU"<<endl;
					cout<<"CEO TITANIC HOTEL"<<endl;
				    
				    cout<<endl<<endl;
					cout<<"********************************************************************************************************"<<endl;
					cout<<endl<<endl;
					cout<<"NEW TO THE CITY?"<<endl;
					cout<<endl<<endl;
					cout<<"[1] Book a Ride"<<endl;
					cout<<"[3] Exit"<<endl;	
					cin>>ride;	  
					if(ride==1)
					{
						cout<<endl<<endl;
						cout<<"Book Now:"<<endl<<endl;
						cout<<"[NOTE: ALL THE SERVICES ARE FROM AIRPORT TO THE HOTEL]"<<endl;
						cout<<"[1] Private Chopper"<<endl;
						cout<<"[2] Private Chartered Plane"<<endl;
						cout<<"[3] Private Car"<<endl;
						cin>>bookride;
						if(bookride==1)
						{
							cout<<endl<<endl;
							cout<<"********************************************************************************************************"<<endl;
							cout<<"                                                      PRIVATE CHOPPER"<<endl;
							cout<<"Chartering a private helicopter is simultaneously a no-frills, expedited mode of transport, and a stunning way to get to your destination. Really, it’s the best of both worlds, in that you get an experience while still cutting your travel time significantly. The question, of course, is how to charter a private helicopter quickly and without a deluge of logistics, so you can prioritize your the rest of your travel schedule. Well, consider this your all-access guide to chartering a private helicopter transport that doesn’t compromise on luxury."<<endl;
				            cout<<"Our services are one of the most luxury service. We cost only $250 for an hour ride over the city from airport to [TITANIC HOTEL]."<<endl;
							cout<<endl<<endl;
							cout<<"[NOTE: YOUR HELICOPTER SERVICE CHARGES WILL BE ADDED TO THE ROOM SERVICE CHARGES]"<<endl;
							cout<<endl<<endl;
							cout<<"Do You Want to Continue:"<<endl;
							cout<<endl<<endl;
							cout<<"[1] YES"<<endl;
							cout<<"[2] EXIT"<<endl;
							cin>>chopper;
							cout<<endl<<endl;
							if(chopper==1)
							{
								cout<<endl<<endl;
								cout<<"$250 have been deducted from your CREDIT/DEBIT card"<<endl;
								cout<<endl<<endl;
								cout<<"\t"<<"\t"<<"\t"<<"\t"<<"THANKS FOR VISTING AND BOOKING . HAVE A NICE DAY :)"<<endl;
					
							}
						}
						
						else if(bookride==2)
						{
						    cout<<endl<<endl;
							cout<<"********************************************************************************************************"<<endl;
							cout<<"                                                     PRIVATE CHATTERED PLANE"<<endl;
							cout<<"A charter flight is an unscheduled flight that is not part of a regular airline routing. With a charter flight, you rent the entire aircraft and can determine departure/arrival locations and times. There are several types of charter flights."<<endl;
				            cout<<"Our services are one of the most luxury service. We cost only $1250 for an hour ride over the city from airport to [TITANIC HOTEL]."<<endl;
							cout<<endl<<endl;
							cout<<"[NOTE: YOUR PRIVATE CHARTERED PLANE SERVICE CHARGES WILL BE DEDUCTED FROM YOUR CREDIT/DEBIT CARD]"<<endl;
							cout<<endl<<endl;
							cout<<"Do You Want to Continue:"<<endl;
							cout<<endl<<endl;
							cout<<"[1] YES"<<endl;
							cout<<"[2] EXIT"<<endl;
							cin>>plane;
							cout<<endl<<endl;
							if(plane==1)
							{
								cout<<endl<<endl;
								cout<<"$1250 have been deducted from your CREDIT/DEBIT card"<<endl;
								cout<<endl<<endl;
								cout<<"\t"<<"\t"<<"\t"<<"\t"<<"THANKS FOR VISTING AND BOOKING . HAVE A NICE DAY :)"<<endl;
						}
					}
						
						else if(bookride==3){
							cout<<endl<<endl;
							cout<<"********************************************************************************************************"<<endl;
							cout<<"                                                     PRIVATE CAR"<<endl;
							cout<<"Private transport, as opposed to public transport, is transportation service which is not available for use by the general public. Private transport is the dominant form of transportation in most of the world"<<endl;
				            cout<<"Our services are one of the most luxury service. We cost only $75 for an hour drive from airport to [TITANIC HOTEL]."<<endl;
							cout<<endl<<endl;
							cout<<"[NOTE: YOUR PRIVATE CAR SERVICE CHARGES WILL BE DEDUCTED FROM YOUR CREDIT/DEBIT CARD]"<<endl;
							cout<<endl<<endl;
							cout<<"Do You Want to Continue:"<<endl;
							cout<<endl<<endl;
							cout<<"[1] YES"<<endl;
							cout<<"[2] EXIT"<<endl;
							cin>>car;
							cout<<endl<<endl;
							if(car==1)
							{
								cout<<endl<<endl;
								cout<<"$75 have been deducted from your CREDIT/DEBIT card"<<endl;
								cout<<endl<<endl;
								cout<<"\t"<<"\t"<<"\t"<<"\t"<<"THANKS FOR VISTING AND BOOKING . HAVE A NICE DAY :)"<<endl;
							
						}
						else{
							 exit(0);
						}
					
				                }
					    
					else{
						exit(0);
					}    
				
				
				
			
			break;
	
	    
		case 0:
			exit(0);
			break;
		

break;

}	break;
case 2:
	                cout<<endl<<endl;
					cout<<"**************************************************************************************************************"<<endl;
	              	cout<<"                                       [ TITANIC HOTEL OVERVIEW ]                                             "<<endl;
		            cout<<"**************************************************************************************************************"<<endl;
		            cout<<endl<<endl;
		            cout<<"WELCOME TO TITANIC HOTEL"<<endl;
		            cout<<endl<<endl;
		            cout<<"Surround yourself with serenity in the heart of the bustling city as we welcome you to TITANIC Hotel Lahore. Experience the comforts of home by staying in our modern rooms and suites. Enjoy delicious food at our signature restaurants serving both international and local cuisines. Relax in the fitness centre, spa or swimming pool. With our round-the-clock services, we ensure making your stay pleasant and comfortable, each time you visit"<<endl;
		            cout<<endl<<endl;
		            cout<<"ACCOMMODATION"<<endl;
		            cout<<endl<<endl;
		            cout<<"LUXURY ROOMS:"<<endl;
		            cout<<"Our hotel rooms offer absolute comfort and a design sensibility inspired by soft, muted colour tones. Whether you choose any one of our suites or opt for a room, you can always be sure of a fantastic sleep to leave you feeling refreshed and revitalized."<<endl;
		            cout<<endl<<endl;
		            cout<<"DINING"<<endl;
		            cout<<endl<<endl;
		            cout<<"RESTAURANTS:"<<endl;
		            cout<<"The signature restaurants at Pearl-Continental Hotel Lahore offer local and international cuisines. From buffet breakfast, lunch, dinner and hi-tea along with Ala carte options, we have all tastes covered."<<endl;
		            
	break;


case 3:
	cout<<"Program EXITED"<<endl;
	exit(0);
	break;


}}

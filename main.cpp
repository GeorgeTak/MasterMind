#include <iostream>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int digit1[4],digit2[4];   //kanoume 2 pinakes stous opoious apo8hkeuontai oi 2 (4pshfioi) arithmoi mas
	int j,count=0;             //metrhtes
	int maxAttempts=10;        //afou exei 10 prospathies o 2os paixths                   
	int attemptCount=0;        //arxikopoihsh ths metablhths pou apo8ikeyei se poia prospatheia eimaste
	
	cout<<"                                                 Welcome to Mastermind!"<<endl;
	cout<<" "<<endl;
	
	  //eisagei o 1os paixths ton 4pshfio arithmo toy:
	  cout<<"Player 1, pick up a number!"<<endl;
	  cout<<" "<<endl;
	  
	  //Gia kathe ena apo ta 4 pshfia tou "1ou" arithmou:
	  for(j=0;j<4;j++)
	  {
		  do  	 
	  	   {  
			   cout<<"Enter digit no. "<<(j+1)<<":"<<endl;          	
	  	       cin>>digit1[j];    //to apothikeyei ston pikaka digit1 (mono an einai >1 h <10)
	  	     
	  	     	 //gia na einai to kathe pshfio anamesa sto 1 kai sto 9 kanoume ton elegxo:
			     if (digit1[j] < 1 || digit1[j] > 9) 
				 {
                   cout << "Invalid input, choose a number between 1 and 9:"<<endl;  //an den einai, printarei to ejhs mhnyma
            	 }
		   
			}while(digit1[j] < 1 || digit1[j] > 9);
			
			
	  }
	  
	  //cout<<digit1[0]<<digit1[1]<<digit1[2]<<digit1[3]<<endl;  //printarei ola ta pshfia
      
	  		
	system("CLS");   //kanei clear ton arithmo
	


    //prepei o "eswterikos" kwdikas na ekteleitai a)oso den exoume jeperasei tis max prospathies (10) kai
							                   // b)oi swstoi (kai autoi pou einai sth swsth thesh) arithmoi einai ligoteroi apo 4 (dhladh oso den briskoume ola ta pshfia (4) tou swstou (1ou) arithmou  
	while( (attemptCount<maxAttempts) && (count<4) )
	{
	     cout <<"Attempt #"<< attemptCount + 1 << endl;   //mhnuma pou mas deixnei se poia prospathia eimaste
	
	 
		  //eisagei o 2os paixths ton 4pshfio arithmo toy:
	      cout<<"Player 2, pick up a number:"<< endl;
	      
		  //Gia kathe ena apo ta 4 pshfia tou "2ou" arithmou: 
		  for(j=0;j<4;j++)
		  {
			  do  	 
		  	   {  
				   cout<<"Enter digit no. "<<(j+1)<<":"<<endl;	
		  	       cin>>digit2[j];    //to apothikeyei ston pikaka digit2 (mono an einai >1 h <10)
		  	     	 
		  	     	 //gia na einai to kathe pshfio anamesa sto 1 kai sto 9 kanoume ton elegxo:
				     if (digit2[j] < 1 || digit2[j] > 9) 
					 {
	                   cout << "Invalid input, choose a number between 1 and 9:"<<endl;  //an den einai, printarei to ejhs mhnyma
	            	 }
			   
				}while(digit2[j] < 1 || digit2[j] > 9);
			
			
	  } 	
        
	   //0nizei kathe fora o counter pou deixnei posa pshfia einai swsta (kai sth swsth thesh), wste na mhn prosthetei kathe fora osa eixe apo thn prohgoumenh prospathia
	   //gia px, an sthn 1h prosp brhkame 2/4, kai sthn 2h brhkame 1/4, na mhn mas deixei oti brhkame 3/4 swsta pshfia  	    
       count=0;
       
	   //gia to posoi arithmnoi apo toys 4 einai oi swstoi kai sth swsth thesh kanoume:
	   for(j=0;j<4;j++)
	   {    
             if(digit1[j]==digit2[j])
	        { 
	  	     count+=1;    //auxanetai o metrhths pou deixnei posoi einai autoi
	        }
	    }
         
	    cout<<"You guessed correctly "<< count <<" out of 4 digits who are also on the right position!"<<endl;
        cout<<""<<endl;
        
		attemptCount++;    //prokeimenou na pame sthn 2h,3h,...,10h prospatheia
        	
	}
	
	        //an einai swsta (kai sth swsth thesh) kai ta 4 pshfia, tote:
	        if (count==4)
			{				      
		      cout<<"                                        Congrats, you won the game!"<<endl;
            }
            //alliws an maxara tis prospathies mou kai den brhka ton swsto arithmo, tote:
            else if(attemptCount==maxAttempts)
            {
			
            	cout<<"                                        Unfortunatelly, you lost..."<<endl;
            	cout<<"                                         The right number was "<<digit1[0]<<digit1[1]<<digit1[2]<<digit1[3]<<endl; ;
            	cout<<" "<<endl;
 
            }       

	
	return 0;
	
}

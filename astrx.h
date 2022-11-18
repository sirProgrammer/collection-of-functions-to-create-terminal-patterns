#ifndef astrxLM
#define astrxLM

#include <string> 
#include <iostream>

using namespace std;

void stairsUpSideDown(){   //function to make: ***
		int rows;             //      **
  		cin>>rows;              //    *
  		if(rows>0){
    		for(int i = rows; i>0; i--){
      		string asterix(i,'*');
      		cout<<asterix<<endl;
    		}
  		}else{
  			cout<<"number of rows must be > 0.";
  		}
};

void stairs(){
	int rows;
	cin>>rows;              
	if(rows>0){
		int i = rows-(rows-1);
		for(i; i<=rows; i++){
			string asterix(i,'*');
			cout<<asterix<<endl;
		}
	}else{
		cout<<"number of rows must be > 0.";
		}
		
};



void piramide(){
	int rows;
	cin>>rows;
	if(rows>0){
		int space = rows-1;
		int astrx = 1;
		string spacestr(space,' ');
		string astrxstr(astrx,'*');
		for(space;space>=0;space--){
			string spacestr(space,' ');
			string astrxstr(astrx,'*');
			cout<<spacestr;
			cout<<astrxstr<<endl;
			astrx+=2;
		}

	}else{
		cout<<"number of rows must be > 0.";
	}

};

#endif


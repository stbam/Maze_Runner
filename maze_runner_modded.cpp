//Stanislav Rushnitski
//can stream in a maze and set up the array then take in directions to see if they can traverse the custom maze. 
//10x10 array
#include <iostream>
using namespace std;
int main(){
char s;
int i=0,j=0,counter;
char maze[10][10];//was 10
int starting_col=-1,starting_row=-1,ending_col=-1,ending_row=-1;
int row=0,col=0,row2=0,col2=0;
bool trigger = true;
	while(cin>> s){
		if(s=='0' or s=='1' or s=='2' or s=='3' or s=='4' or s=='5' or s=='6' or s=='7' or s=='8' or s=='9' ){//can rem	
		 maze[i][j]=s;
		j++;
		if(j==10){//was 10
			j=0;
			i++;
		}
//		cout<< i<<"bb"<<j<<endl;
		if(i==10 && trigger==true){//was 9
			int char_to_int= (int)s-48;
	//		cout<< endl<<endl;
			
			if(starting_row==-1 && j>0){
//			cout<<"Enter starting row"<<endl;
			starting_row= char_to_int;
			//cout<<starting_row<<endl;
			row = starting_row;
			}	
			else if(starting_col==-1 &&j>0){
//			cout<<"Enter starting col"<<endl;
			starting_col = char_to_int;	
			col=starting_col;
			} 
			else if(ending_row==-1 && j>0){
//			cout<<"Enter ending row"<<endl;
			ending_row =char_to_int;	
			row2=ending_row;
			}
			else if (ending_col==-1 && j>0){ 
//			cout<<"Enter ending col"<<endl;	
			ending_col = char_to_int;
			col2=ending_col;
			trigger = false;
			}
		}}
		if (s==';' or s=='D' or s=='U' or s=='L' or s=='R'){ //or s=='D' or s=='U' or s=='L' or s=='R'){
		//cout<<maze[row][col] <<endl;
		//cout<<row<<" "<<col<<" "<<s<<endl;
		if(s=='R'&& maze[row][col+1]==maze[row][col]){
            	col++; 
        	}
        	else if(s=='L' && maze[row][col-1]==maze[row][col]){
            	col--;
	       	}
        	else if(s=='U' && maze[row-1][col]==maze[row][col]){
            	row--;
        	}
        	else if(s=='D' && maze[row+1][col]==maze[row][col]){
            	row++;
        	}
		else if(s==';' && row!=starting_row and col!=starting_col){
//		cout<<row2<<" "<<col2<<endl;
		if(row==row2 && col==col2 && row!=starting_row and col !=starting_col){ //col !=1 previously.
            		cout<<"You got out of the maze."<<endl;
			row = starting_row, col = starting_col;
            		}
          	else{
			//cout<<row<<" "<<col;
			row =starting_row, col=starting_col;
            		cout<<"You are stuck in the maze."<<endl;
            		} 
    		}			

		
		}		
		
	}	
}

/* for(int ii=0;ii<10;ii++){
	for(int jj=0;jj<10;jj++){
		cout<<maze[ii][jj];
	}
	cout<<endl;
}

	cout<< starting_row<<" "<<starting_col << endl;
	cout<<ending_row<<" "<<ending_col<<endl;	
}*/


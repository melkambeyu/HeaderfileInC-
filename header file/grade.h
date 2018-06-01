using namespace std;


int grade(int a,int b,int c,int d,int e){ 
       int average;
       int sum;
       sum=a+b+c+d+e;
       average =sum/5;
       
    if(average>90){
		cout <<"you have got A";
	}else if(average<90 && average>80){
		cout << "you have got B";
	}else if(average<80 && average>70){
		cout << "you have got C";
	}else if(average<70 && average>60){
		cout << "you have got D ";
	}else if(average<60){
		cout << "you hava got F";
	}else{
			cout << "you grade is ...............";
	}
}

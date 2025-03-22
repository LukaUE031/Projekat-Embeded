/* game_Play u kojoj irac ima prvi potez (u ovom slucaju potezi zadati datotekom input.txt)
int CPU::game_play(){
srand(time(0));
int tempAI;

while(true){


PlayPostion('X'); //Korisnik bira potez
Board();
tempAI=AIManager();

uint8_t Reg_Value=get_ip();

if(Reg_Value!=0){
		
		if(Reg_Value==1){
		cout<<endl<<"Player 2 WON!";
			return 0;}
		else if(Reg_Value==2){
		cout<<endl<<"Player 1 WON!";
		return 0;}
		else if(Reg_Value==3){
		cout<<"You Tie !"
		return 0;}	
		clean();	
		}
		else{
		write_bram(tempAI,'O');	
		}
	}
}*/


int CPU::game_Play(){
	int tempAI;
	srand(time(0));
	clean();
	tempAI=AIManager();
	while(true){
	write_bram(tempAI,'O');
	Board();
		
	//citanje vrednosti registara i smestanje u promenljivu	
	
	uint8_t Reg_Value=get_ip();
		
		if(Reg_Value!=0){
		
		if(Reg_Value==1){
		cout<<endl<<"Player 2 WON!";
			return 0;}
		else if(Reg_Value==2){
		cout<<endl<<"Player 1 WON!";
		return 0;}
		else if(Reg_Value==3){
		cout<<"You Tie !"
		return 0;}	
		clean();	
		}
		else{
			PlayPosition('X'); //Korisnik bira potez
		}
	}

	return 0;

}
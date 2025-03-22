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
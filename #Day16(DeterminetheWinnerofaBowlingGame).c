int score(int* player,int playerSize){
      int score=0,lastIndex=-1;
      for(int i=0;i<playerSize;i++){
          if(lastIndex!=-1&& i-lastIndex <=2){
              score += player[i]+player[i];
          }
          else{
              score += player[i];
          }
          if(player[i]==10){
              lastIndex=i;
          }
      }
      return score;
}

int isWinner(int* player1, int player1Size, int* player2, int player2Size){
   int score1=score(player1,player1Size);
   int score2=score(player2,player2Size);
   return score1==score2?0:(score1>score2?1:2);
}

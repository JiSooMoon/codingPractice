bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {

   int yourStrongest = 0;
   int yourWeakness = 0;
   int friendStrongest = 0;
   int friendWeakness = 0;
   
   if(yourLeft < yourRight){
      yourStrongest = yourRight;
      yourWeakness = yourLeft;
   }else{
      yourStrongest = yourLeft;
      yourWeakness= yourRight;
   }
   
   if(friendsLeft < friendsRight){
      friendWeakness = friendsLeft;
      friendStrongest = friendsRight;
   }else{
      friendWeakness= friendsRight;
      friendStrongest= friendsLeft;
   }
   cout << "Your Weakness : " << yourWeakness << "  with yourStrongest :" << yourStrongest << endl;
   cout << "Friend Weakness: "<< friendWeakness <<" with friendStrongest : " << friendStrongest << endl;
   if(yourStrongest == friendStrongest && yourWeakness == friendWeakness){
      return true;
   }
   return false;
}

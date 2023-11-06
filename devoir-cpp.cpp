#include<iostream>
#include<stack>
using namespace std ; 
class Stack {
//tableau pour stocker les elements de la pile 

    int *tableau  , top , n ; 
   

public:
    Stack(int valeur = 20) : n(valeur) {
        tableau = new int[n];
        top = -1; // Initialiser le sommet de la pile à -1 (pile vide)
    }
 Stack& operator<<(int n1) {
        if (top < n- 1) {
            tableau[++top] = n1;
        } else {
            cout << "la  pile pleine" << endl;
        }
        return *this; 
    }

    Stack& operator>>(int& n2) {
        if (top >= 0) {
            n2 = tableau[top--];
        } 
      else{
        return *this; 
      }
      }
    
 int operator++() {
if(top == n-1){// cad si la pile est pleine  return 1
    return 1 ; 
}
else {
    return 0 ;
}
  
    }


    int operator--() {
        
     if(top == -1){// cad si la pile est vide return 0
    return 0 ; 
}
else {
    return 1 ;
}
};

int main(){
    int dim , i  , nombre , pile_nombre , est_pleine , est_vide  , n_elements; 
    cout<<"entrer la dimension de la pile " ;
    cin>>dim ; 

Stack pile(dim) ;//on ajoute la dimension choisi on constuctor Stack 

cout<<"veuillez enter le nombre des elements que vous voulez stocker" <<endl ; 
cin>>n_elements ;
//l'utilisateur peut choisi le nombre des elements a ajouter / faut que le nombre choisi ne depasse pas la dimension + on peut utiliser les exception (probleme du temps ) 
for(i =0 ; i<n_elements ; i++){
cout<<"veuillez enter le nombre numero " << i+1 << endl ; 
cin>> nombre ;  // ajouter les elements a la pile 
pile << nombre ; 
} 
for(i =0 ; i<n_elements ; i++){

pile >> pile_nombre ; // afficher les elements de la pile 
cout<<"l'element numero " << i+1 <<"de la pile est :" <<pile_nombre << endl ;  
} 

est_pleine = ++pile ; 
est_vide = --pile ; 

if(est_pleine == 1 ){
    cout<<"la pile est pleine " <<endl  ; 
}
if(est_vide == 0){
    cout<<"la pile est vide" << endl  ;
}

else{
    cout<<"la n'est pas pleine " <<endl ;
}
    return 0 ; 
}
#include<iostream>
using namespace std ;

const int MAX_ITEMS = 100 ; //maximum number of itme in inventory
struct InventoryItem{
    string name ;
    double price ;
    int quantity ;
    string supplier ;
};

InventoryItem inventory[MAX_ITEMS] ; //array of inventory items

int itemCount = 0;

//function to add new item to inventory 
void addItem(){
  if(itemCount == MAX_ITEMS){
    cout<<"Inventory is full\n" ;
    return ;
  }
  InventoryItem newItem ;
  cout<<"Enter item name :" ;
  cin>>newItem.name ;
  cout<<"Enter item price: " ;
  cin>>newItem.price ;
  cout<<"Enter item quantity :" ;
  cin>>newItem.quantity ;
  cout<<"Enter item supplier : " ;
  cin>>newItem.supplier ;

  inventory[itemCount] = newItem ;
  itemCount++ ;
  cout<<"Item added successfully \n" ; 

}

//function to remove an item from inventory
void removeItem(){
  if(itemCount == 0){
     cout<<"Inventory is empty\n" ;
     return ;
  }
  
  string itemName ;
  cout<<"Enter item name to remove:" ;
  cin>>itemName ;

bool found = false ;
for(int i = 0;i < itemCount;i++){
    if(inventory[i].name == itemName){
        for (int j = i; j < itemCount -1 ; j++)
        {
           inventory[j] = inventory[j+1] ;
        }
        itemCount-- ;
        found = false ;
        cout<<"Item removed Successfully\n" ;
        break ;
    }
}
if(!found){
    cout<<"Item not found\n" ;
}
}

//function to display all items in inventory 
void displayInventory(){
    if(itemCount == 0){
        cout<<"Inventory is Empty\n" ;
        return ;
    }
    cout<<"Name \t Price \t Quantity \t Supplier \t" ;
    for(int i = 0;i < itemCount;i++){
        cout<<inventory[i].name<<"\t" <<inventory[i].price <<inventory[i].quantity<<inventory[i].supplier ;
    }
}

int main(){
    int choice ;
    do{
      cout<<"Inventory Management System\n" ;
      cout<<"1.Add item \n" ;
      cout<<"2.Remove item \n" ;
      cout<<"3.Display item \n" ;
      cout<<"4.Exit \n" ;
      cout<<"Enter your choice : " ;
      cin>>choice ;
      switch (choice)
      {
      case 1 : 
      addItem() ;
        break;
        case 2 : 
        removeItem() ;
        break;
        case 3 : 
        displayInventory() ;
        break;
        case 4 : 
        cout<<"Exiting ...\n" ; 
        break ;
      default:
      cout<<"Invalid choice.Please try again. \n" ;
        break;
      }
    }while(choice != 4) ;
    return 0 ;
}
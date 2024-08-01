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
}
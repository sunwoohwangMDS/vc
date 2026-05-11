#include "ctypes.h"

struct table_data_type Table_Data[NUMBER_OF_TABLES];

struct table_data_type Get_Table_Record(table_index_type Table)
{
  return (Table_Data[Table]);
}

void Update_Table_Record(table_index_type Table, struct table_data_type Data)
{
  Table_Data[Table] = Data;
}
/* This function will add a free dessert to specific orders based on the 
   entree, salad, and beverage choice */
void Add_Included_Dessert2(struct order_type* Order)
{
  if(Order->Entree == STEAK &&
     Order->Salad == CAESAR &&
     Order->Beverage == MIXED_DRINK) {
    
    Order->Dessert = CAKE;
  
  } else if(Order->Entree == LOBSTER &&
            Order->Salad == GREEN &&
            Order->Beverage == WINE) {
    
    Order->Dessert = CAKE;  
  }
}
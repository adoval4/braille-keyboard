#include <CapacitiveSensor.h>

// capacitive sensores
CapacitiveSensor   cs_1 = CapacitiveSensor(8,13);        
CapacitiveSensor   cs_2 = CapacitiveSensor(8,12);        
CapacitiveSensor   cs_3 = CapacitiveSensor(8,11);        
CapacitiveSensor   cs_4 = CapacitiveSensor(3,7);        
CapacitiveSensor   cs_5 = CapacitiveSensor(3,6);        
CapacitiveSensor   cs_6 = CapacitiveSensor(3,5);        
CapacitiveSensor   cs_7 = CapacitiveSensor(8,9);        
CapacitiveSensor   cs_8 = CapacitiveSensor(3,4);        
   

boolean cs_1_started = false;
boolean cs_2_started = false;
boolean cs_3_started = false;
boolean cs_4_started = false;
boolean cs_5_started = false;
boolean cs_6_started = false;
boolean cs_7_started = false;
boolean cs_8_started = false;

boolean cs_1_touched = false;
boolean cs_2_touched = false;
boolean cs_3_touched = false;
boolean cs_4_touched = false;
boolean cs_5_touched = false;
boolean cs_6_touched = false;
boolean cs_7_touched = false;
boolean cs_8_touched = false;

boolean anyone_touched = false;


// threesholds
int active_touch_threeshold = 200;
int inactive_touch_threeshold = 100;

char out = ' ';



void setup() 
{                
  Serial.begin(10600);  
  Keyboard.begin();
}

void set_output() 
{
  
  
  if
  (
    cs_1_touched == true && cs_4_touched == false &&
    cs_2_touched == false && cs_5_touched == false &&
    cs_3_touched == false && cs_6_touched == false
  )
  {
    out = 'a';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == false &&
    cs_2_touched == true && cs_5_touched == false &&
    cs_3_touched == false && cs_6_touched == false
  )
  {
    out = 'b';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == true &&
    cs_2_touched == false && cs_5_touched == false &&
    cs_3_touched == false && cs_6_touched == false
  )
  {
    out = 'c';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == true &&
    cs_2_touched == false && cs_5_touched == true &&
    cs_3_touched == false && cs_6_touched == false
  )
  {
    out = 'd';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == false &&
    cs_2_touched == false && cs_5_touched == true &&
    cs_3_touched == false && cs_6_touched == false
  )
  {
    out = 'e';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == true &&
    cs_2_touched == true && cs_5_touched == false &&
    cs_3_touched == false && cs_6_touched == false
  )
  {
    out = 'f';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == true &&
    cs_2_touched == true && cs_5_touched == true &&
    cs_3_touched == false && cs_6_touched == false
  )
  {
    out = 'g';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == false &&
    cs_2_touched == true && cs_5_touched == true &&
    cs_3_touched == false && cs_6_touched == false     
  )
  {
    out = 'h';
  }
  
  if
  (
    cs_1_touched == false && cs_4_touched == true &&
    cs_2_touched == true && cs_5_touched == false &&
    cs_3_touched == false && cs_6_touched == false
  )
  {
    out = 'i';
  }
  
  if
  (
    cs_1_touched == false && cs_4_touched == true &&
    cs_2_touched == true && cs_5_touched == true &&
    cs_3_touched == false && cs_6_touched == false
  )
  {
    out = 'j';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == false &&
    cs_2_touched == false && cs_5_touched == false &&
    cs_3_touched == true && cs_6_touched == false
  )
  {
    out = 'k';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == false &&
    cs_2_touched == true && cs_5_touched == false &&
    cs_3_touched == true && cs_6_touched == false      
  )
  {
    out = 'l';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == true &&
    cs_2_touched == false && cs_5_touched == false &&
    cs_3_touched == true && cs_6_touched == false      
  )
  {
    out = 'm';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == true &&
    cs_2_touched == false && cs_5_touched == true &&
    cs_3_touched == true && cs_6_touched == false     
  )
  {
    out = 'n';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == false &&
    cs_2_touched == false && cs_5_touched == true &&
    cs_3_touched == true && cs_6_touched == false     
  )
  {
    out = 'o';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == true &&
    cs_2_touched == true && cs_5_touched == false &&
    cs_3_touched == true && cs_6_touched == false     
  )
  {
    out = 'p';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == true &&
    cs_2_touched == true && cs_5_touched == true &&
    cs_3_touched == true && cs_6_touched == false     
  )
  {
    out = 'q';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == false &&
    cs_2_touched == true && cs_5_touched == true &&
    cs_3_touched == true && cs_6_touched == false     
  )
  {
    out = 'r';
  }
  
  if
  (
    cs_1_touched == false && cs_4_touched == true &&
    cs_2_touched == true && cs_5_touched == false &&
    cs_3_touched == true && cs_6_touched == false    
  )
  {
    out = 's';
  }
  
  if
  (
    cs_1_touched == false && cs_4_touched == true &&
    cs_2_touched == true && cs_5_touched == true &&
    cs_3_touched == true && cs_6_touched == false     
  )
  {
    out = 't';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == false &&
    cs_2_touched == false && cs_5_touched == false &&
    cs_3_touched == true && cs_6_touched == true      
  )
  {
    out = 'u';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == false &&
    cs_2_touched == true && cs_5_touched == false &&
    cs_3_touched == true && cs_6_touched == true      
  )
  {
    out = 'v';
  }
  
  if
  (
    cs_1_touched == false && cs_4_touched == true &&
    cs_2_touched == true && cs_5_touched == true &&
    cs_3_touched == false && cs_6_touched == true      
  )
  {
    out = 'w';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == true &&
    cs_2_touched == false && cs_5_touched == false &&
    cs_3_touched == true && cs_6_touched == true     
  )
  {
    out = 'x';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == true &&
    cs_2_touched == false && cs_5_touched == true &&
    cs_3_touched == true && cs_6_touched == true     
  )
  {
    out = 'y';
  }
  
  if
  (
    cs_1_touched == true && cs_4_touched == false &&
    cs_2_touched == false && cs_5_touched == true &&
    cs_3_touched == true && cs_6_touched == true      
  )
  {
    out = 'z';
  }

  if
  (
    cs_1_touched == false && cs_4_touched == false &&
    cs_2_touched == false && cs_5_touched == false &&
    cs_3_touched == false && cs_6_touched == false && 
    cs_7_touched == true && cs_8_touched == false     
  )
  {
    Keyboard.write(' ');
  }

  if
  (
    cs_1_touched == false && cs_4_touched == false &&
    cs_2_touched == false && cs_5_touched == false &&
    cs_3_touched == false && cs_6_touched == false && 
    cs_7_touched == false && cs_8_touched == true    
  )
  {
    Keyboard.write(8);
  }

}

void loop()                    
{
  // read capacitive sensors  
  long total_1 =  cs_1.capacitiveSensor(30);
  long total_2 =  cs_2.capacitiveSensor(30);
  long total_3 =  cs_3.capacitiveSensor(30);
  long total_4 =  cs_4.capacitiveSensor(30);
  long total_5 =  cs_5.capacitiveSensor(30);
  long total_6 =  cs_6.capacitiveSensor(30);
  long total_7 =  cs_7.capacitiveSensor(30);
  long total_8 =  cs_8.capacitiveSensor(30);
 
  Serial.print(total_1);
  Serial.print('\t');
  Serial.print(total_2);
  Serial.print('\t');
  Serial.print(total_3);
  Serial.print('\t');
  Serial.print(total_4);
  Serial.print('\t');
  Serial.print(total_5);
  Serial.print('\t');
  Serial.print(total_6);
  Serial.print('\t');
  Serial.print(total_7);
  Serial.print('\t');  
  Serial.println(total_8);



  if( 
    cs_1_started == true || 
    cs_2_started == true || 
    cs_3_started == true || 
    cs_4_started == true || 
    cs_5_started == true || 
    cs_6_started == true || 
    cs_7_started == true || 
    cs_8_started == true
  )
  {
    anyone_touched = true;
  }
  else
  {
    anyone_touched = false;
  }  

  if( cs_1_started == false )
  {
    if( total_1 > active_touch_threeshold )
    {
      // set back button as touched  
      cs_1_started = true;
      cs_1_touched = true;
  
    }
  }
  else
  {
    if( total_1 < active_touch_threeshold )
    {
      // set back button as touched  
      cs_1_started = false;
     
    }
  }



  if( cs_2_started == false )
  {
    if( total_2 > active_touch_threeshold )
    {
      // set back button as touched  
      cs_2_started = true;
      cs_2_touched = true;
  
    }
  }
  else
  {
    if( total_2 < active_touch_threeshold )
    {
      // set back button as touched  
      cs_2_started = false;
     
    }
  }



  if( cs_3_started == false )
  {
    if( total_3 > active_touch_threeshold )
    {
      // set back button as touched  
      cs_3_started = true;
      cs_3_touched = true;
  
    }
  }
  else
  {
    if( total_3 < active_touch_threeshold )
    {
      // set back button as touched  
      cs_3_started = false;
     
    }
  }



  if( cs_4_started == false )
  {
    if( total_4 > active_touch_threeshold )
    {
      // set back button as touched  
      cs_4_started = true;
      cs_4_touched = true;
  
    }
  }
  else
  {
    if( total_4 < active_touch_threeshold )
    {
      // set back button as touched  
      cs_4_started = false;
     
    }
  }  


  if( cs_5_started == false )
  {
    if( total_5 > active_touch_threeshold )
    {
      // set back button as touched  
      cs_5_started = true;
      cs_5_touched = true;
  
    }
  }
  else
  {
    if( total_5 < active_touch_threeshold )
    {
      // set back button as touched  
      cs_5_started = false;
     
    }
  }  



  if( cs_6_started == false )
  {
    if( total_6 > active_touch_threeshold )
    {
      // set back button as touched  
      cs_6_started = true;
      cs_6_touched = true;
  
    }
  }
  else
  {
    if( total_6 < active_touch_threeshold )
    {
      // set back button as touched  
      cs_6_started = false;
     
    }
  }


  
  if( cs_7_started == false )
  {
    if( total_7 > active_touch_threeshold )
    {
      // set back button as touched  
      cs_7_started = true;
      cs_7_touched = true;
  
    }
  }
  else
  {
    if( total_7 < active_touch_threeshold )
    {
      // set back button as touched  
      cs_7_started = false;

    }
  } 

  if( cs_8_started == false )
  {
    if( total_8 > active_touch_threeshold )
    {
      // set back button as touched  
      cs_8_started = true;
      cs_8_touched = true;
  
    }
  }
  else
  {
    if( total_8 < active_touch_threeshold )
    {
      // set back button as touched  
      cs_8_started = false;

    }
  } 


  if( 
    anyone_touched == true &&
    cs_1_started == false && 
    cs_2_started == false && 
    cs_3_started == false && 
    cs_4_started == false && 
    cs_5_started == false && 
    cs_6_started == false && 
    cs_7_started == false && 
    cs_8_started == false 
  )
  {
    set_output();
       
    
    if( out != ' ' )
    {
       Keyboard.write(out);
    }

    cs_1_touched = false;
    cs_2_touched = false;
    cs_3_touched = false;
    cs_4_touched = false;
    cs_5_touched = false;
    cs_6_touched = false;
    cs_7_touched = false;
    cs_8_touched = false;
     
    out = ' ';

  }

  delay(30);
  

}

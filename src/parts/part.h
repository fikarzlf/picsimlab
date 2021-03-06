/* ########################################################################

   PICsimLab - PIC laboratory simulator

   ########################################################################

   Copyright (c) : 2010-2018  Luis Claudio Gambôa Lopes

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

   For e-mail suggestions :  lcgamboa@yahoo.com
   ######################################################################## */

#ifndef PART_H
#define	PART_H
    
#include "../boards/board.h"
    
    /**
     * @brief PART class
     *
     * class definition of parts used in picsimlab spare parts window.
     */
class part
{
  public:
           
     /**
     * @brief  Return the name of part
     */ 
      virtual String GetName(void)=0; 
           
     /**
     * @brief  Called ever 100ms to draw part
     */ 
      virtual void Draw(void)=0;         
                
     /**
     * @brief  Called every start of CPU process
     */ 
      virtual void PreProcess (void){};  
                      
     /**
     * @brief  Called every CPU step
     */ 
      virtual void Process (void){};     
                      
     /**
     * @brief  Called every end of CPU process
     */ 
      virtual void PostProcess (void){}; 
                      
     /**
     * @brief  Return the filename of part picture
     */ 
      virtual String GetPictureFileName(void)=0;  
                      
     /**
     * @brief  Return the filename of part picture input map
     */ 
      virtual String GetInputMapFile(void)=0;      
                      
     /**
     * @brief  Return the filename of part picture output map
     */ 
      virtual String GetOutputMapFile(void)=0;     
                      
     /**
     * @brief  Return the filename of properties window XML file
     */ 
      virtual String GetPropertiesWindowFile(void)=0; 
                      
     /**
     * @brief  Reset part status
     */ 
      virtual void Reset(void){};   
                      
     /**
     * @brief  Event handler on the part
     */ 
      virtual void EvMouseButtonPress(uint button, uint x, uint y,uint state){};    
                      
     /**
     * @brief  Event handler on the part
     */ 
      virtual void EvMouseButtonRelease(uint button, uint x, uint y,uint state){};  
                      
     /**
     * @brief  Event handler on the part
     */ 
      virtual void EvMouseMove(uint button, uint x, uint y,uint state){};  
                      
     /**
     * @brief  Event handler on the part
     */ 
      virtual void EvKeyPress(uint key, uint mask){};  
                      
     /**
     * @brief  Event handler on the part
     */ 
      virtual void EvKeyRelease(uint key,uint mask){};
                      
     /**
     * @brief  Called to save part preferences in configuration file
     */ 
      virtual String WritePreferences(void)=0;   
                      
     /**
     * @brief  Called whe configuration file load  preferences 
     */ 
      virtual void ReadPreferences(String value)=0; 
                      
     /**
     * @brief  return the input ids numbers of names used in input map
     */ 
      virtual unsigned short get_in_id(char * name)=0; 
                      
     /**
     * @brief  return the output ids numbers of names used in output map  
     */ 
      virtual unsigned short get_out_id(char * name)=0; 
                      
     /**
     * @brief  Called to configure the properties window
     */ 
      virtual void ConfigurePropertiesWindow(CPWindow *  WProp)=0;
                      
     /**
     * @brief  Called when properties window close 
     */ 
      virtual void ReadPropertiesWindow(CPWindow *  WProp)=0; 
                      
     /**
     * @brief  Used by properties window combos
     */ 
      virtual void ComboChange(String value){}; 
                      
     /**
     * @brief  Used by properties window filedialogs
     */ 
      virtual void filedialog_EvOnClose(int retId){}; 
                      
     /**
     * @brief  Called once on part creation
     */ 
      part();           
                      
     /**
     * @brief  Called once on part destruction
     */ 
      virtual ~part(void){};  
                      
     /**
     * @brief  Return the Bitmap of part
     */ 
      lxBitmap * GetBitmap(void){return Bitmap;}; 
                      
     /**
     * @brief  Return X position of part
     */ 
      int GetX(void){return X;}; 
                      
     /**
     * @brief  Return Y position of part
     */ 
      int GetY(void){return Y;}; 
                      
     /**
     * @brief  Set X position of part
     */ 
      void SetX(int x){X=x;}; 
                      
     /**
     * @brief  Set Y position of part
     */ 
      void SetY(int y){Y=y;}; 
                      
     /**
     * @brief  Return width of part
     */ 
      unsigned int GetWidth(void){return Width;}; 
                      
     /**
     * @brief  Return height of part
     */ 
      unsigned int GetHeight(void){return Height;}; 
                      
     /**
     * @brief  Return if point x,y is inside of part
     */ 
      int PointInside(int x, int y); 
      
      int id; ///< part ID
 protected:
      input_t  input[100];  ///< input map elements
      output_t output[100]; ///< output map elements 
      int inputc;           ///< input map elements counter 
      int outputc;          ///< output map elements counter   
      unsigned int Height;  ///< Height of part
      unsigned int Width;   ///< Width of part
      int X;                ///< X position of part
      int Y;                ///< Y position of part
      lxBitmap * Bitmap;    ///< Internal Bitmap   
      CCanvas canvas;       ///< Internal Canvas to draw in bitmap
      unsigned int refresh; ///< redraw is needed 
      
           /**
     * @brief  read maps
     */  
      void ReadMaps(void);  ///<  
            
 private:      
                     
     /**
     * @brief  Read the Input Map
     */  
     void ReadInputMap(String fname); 
                     
     /**
     * @brief  Read the Output Map
     */ 
     void ReadOutputMap(String fname);
};

#endif	/* PART_H */

